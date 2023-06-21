# 시멘틱태그 Sementic Tag

## 시멘틱태그(Sementic Tag)?

- sementic : 의미론적인
- tag : html의 태그를 의미
- 아래 코드에서 "h1"이 태그 이름을 의미함

```html
<h1>Heading</h1>
```

## 시멘틱태그 등장배경

### 원래의 HTML

- 최초의 html 태그는 워드 같은 문서를 주고받는게 목적이었음.
- 따라서 예전 태그 이름들은 문서의 서식과 관련된 종류가 주류였다
- h1 : heading1, p: paragraph, li: list, strong: 두꺼운서체 등...

### HTML의 발전

- 인터넷이 보급되기 시작하면서 html은 웹사이트의 인터페이스로 사용되기 시작했다.
- CSS를 통해 다양한 레이아웃, 디자인요소를 추가하기 시작했다.
- JS를 통해서 인터렉션을 만들기 시작되었다.
- 그리고 복잡도는 시간이 갈수록 볼륨이 커졌다.
- 그래서 태그에는 정보(데이터)만을 보여주는 목적이 아닌, 시각적, 인터렉션 요소를 만들기 위해 활용되기 시작했음
- 따라서 기존 "문서서식"의 의미를 주로 담고 있던 태그에 "새로운 의미"들을 추가해줄 필요성이 생겼다.

### HTML5와 시멘틱 태그의 등장

- HTML5에서 레이아웃 정보를 담기위한 의미(sementic)를 지닌 태그들을 추가했고,
- 그리고 더 이상 필요하지 않은(특히 서식 정보중에서 글자색이나 컬러에 관한)태그들이 사라지게 되었다.

### 시멘틱 태그의 예

- header : 웹사이트의 최상단에 배치되는 헤더부분, 네비게이션(메뉴)나 사이트의 로고, 회읜 기능등이 주로 배치됨
- footer : 웹사이트의 최하단에 배치되는 푸터부분, 사이트맵이나, 사업자정보, copyright정보 등의 부가적인 정보가 주로 배치됨
- main : 웹사이트의 컨텐츠가 담기는 영역이 배치되는 부분
- nav: 웹사이트의 네비게이션(메뉴)를 주로 담게 됨
- 예시와 같이 특정 레이아웃, 섹션을 나누는 의미를 가진 태그들이 대거 추가 되었다.
- 자세한 내용 : https://developer.mozilla.org/ko/docs/Web/HTML/Element

### 시멘틱 태그를 신경써야하는 이유

- 그리고 시멘틱 태그로 오면서 몇 가지 영향력이 생기면서 선택이 아닌 필수가 되었는데, 그 이유는 크게 네가지 정도로 볼 수 있다.

  - SEO : Search Engine Optimization의 영향을 받는다. 검색엔진에서 검색결과를 보여줄때, 페이지 출력 우선순위를 정하는 요소중에 시멘틱태그가 포함되어있다.
  - 웹접근성 : 일반인이 사용하는 브라우저에선 큰 영향이 없지만, 시각장애인이나 특정 환경에서 웹사이트를 활용해야하는 경우(스크린리더) 시멘틱태그를 기반으로 기능하게 되어있다.
  - 유지보수 : HTML5 이전에는 레이아웃 정보를 담을때 "div" 태그를 주로 사용했는데. 이 태그가 무수히 중첩되면서 나타나는 가독성 적인 문제를 해결해준다.

- div만 사용했을때

```html
<body>
  <div>
    <div>
      <img src="./img/logo" />
    </div>
    <div>
      <ul>
        <li>메뉴1</li>
        <li>메뉴2</li>
        <li>메뉴3</li>
        <li>메뉴4</li>
      </ul>
    </div>
  </div>

  <div>
    <div>
      <h1>Header</h1>
      <div>
        <p>paragraph1</p>
        <p>paragraph2</p>
      </div>
      <div>
        <h1>Header</h1>
        <p>paragraph1</p>
        <p>paragraph2</p>
      </div>
    </div>
  </div>

  <div>
    <div>
      <img src="./img/foot_logo" />
      <div>footerContents...</div>
    </div>
  </div>
</body>
```

- 시멘틱태그 사용했을때

```html
<body>
  <header>
    <div>
      <img src="./img/logo" />
    </div>
    <nav>
      <ul>
        <li>메뉴1</li>
        <li>메뉴2</li>
        <li>메뉴3</li>
        <li>메뉴4</li>
      </ul>
    </nav>
  </header>

  <main>
    <article>
      <h1>Header</h1>
      <section>
        <p>paragraph1</p>
        <p>paragraph2</p>
      </section>
      <section>
        <h1>Header</h1>
        <p>paragraph1</p>
        <p>paragraph2</p>
      </section>
    </article>
  </main>

  <footer>
    <div>
      <img src="./img/foot_logo" />
      <div>footerContents...</div>
    </div>
  </footer>
</body>
```

- 보통 이것보다 더 복잡한 구조를 가져기기 때문에 잘 고려해서 작성해야한다.
