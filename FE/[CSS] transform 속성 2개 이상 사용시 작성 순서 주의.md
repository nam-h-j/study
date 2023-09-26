# transform 속성 2개 이상 사용시 작성 순서 주의
## 이슈
- transform의 rotate, translate를 사용해서 가운데 정렬 및 회전을 시도했는데 가운데 정렬 되지 않음
## 원인
- transform에서 작성하는 순서대로 변경이 이루어진다
- rotate를 먼저 정의하고 translate를 정의하면서 rotate가 먼저 일어나서 중심이 비틀어짐
```css
transform: rotate(-45deg) translate(-50%,-30%);
```
## 해결
- translate를 먼저 작성하고 rotate를 작성
```css
transform:  translate(-50%,-30%) rotate(-45deg);
```
- 자주 사용하기 때문에 순서에 유의 하기
