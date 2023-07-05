# MVC, MVP, MVVM
## 구성요소
- MVC : Model, View, Controler
- MVP : Model, View, Presenter
- MVVM : Model, View, ViewModel
- Flux : Action, Dispatcher, Store, View

## 데이터의 흐름 차이
![image](https://github.com/nowispresent/study/assets/113965342/fcdea181-74d5-4427-b049-03b24d5c20f6)
- MVC
  - Input => Controller => Model => View
  - Input => Controller => View
![image](https://github.com/nowispresent/study/assets/113965342/89e412e4-cd18-41d2-80fe-309f862779ee)
- MVP
  - Input => View => Presenter => Model => Presenter => View
  - Presenter가 View에 데이터를 표시
- MVVM
  - Input => View => ViewModel => Model => ViewModel <= View
  - View가 ViewModel을 subscribe(or watch)해서 데이터를 표시
     
## 각 요소들의 역할

- MVC에서 요소들의 역할
  - Model : View에 표시하기 위한 데이터
  - View : 화면에 보여지
  - Controller : 인풋, 처리, 결과 출력 담당
## MVP
- M
