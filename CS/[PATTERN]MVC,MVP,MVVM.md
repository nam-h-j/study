# MVC, MVP, MVVM
## 구성요소
- MVC : Model, View, Controler
- MVP : Model, View, Presenter
- MVVM : Model, View, ViewModel

## MVC
![image](https://github.com/nowispresent/study/assets/113965342/fcdea181-74d5-4427-b049-03b24d5c20f6)
### 흐름
- Input => Controller => Model => View
- Input => Controller = = > View
### 역할
- Model : 데이터
- View : 화면
- Controller : 입력, 처리, 출력 담당
### 특징
- 하나의 컨트롤러는 여러개의 모델과 뷰를 처리.
- Controller와 View는 1:n 관계
- Controller는 View를 선택할 뿐 업데이트는 하지 않는다.
- View는 Controller를 모름
### 장점
- MVC 패턴의 장점은 널리 사용되고 있는 패턴
- 단순한 구조
- 구현 난이도가 낮아 빠르게 만들 수 있다.
### 단점
- View와 Model 사이의 의존성이 높다.
- 높은 의존성으로 어플리케이션이 커질 수록 복잡하지고 유지보수가 어려워 진다.


## MVP
![image](https://github.com/nowispresent/study/assets/113965342/89e412e4-cd18-41d2-80fe-309f862779ee)
### 흐름
- Input => View => Presenter => Model => Presenter => View
- Presenter가 View에 데이터를 표시
### 역할
- Model : 데이터
- View : 화면, 입력 담당
- Presenter : 처리, 출력 담당
### 특징
- 화면과 분리해서 처리 가능해짐 => 테스트 가능해짐
- 하나의 프레젠터는 하나의 뷰를 처리 (1:1관계)
### 장점
- View와 Model의 의존성이 없다.(presenter를 통해서만 데이터 전달)
### 단점
- View와 Presenter 사이의 의존성이 높다.
- 어플리케이션이 복잡해 질 수록 View와 Presenter 사이의 의존성이 강해지는 단점.
- View와 Presenter가 1:1관계 이므로 View의 수만큼 Presenter를 만들어야 함.

## MVVM
![image](https://github.com/nowispresent/study/assets/113965342/5ee66c45-a8d2-4bf3-96bf-bda7dc9ec2c7)
### 흐름
- Input => View => ViewModel => Model => ViewModel <= View
- View가 ViewModel을 subscribe(or watch)해서 데이터를 표시
### 역할
- Model : 데이터
- View : 화면, 입력, 출력(구독) 담당
- ViewModel : 처리 담당
### 특징
- Command 패턴과 Data Binding 두 가지 패턴을 사용하여 구현.
- 이를 통해 View와 View Model 사이의 의존성을 제거.
- View Model과 View는 1:n 관계.
### 장점
- MVVM 패턴은 View와 Model 사이의 의존성이 없다.
- View와 View Model 사이의 의존성도 없다.
- 각각의 부분이 독립적이기 때문에 모듈화 가능, 테스트 가능.
### 단점
- View Model의 설계가 어렵다.
- 단순한 어플리케이션의 경우 맞지 않는 방식
