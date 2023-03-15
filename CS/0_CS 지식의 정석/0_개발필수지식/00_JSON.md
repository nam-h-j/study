# 데이터 포맷, JSON(JS Object Notation)
## 데이터?
- 이론을 세우는데 기초가 되는 사실
- 서비스의 근본 뼈대
## JSON
- JS 객체 "문법"으로 구조화된 표준포맷
- JS의 undefined 를 제외한 기본 데이터타입, 다른 객체 포함
  - string은 큰 따옴표만 사용한다
  - 기본 데이터 타입 : Number, String, Boolean, Array, Object, null
- JSobj != JSON
- key : value
- 자바스크립트와 호환성이 좋다
- 각 객체는 다른 타입으로 지정 가능
```json
{
  "metalica" :[
      {"name":"james", "age":"60"},
      {"name":"lars","age": 60}
  ]
} 
```
- 데이터 접근방법
```js
const json = `{
  "metalica": [
    { "name": "james", "age": "60" },
    { "name": "lars", "age": 60 }
  ]
}`;

const parsed = JSON.parse(json)

console.log(parsed.metalica[0])
console.log(parsed.metalica[0].name)
console.log(parsed.metalica[0]["name"])
```
## JSON 장점
- 텍스트로 이루어져서 사람과 컴퓨터 모두 읽고 쓰기 쉽다.
- XML에 비해 가볍다.
- 언어와 플랫폼에 독립적이므로 서로 다른 시스템 간에 객체 교환에 용이
- API, Config에 주로 사용함
