# 단방향, 양방향 데이터 바인딩 (one-way and two-way data binding)
- 프론트엔드에서 데이터(상태)를 동기화 하는 방법
  > How to synchronize data (state) in the frontend.
# 양방향 바인딩 (two-way data binding)
## 구조 (struct)
- mvc 패턴의 경우<br/>
![image](https://github.com/nowispresent/study/assets/113965342/c1f1bb98-93e6-47fe-891d-c3443cfa61f4)
<br/>
- way1 : 뷰 -> 이벤트 -> 컨트롤러 -> 모델 -> 뷰
- way2 : 컨트롤러 -> 뷰
## 장점
- 간편한 데이터 동기화
  - 양방향 데이터 바인딩은 모델과 뷰 간의 데이터 동기화를 자동으로 처리.
  - 사용자가 입력한 값이 모델에 바로 반영, 모델의 변경이 뷰에 자동으로 반영.
  - 데이터의 동기화 작업을 별도로 구현할 필요가 없다.

- 사용자 경험 향상
  - 양방향 데이터 바인딩은 실시간으로 데이터의 변경을 반영하기 때문에 사용자 경험을 향상시킨다.
  - 입력 필드에 값을 입력하거나 변경할 때, 즉각적으로 모델이 업데이트되고 이에 따라 화면이 업데이트되기 때문에 사용자는 더 나은 반응성과 빠른 피드백을 받을 수 있다.

- 코드의 간결성
  - 양방향 데이터 바인딩을 사용하면 데이터의 변경을 처리하기 위해 별도의 이벤트 핸들러나 콜백 함수를 작성할 필요가 없다.
  - 데이터의 변경과 UI의 업데이트가 자동으로 처리되기 때문에 코드가 더 간결하고 직관적이게 된다.
  - 따라서 개발 난이도가 낮음.

- 개발 생산성 향상
  - 양방향 데이터 바인딩은 개발 생산성을 향상시킨다.
  - 데이터와 UI의 연결이 자동으로 이루어지기 때문에 데이터의 변경에 대한 작업이 간소화, 빠르게 프로토타이핑하고 개발할 수 있다.

- 유지보수 용이성
  - 양방향 데이터 바인딩을 사용하면 데이터의 흐름이 단방향으로 제한되지 않기 때문에 유지보수가 용이해진다.
  - 모델과 뷰 간의 양방향 연결이 있기 때문에 필요에 따라 뷰에서 데이터를 변경하거나 모델에서 데이터를 갱신할 수 있다.
    
## 단점
- 복잡성
  - 양방향 데이터 흐름은 데이터의 변경이 양쪽으로 전파될 수 있기 때문에 코드의 복잡성이 증가할 수 있다.
  - 데이터 변경에 따른 다양한 상호작용과 검증 규칙을 처리해야 하므로 코드의 이해와 유지보수가 어려워질 수 있다.

- 예측 불가능성
  - 양방향 데이터 흐름은 데이터의 변경이 예측 가능한 순서로 일어나지 않을 수 있다.
  - 데이터가 양쪽으로 전파되는 동안 다른 요소들의 상태와 상호작용에 따라 예상치 못한 결과가 발생할 수 있다.

- 디버깅의 어려움
  - 양방향 데이터 흐름은 데이터의 변경이 여러 컴포넌트 간에 전파되기 때문에 버그를 찾고 해결하기가 어려울 수 있다.
  - 데이터의 흐름을 추적하고 각 컴포넌트 간의 관계를 이해하는 것이 어렵기 때문에 디버깅에 시간과 노력이 더 필요할 수 있다.

- 예기치 않은 부작용
  - 양방향 데이터 흐름에서 데이터 변경이 일어날 때, 예기치 않은 부작용이 발생할 수 있다.
  - 다른 컴포넌트나 모듈에서 의도치 않은 데이터 변경이 일어나거나, 여러 컴포넌트 간의 데이터 충돌이 발생할 수 있다.

- 확장의 어려움
  - 양방향 데이터 흐름은 새로운 요구사항이나 기능 추가에 대한 확장이 어려울 수 있다.
  - 데이터의 변경이 여러 컴포넌트에 영향을 미치기 때문에 새로운 기능을 추가하거나 기존 기능을 수정하기 위해서는 전체적인 데이터 흐름을 이해하고 수정해야 할 수 있다.

## 총평
- 규모가 작고 빠르게 개발해야하는 시스템에 적합
- 시스템 규모가 커지면 예측 불가능성이 늘어나기 때문에 오히려 유지보수에 독이 될 수 있음.
- 확장가능성이 있다면 처음부터 단방향으로 하는게 좋음

# 단방향 바인딩 (one-way data binding)
