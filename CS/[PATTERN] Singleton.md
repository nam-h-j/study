# Singleton
- 싱글톤 패턴
- 시스템로깅, 앱 환경설정, 앱에서 전역으로 접근할 때 사용하는 패턴
- 생성자는 private으로 만들어서 직접 접근 불가능, static 함수를 통해서 접근해야 함
## Singleton의 조건
1. 하나의 객체 인스턴스만 존재
2. 스태틱 함수로 객체에 접근
## Singleton 패턴 구조
```js
class Singleton {
  constructor() {
    // 싱글톤 인스턴스는 하나만 존재해야 하기 때문에 스코프에 존재하는지 검사
    if (Singleton.instance) {
      return console.warn('Warn : Single tone class already instaniated')
    }
    Singleton.instance = this
    this.version = Date.now()
    this.config = 'test'
  }
  static getInstance() {
    if (!this.instance) {
      this.instance = new SingleTon()
    }
    return this.instance
  }
}
```
## Singleton 접근방법
```js
// 잘못 된 접근 방법
const s1 = new Singleton()
console.log(s1)
const s2 = new Singleton()
console.log(s2)
// s1 결과 ===> {version: '....', config: 'test'}
// s2 결과 ===> 'Warn : Single tone class already instaniated'

// 접근 메소드(getInstance)를 통해서 접근해야 함
const singleton1 = Singleton.getInstance()
console.log(singleton1)

const singleton2 = Singleton.getInstance()
console.log(singleton2)

// 결과적으로 같은 Singleton Instance를 사용하게 됨
const isEqual = singleton1 === singleton2 
console.log(isEqual)

// singleton1 결과 ===> {version: '....', config: 'test'}
// singleton2 결과 ===> {version: '....', config: 'test'}
// isEqual 결과 ===> true // 
```

## 장점
- 하나의 인스턴스에서 리소스관리
- 코드 중복 방지
- 스태틱 맴버를 통해서 전역에서 접근 가능

## 단점
- 싱글톤 객체에 접근하는 객체의 추적이 어려움
- 전역에서 접근 가능하기 때문에 많이 사용하면 할 수록 추적이 어려워짐
- 싱글톤 객체는 의존성이 강함 따라서 테스트가 어려워짐
- 이 단점을 해결 하기 위해서 DI(의존성 주입)를 사용 함

## 싱글톤의 목적과 특징
- 클래스의 인스턴스가 단 하나만 존재하도록 보장하는 것이 목적
- 아무데서나 편리하게 접근하라고 만들어진 패턴이 아니다.
- 따라서 매우 제한적으로 사용하여야 함
- 편리하다는 이유로만 사용하면 기술부채가 늘어날 가능성이 매우 큰 패턴이다.
