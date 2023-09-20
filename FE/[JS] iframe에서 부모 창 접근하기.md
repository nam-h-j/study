# [JS] iframe에서 부모 창 접근하기
- iframe에서 window, document를 수행하게 되면 iframe 내부의 html을 가리키게 된다.
- iframe 내부에서 부모 창의 조작이 필요한 경우에 아래와 같이 접근 할 수 있다.
```js
window.parent.document.querySelector('blahblah')
```
  
