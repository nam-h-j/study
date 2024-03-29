# JWT와 로그인

## 로그인 기본 동작 방식

1. 유저가 로그인을 요청한다.
1. 서버는 인증값을 발급해준다.
1. 유저가 서비스를 요청한다.
1. 서버는 인증이 필요한 서비스에 요청을 받으면 인증값을 확인하고 제공해준다.

## 로그인방식

- 크게 세션방식과 토큰 방식이 있다.
- 큰 차이점은 인증값 내용에 있다.

### Session

1. 유저가 로그인을 요청한다.
1. 서버는 인증값을 발급해준다.
1. 서버는 발급한 인증값과 시간등의 정보를 "세션스토리지에 저장"해 둔다.
1. 유저가 서비스를 요청한다.
1. 서버는 유저가 가지고 있는 "인증값과 세션스토리지 정보를 조회"하고 문제가 없으면 제공해준다.

### JWT token

1. 유저가 로그인을 요청한다.
1. 서버는 인증값(토큰)을 발급해준다.
1. 이때 서버는 토큰에 유효기간, 회원정보 등 다양한 정보를 기록해서 발급하게 된다.
1. 유저가 서비스를 요청한다.
1. 서버는 유저가 가지고 있는 "토큰만 확인"하고 문제가 없으면 제공해준다.

## JWT 장점

- JWT는 인증값을 따로 저장해두지 않기 때문에(stateless) 스토리지 공간을 차지하지 않는다.
- JWT는 토큰만 확인하고 세션 방식처럼 조회, 비교하는 단계가 없기 때문에 빠르다.

## JWT의 구조

- header, payload, verify_signature 세가지 값을 가진다
- 세가지 값을 Base64형태로 인코딩한 것

### Header

- typ => 토큰의 타입을 지정한다.(JWT)
- alg
  - 해싱 알고리즘을 지정한다.
  - 보통 HMAC, SHA256, RSA를 사용한다
  - 토큰을 검증할때 사용되는 signature 부분에서 사용된다.

```json
{
  "alg": "HS256",
  "typ": "HS256"
}
```

### Payload

- 토큰의 정보가 들어있다.
- 여기에 담는 정보의 한 '조각'을 클레임(claim)이라고 부른다.
- 클레임은 크게 세종류가 있다.
  - 등록된 클레임 (registered claim)
    - 토큰에 대한 정보를 담기 위한 이름이 이미 정해진 클레임
    - 클레임 사용은 모두 선택적(optional)이다.
    - 등록된 클레임 종류
      - iss: 토큰 발급자 (issuer)
      - sub: 토큰 제목 (subject)
      - aud: 토큰 대상자 (audience)
      - exp: 토큰의 만료시간 (expiraton)
        - 시간은 NumericDate 형식 (예: 1480849147370)
        - 현재 시간보다 이후로 설정되어 있어야 한다.
      - nbf: Not Before
        - 토큰의 활성 날짜와 비슷한 개념.
        - NumericDate 형식으로 날짜를 지정.
        - 이 날짜가 지나기 전까지는 토큰이 처리되지 않는다.
      - iat: 토큰이 발급된 시간 (issued at)
        - 토큰의 age 가 얼마나 되었는지 판단 할 수 있다.
      - jti: 중복처리 방지
        - JWT의 고유 식별자, 주로 중복적인 처리를 방지하기 위하여 사용.
        - 일회용 토큰에 사용하면 유용하다.
  - 공개 클레임 (public claim)
    - 공개 클레임들은 충돌이 방지된 (collision-resistant) 이름을 가지고 있어야 한다.
    - 충돌을 방지하기 위해서 보통 이름을 URI 형식으로 한다.
      ```json
      {
        "https://johndoe.com/jwt_claims/is_admin": true
      }
      ```
  - 비공개 클레임 (private claim)
    - 클라이언트와 서버 간 협의하에 사용되는 클레임 이름.
    - 이름이 중복되어 충돌이 될 수 있으니 사용할때에 유의해야 한다.
      ```json
      {
        "username": "johndoe"
      }
      ```

```json
{
  "iss": "johndoe.com", //등록된 클레임
  "exp": "1485272342321", //등록된 클레임
  "https://johndoe.com/jwt_claims/is_admin": true, //공개 클레임
  "userId": "11028312347100", //비공개 클레임
  "username": "johndoe" //비공개 클레임
}
```

### Signature

- 서명, 헤더의 인코딩 값, 정보(payload)의 인코딩값을 합친 후 비밀키로 해시 하여 생성

```
//슈도코드
HMACSHA256(
  base64UrlEncode(header) + "." +
  base64UrlEncode(payload),
  secret)
```

- 해시 값을 base64형태로 인코딩 (hex => base64)

### Token

- 위의 세가지 인코딩 값을 "." 을 중간자로 하여 합쳐주면 하나의 토큰이 된다.
- 완성된 토큰 값은 https://jwt.io/ 의 디버거에서 내용 확인이 가능하다.
