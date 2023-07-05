# MVC, MVP, MVVM
## 구성요소
- MVC : Model, View, Controler
- MVP : Model, View, Presenter
- MVVM : Model, View, ViewModel

## 데이터의 흐름 차이
![image](https://github.com/nowispresent/study/assets/113965342/fcdea181-74d5-4427-b049-03b24d5c20f6)
- MVC
  - Input => Controller => Model => View
  - Input => Controller => View
![image](https://github.com/nowispresent/study/assets/113965342/89e412e4-cd18-41d2-80fe-309f862779ee)
- MVP
  - Input => View => Presenter => Model => Presenter => View
  - Presenter가 View에 데이터를 표시
![image](https://github.com/nowispresent/study/assets/113965342/5ee66c45-a8d2-4bf3-96bf-bda7dc9ec2c7)
- MVVM
  - Input => View => ViewModel => Model => ViewModel <= View
  - View가 ViewModel을 subscribe(or watch)해서 데이터를 표시
     
## 각 요소들의 역할
- MVC
  - Model : 데이터
  - View : 화면
  - Controller : 입력, 처리, 출력 담당
  - 하나의 컨트롤러는 여러개의 모델과 뷰를 처리.
- MVP
  - Model : 데이터
  - View : 화면, 입력 담당
  - Presenter : 처리, 출력 담당
  - 화면과 분리해서 처리 가능해짐, 테스트 가능해짐
  - 하나의 프레젠터는 하나의 뷰를 처리
- MVVM
  - Model : 데이터
  - View : 화면, 입력, 출력(구독) 담당
  - ViewModel : 처리 담당
  
