# Vuex 


## Vuex에서는 mutation을 호출할때 commit 메서드를 사용해야한다.
- 상태 추적 및 디버깅
- 미들웨어 및 플러그인
- 코드 일관성과 유지보수성

## 비동기 작업의 경우 action을 통해서 mutation을 호출하는 것을 권장한다.
- action에서 비동기 작업을 진행하고
- commit 메서드를 통해서 mutation을 호출한다.
- 비동기 작업을 분리시켜야 추적에 어려움이 없어지고 상태 일관성 유지에도 도움이 된다.
