# [Editor]방향키로 input, textnode 이동하기

## 목표
- contentEditable 안에서 좌,우 방향키로 텍스트를 이동할때, 텍스트 끝에 input요소가 있으면 input요소를 focus하고 이동하도록 수정하기
- textInput인 경우 focus이후 textInput의 가장 끝에서 input을 벗어나도록 설정

## 로직

### 방향키 액션 취득하기, 노드 정보 취득하기
- keydown 액션에서 어떤 방향키가 눌렸는지 확인
- 커서가 어떤 엘리먼트에 위치하고 있는지 확인
- text노드라면 커서가 text노드의 몇번째 글자에 위치하고 있는지 확인

### 다른 노드에서 input으로 커서 옮기기
- 누른 방향키에 따라서 input 요소를 확인
  - 오른쪽 방향키 : text노드의 가장 마지막일때 다음 노드에 input요소가 있는지 확인
  - 왼쪽 방향키 : text노드의 가장 마지막일때 다음 노드에 input요소가 있는지 확인
- input 요소가 있다면 방향에 따라서 처리
  - 오른쪽 방향키 : input요소에 focus를 맞춤
  - 왼쪽 방향키 : input요소가 text인지 검사
    - text가 아니면 focus를 맞춤
    - text이면 text의 가장 마지막 글자 뒤에 커서를 위치시킴
    
### input에서 커서 밖으로 옮기기



## 사용한 함수
- evnt
