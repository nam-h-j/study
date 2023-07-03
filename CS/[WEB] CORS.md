# CORS
## CORS?
- cross origin resource sharing
- 다른 오리진에서 요청이 들어왔을때 발생하는 오류
- sop 정책에 맞지 않는 요청을 거부함

## Sop?
- same origin policy
- 같은 오리진에서만 요청 할 수 있도록 하는 정책

## origin?
- url에서 프로토콜, 호스트네임, 포트번호를 의미함

## 설정방법
### 프론트엔드
- proxy 서버의 설정을 통해서 포트번호나 host를 맞춰준다

### 백엔드
- cors 설정을 통해서 sop 정책에 따르지 않게 하기
- 특정 id 대역을 예외처리해주기 (화이트리스트 작성)
- 배포환경과 안정성 문제로 인해서 CORS 정책 설정은 프론트보단 서버에서 해야한다.

## Simple request, Preflight request
### Simple request
- GET, POST, HEAD 등의 메서드
- application/x-www-form-urlendoded, multipart/form-data, text/plain등의 컨텐츠 헤더

### Preflight request
- Simple request이외의 메서드나 컨텐츠헤더
- Preflight request는 보통 데이터의 갱신이나 삭제 요청등 데이터에 영향을 주는 경우이다.
- 따라서 안정성을 위해서 option 메소드를 통해서 cors인지 한 번 더 요청을 하게 된다.

## Access-Control-Allow-Credentials
- 쿠키나 인증헤더를 함께 요청에 보낼때 위 정책에 대한 옵션을 true로 설정해줘야 한다.
- 프론트엔드와 백엔드 모두 설정되어야 통신이 가능하다.
- 쿠키나 인증헤더는 민감한 정보이기 때문에 cors설정에 한 번 더 해당 옵션을 통해 걸러주는 장치이다.
