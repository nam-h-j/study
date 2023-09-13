# HTML,CSS

[1.Background](#1-background)
[2.General](#2-general)

- [2.1 General Style Rules](#21-general-style-rules)
  - [2.1.1 Protocol, 프로토콜](#211-protocol-프로토콜)
- [2.2 General Formatting Rules](#22-general-formatting-rules)
  - [2.2.1 Indetation, 들여쓰기](#221-indetation-들여쓰기)
  - [2.2.2 Capitalization, 대소문자 사용](#222-capitalization-대소문자-사용)
  - [2.2.3 Trailing Whitespace](#223-trailing-whitespace)
- [2.3 General Meta Rules](#23-general-meta-rules)
  - [2.3.1 Encoding, 인코딩](#231-encoding-인코딩)
  - [2.3.2 Comments, 주석](#232-comments-주석)
  - [2.3.3 Action Items, 작업항목](#233-action-items-작업항목)

[3.HTML](#3-HTML)

- [3.1 HTML Style Rules](#31-html-style-rules)
  - [3.1.1 Document Type, 문서유형](#311-document-type-문서유형)
  - [3.1.2 HTML Validity, HTML 유효성](#312-html-validity-html-유효성)
  - [3.1.3 Semantics, 시멘틱](#313-semantics-시멘틱)
  - [3.1.4 Multimedia Fallback, 멀티미디어 폴백](#314-multimedia-fallback-멀티미디어-폴백)
  - [3.1.5 Separation of Concerns, 구조의 분리](#315-separation-of-concerns-구조의-분리)
  - [3.1.6 Entity References, 엔티티 참조](#316-entity-references-엔티티-참조)
  - [3.1.7 Optional Tags, 선택적 태그](#317-optional-tags-선택적-태그)
  - [3.1.8 "type" Attributes, 타입 속성](#318-"type"-attributes-타입-속성)
  - [3.1.9 "id" Attributes, "id" 속성](#319-"id"-attributes-"id"-속성)
- [3.2 HTML Formatting Rules](#32-html-formatting-rules)
  - [3.2.1 General Formatting, 일반 서식](#321-general-formatting-일반-서식)
  - [3.2.2 HTML Line-Wrapping, html 줄 바꿈](#322-html-line-wrapping-html-줄-바꿈)

## 1. Background

- This document defines formatting and style rules for HTML and CSS.
- 이 글은 HTML과 CSS의 포맷과 스타일 규칙을 정의한 문서이다.

- It aims at improving collaboration, code quality, and enabling supporting infrastructure.
- 이 문서는 협업과 코드품질, 그리고 서포팅 인프라 스트럭처를 가능하게 하기 위함이다.

- It applies to raw, working files that use HTML and CSS, including GSS files.
- 이 문서는 로우파일, 워킹파일(GSS파일을 포함한 HTML과 CSS)에 적용된다.

- Tools are free to obfuscate, minify, and compile as long as the general code quality is maintained.
- 일반적인 코드 품질이 유지되는 한 툴로써 자유롭게 난독화, 최소화, 및 컴파일할 수 있다.

---

## 2. General

### 2.1 General Style Rules

#### 2.1.1 Protocol, 프로토콜

- 가능한 한 내장 리소스에 HTTPS로 표기한다.
  - Use HTTPS for embedded resources where possible.
- HTTPS에서 각 파일을 사용할 수 없는 경우를 제외하고 항상 이미지 및 기타 미디어 파일, 스타일 시트 및 스크립트에 HTTPS를 사용한다.
  - Always use HTTPS (https:) for images and other media files, style sheets, and scripts, unless the respective files are not available over HTTPS.

```
<!-- Not recommended: omits the protocol -->
<script src="//ajax.googleapis.com/ajax/libs/jquery/3.4.0/jquery.min.js"></script>

<!-- Not recommended: uses HTTP -->
<script src="http://ajax.googleapis.com/ajax/libs/jquery/3.4.0/jquery.min.js"></script>

<!-- Recommended -->
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.0/jquery.min.js"></script>
```

```
/* Not recommended: omits the protocol */
@import '//fonts.googleapis.com/css?family=Open+Sans';

/* Not recommended: uses HTTP */
@import 'http://fonts.googleapis.com/css?family=Open+Sans';

/* Recommended */
@import 'https://fonts.googleapis.com/css?family=Open+Sans';
```

---

### 2.2 General Formatting Rules

#### 2.2.1 Indetation, 들여쓰기

- 들여쓰기는 스페이스 2개를 사용한다.
  - Indent by 2 spaces at a time.
- 탭을 사용하거나 탭과 스페이스를 섞어서 들여쓰기 하지 않는다.
  - Don’t use tabs or mix tabs and spaces for indentation.

```
<ul>
  <li>Fantastic</li>
  <li>Great</li>
</ul>
```

```
.example {
  color: blue;
}
```

---

#### 2.2.2 Capitalization, 대소문자 사용

- 소문자만 사용한다
  - Use only lowercase.
- 모든 코드는 소문자로 작성한다
- HTML엘리먼트 이름
- 어트리뷰트
- 어트리뷰트 값
- CSS 선택자
- 프로퍼티
- 프로퍼티 값
- 문자열은 예외

  - All code has to be lowercase: This applies to HTML element names, attributes, attribute values (unless text/CDATA), CSS selectors, properties, and property values (with the exception of strings).

---

#### 2.2.3 Trailing Whitespace

- Trailing white space를 삭제한다.
  - Remove trailing white spaces.
- Trailing white space\*
  > 직전 라인과 가장 끝과 직후 라인 가장 앞 사이에 들여쓰기를 제외한 공백
- Trailing white space는 불필요하고, 차이를 복잡하게 만든다.
  - Trailing white spaces are unnecessary and can complicate diffs.

---

### 2.3 General Meta Rules

#### 2.3.1 Encoding, 인코딩

- UTF-8 (BOM없이)
  - Use UTF-8(no BOM).
- BOM\*?
  - Byte Order Mark, '바이트 순서 표시'
  - 유니코드가, little-endian 인지 big-endian 인지 아니면 UTF-8 인지 쉽게 알 수 있도록, 유니코드 파일이 시작되는 첫부분에 보이지 않게, 2~3바이트의 문자열을 추가하는 것
  - 텍스트 에디터 화면에서는 보이지 않고, 헥사 에디터(Hex Editor)\*로 열었을 때만 보인다.
    - 엔디안에 따른 BOM 문자
      - little-endian 의 BOM : 0xFF 0xFE
      - big-endian 의 BOM : 0xFE 0xFF
      - UTF-8 의 BOM : 0xEF 0xBB 0xBF
- 에디터에서도 BOM이 없는 UTF-8 캐릭터 셋인지 확인
  - Make sure your editor uses UTF-8 as character encoding, without a byte order mark.
- HTML 템플릿과 문서에 \<meta charset="utf-8"\>을 사용해서 인코딩을 명시해야 한다. 스타일 시트는 UTF-8로 가정하고 있으므로 인코딩을 명시하지 않는다.
  - Specify the encoding in HTML templates and documents via \<meta charset="utf-8"\>. Do not specify the encoding of style sheets as these assume UTF-8.
- (인코딩 명시에 대한 자세한 내용은 HTML 과 CSS의 캐릭터 인코딩 핸들링에서 확인 할 수 있다)
  - (More on encodings and when and how to specify them can be found in Handling character encodings in HTML and CSS.)

---

#### 2.3.2 Comments, 주석

- 가능한 경우 필요에 따라 코드를 설명 한다.
  - Explain code as needed, where possible.
- 주석을 사용한 코드 설명: (쓸수 있는 내용의 예)

  - 무엇을 보조 하는지?
  - 어떤 목적으로 쓰이는지?
  - 각 솔루션이 사용된 이유, 선호되는 이유?
  - Use comments to explain code:
    What does it cover, what purpose does it serve, why is respective solution used or preferred?

- ...???
- (This item is optional as it is not deemed a realistic expectation to always demand fully documented code. Mileage may vary heavily for HTML and CSS code and depends on the project’s complexity.)

---

#### 2.3.3 Action Items, 작업항목

- 작업 항목을 TODO를 사용해서 표기 한다
  - Mark todos and action items with TODO.
- todo는 항상 TODO키워드로만 강조 표시 한다, @@ 같은 포맷은 사용하지 않는다
  - Highlight todos by using the keyword TODO only, not other common formats like @@.
- 아래 형식과 같이 괄호 안에 연락처(사용자 이름 또는 메일링 리스트)를 추가합니다. TODO(contact)
  - Append a contact (username or mailing list) in parentheses as with the format TODO(contact).
- 작업 항목은 콜론 뒤에 추가 합니다. TODO : action item.
  - Append action items after a colon as in TODO: action item.

```
{# TODO(john.doe): revisit centering #}
<center>Test</center>
```

```
<!-- TODO: remove optional tags -->
<ul>
  <li>Apples</li>
  <li>Oranges</li>
</ul>
```

---

## 3. HTML

### 3.1 HTML Style Rules

#### 3.1.1 Document Type, 문서유형

- HTML5 사용
  - Use HTML5.
- HTML5는 모든 HTML문서에 사용해야 한다.
  (HTML문서(text/html)사용을 권장합니다. XHTML(application/xhtml+xml)은 사용하지 마십시오, 브라우저와 인프라지원이 부족하고 HTML보다 최적화가 어렵습니다.)
  - HTML5 (HTML syntax) is preferred for all HTML documents: <!DOCTYPE html>.
    (It’s recommended to use HTML, as text/html. Do not use XHTML. XHTML, as application/xhtml+xml, lacks both browser and infrastructure support and offers less room for optimization than HTML.)
- HTML에서 문제가 없지만, void 요소를 닫지 마십시오, <br>(O) <br />(X)

---

#### 3.1.2 HTML Validity, HTML 유효성

- 가능한 유효한 HTML을 사용한다.
  - Use valid HTML where possible.
- 파일 크기와 관련한 성능을 목적으로 인해 불가능한 경우가 아니면 유효한 HTML 코드를 사용한다.
  - Use valid HTML code unless that is not possible due to otherwise unattainable performance goals regarding file size.
- W3C HTML 유효성 검사기와 같은 도구를 사용하여 테스트 한다(https://validator.w3.org/nu/)
  - Use tools such as the W3C HTML validator to test.
- 유효한 HTML의 사용은 측정 가능한 기준 품질 속성으로 기술 요구 사항 및 제약 조건에 대한 학습에 기여하고 적절한 HTML 사용을 보장한다.

  - Using valid HTML is a measurable baseline quality attribute that contributes to learning about technical requirements and constraints, and that ensures proper HTML usage.

---

#### 3.1.3 Semantics, 시멘틱

- 목적에 맞는 HTML을 사용한다.
  - Use HTML according to its purpose.
- 생성된 목적에 맞는 요소(때로는 "태그"라고 잘못 부름)를 사용한다.
  - Use elements (sometimes incorrectly called “tags”) for what they have been created for.
- 예를들어, 제목 요소에는 제목을, 단락에는 p를, 앵커에는 a를 사용하는 등이 있다.
  - For example, use heading elements for headings, p elements for paragraphs, a elements for anchors, etc.
- HTML요소를 목적에 맞게 사용하는 것은 접근성, 재사용성 및 코드 효율을 위해 중요하다.
  - Using HTML according to its purpose is important for accessibility, reuse, and code efficiency reasons.

```html
<!-- Not recommended -->
<div onclick="goToRecommendations();">All recommendations</div>

<!-- Recommended -->
<a href="recommendations/">All recommendations</a>
```

---

#### 3.1.4 Multimedia Fallback, 멀티미디어 폴백

- 멀티미디어에 대한 대체 콘텐츠를 제공한다.

  - Provide alternative contents for multimedia.

- 멀티미디어(이미지, 비디오, 캔버스를 통한 애니매이션)는 대체 콘텐츠를 제공 해야 한다.
  - For multimedia, such as images, videos, animated objects via canvas, make sure to offer alternative access.
- 의미 있는 대체 텍스트를 의미하는 이미지 alt와 비디오 오디오의 캡션(가능한 경우)

  - For images that means use of meaningful alternative text (alt) and for video and audio transcripts and captions, if available.

- 대체 콘텐츠를 제공하는 것은 접근성에 있어서 중요한 이유:
  - Providing alternative contents is important for accessibility reasons:
- 시각 장애인 사용자가 @alt없이 이미지에 대해서 알 방법이 없으며,
  - A blind user has few cues to tell what an image is about without @alt,
- 그리고 다른 유저들도 비디오와 오디오가 어떤 컨텐츠인지 알 방법이 없다.
  - and other users may have no way of understanding what video or audio contents are about either.
- alt 속성이 불필요한 중복을 유발하는 이미지나, CSS를 즉시 사용할수 없는 장식적 목적의 이미지의 경우 대체텍스트를 사용하지 않는다. alt=""

  - (For images whose alt attributes would introduce redundancy, and for images whose purpose is purely decorative which you cannot immediately use CSS for, use no alternative text, as in alt="".)

  ```html
  <!-- Not recommended -->
  <img src="spreadsheet.png" />

  <!-- Recommended -->
  <img src="spreadsheet.png" alt="Spreadsheet screenshot." />
  ```

---

#### 3.1.5 Separation of Concerns, 구조의 분리

- 구조, 프레젠테이션, 동적처리 부분을 분리하라.
  - Separate structure from presentation from behavior.
- 구조(마크업), 프레젠테이션(스타일), 동적처리(스크립팅)을 엄걱하게 분리하고 세가지의 인터렉션을 최소로 유지해야 한다.
  - Strictly keep structure (markup), presentation (styling), and behavior (scripting) apart, and try to keep the interaction between the three to an absolute minimum.
- 즉, 문서와 템플릿에 구조적 목적으로만 사용되는 HTML만 포함 되어 있어야 하고, 프레젠테이션 관련 된 것은 모두 스타일시트로, 동적처리들은 모두 스크립트로 옮겨야 한다.
  - That is, make sure documents and templates contain only HTML and HTML that is solely serving structural purposes. Move everything presentational into style sheets, and everything behavioral into scripts.
- 또한, 문서와 템플릿에서 가능한 적은 수의 스타일 시트와 스크립트를 연결하여 링크를 최소화 해야한다.
  - In addition, keep the contact area as small as possible by linking as few style sheets and scripts as possible from documents and templates.
- 구조/프레젠테이션/동적처리 로 나누는 것은 유지보수를 위해 중요하다. HTML문서와 템플릿을 직접 변경하는 것은 스타일시트와 스크립트를 수정하는 것 보다 항상 더 많은 비용이 든다.
  - Separating structure from presentation from behavior is important for maintenance reasons. It is always more expensive to change HTML documents and templates than it is to update style sheets and scripts.

```html
<!-- Not recommended -->
<!DOCTYPE html>
<title>HTML sucks</title>
<link rel="stylesheet" href="base.css" media="screen" />
<link rel="stylesheet" href="grid.css" media="screen" />
<link rel="stylesheet" href="print.css" media="print" />
<h1 style="font-size: 1em;">HTML sucks</h1>
<p>I’ve read about this on a few sites but now I’m sure:</p>
<u>HTML is stupid!!1</u>
<center>
  I can’t believe there’s no way to control the styling of my website without
  doing everything all over again!
</center>
<!-- Recommended -->
<!DOCTYPE html>
<title>My first CSS-only redesign</title>
<link rel="stylesheet" href="default.css" />
<h1>My first CSS-only redesign</h1>
<p>
  I’ve read about this on a few sites but today I’m actually doing it:
  separating concerns and avoiding anything in the HTML of my website that is
  presentational.
</p>
<p>It’s awesome!</p>
```

---

#### 3.1.6 Entity References, 엔티티 참조

- 엔티티 참조를 사용하지 마시오.
  - Do not use entity references.
- 팀이나 작업자 사이에서 동일한 인코딩(UTF-8)을 사용하는 상황이라면 &mdash\;, &rdquo\;, &#x263a\;, 등과 같은 엔티티 참조를 사용할 필요가 없다.

  - There is no need to use entity references like &mdash\;, &rdquo\;, or &#x263a\;, assuming the same encoding (UTF-8) is used for files and editors as well as among teams.

- 유일한 예외 사항은 HTML애서 특별한 의미가 있는 문자(\[<\] 나 \[&\] )와 제어 또는 "보이지 않는" 문자(예:공백없음)등에만 사용합니다.
  - The only exceptions apply to characters with special meaning in HTML (like < and &) as well as control or “invisible” characters (like no-break spaces).

```html
<!-- Not recommended -->
The currency symbol for the Euro is &ldquo;&eur;&rdquo;.

<!-- Recommended -->
The currency symbol for the Euro is “€”.
```

---

#### 3.1.7 Optional Tags, 선택적 태그

- 선택적 태그를 생략합니다(선택 사항).

  - Omit optional tags (optional).

- 파일 크기 최적화 및 스캔 가능성을 위해 선택적 태그를 생략하는 것이 좋습니다. HTML5 사양 은 생략할 수 있는 태그를 정의합니다. [Optional tags, HTML5 Specification](https://html.spec.whatwg.org/multipage/syntax.html#syntax-tag-omission)

  - For file size optimization and scannability purposes, consider omitting optional tags. The HTML5 specification defines what tags can be omitted.

- (이 방식은 일반적으로 웹 개발자가 배우는 것과 크게 다르기 때문에 더 넓은 지침으로 제정해서 유예기간이 필요할 수 있다. 일관성과 단순성을 위해서 선택사항이 아닌, 모든 선택적 태그를 생략하는 것이 좋습니다.)
  - (This approach may require a grace period to be established as a wider guideline as it’s significantly different from what web developers are typically taught. For consistency and simplicity reasons it’s best served omitting all optional tags, not just a selection.)

```html
<!-- Not recommended -->
<!DOCTYPE html>
<html>
  <head>
    <title>Spending money, spending bytes</title>
  </head>
  <body>
    <p>Sic.</p>
  </body>
</html>
<!-- Recommended -->
<!-- Recommended -->
<!DOCTYPE html>
<title>Saving money, saving bytes</title>
<p>Qed.</p>
```

---

#### 3.1.8 "type" Attributes, 타입 속성

- 스타일 시트 및 스크립트에 대한 타입 속성을 생략한다.

  - Omit type attributes for style sheets and scripts.

- 스타일시트와 스크립트에 타입속성을 사용하지 마라.(CSS와 JS를 사용하지 않는 경우 이외에)

  - Do not use type attributes for style sheets (unless not using CSS) and scripts (unless not using JavaScript).

- HTML5에서는 'text/css'와 'text/javascript'를 내포하고 있기 때문에 타입을 특정할 필요가 없다. 이 부분은 오래된 브라우저에서도 안전하게 수행할 수 있다.

  - Specifying type attributes in these contexts is not necessary as HTML5 implies text/css and text/javascript as defaults. This can be safely done even for older browsers.

```html
<!-- Not recommended -->
<link
  rel="stylesheet"
  href="https://www.google.com/css/maia.css"
  type="text/css"
/>
<!-- Recommended -->
<link rel="stylesheet" href="https://www.google.com/css/maia.css" />

<!-- Not recommended -->
<script
  src="https://www.google.com/js/gweb/analytics/autotrack.js"
  type="text/javascript"
></script>
<!-- Recommended -->
<script src="https://www.google.com/js/gweb/analytics/autotrack.js"></script>
```

---

#### 3.1.9 "id" Attributes, "id" 속성

- 불필요한 "id" 속성을 피하라.

  - Avoid unnecessary id attributes.

- 클래스 속성을 스타일링과 스크립팅을 위한 데이터 속성으로 사용하는 것을 권장한다.

  - Prefer class attributes for styling and data attributes for scripting.

- id 속성들은 엄격한 관리가 필요한 경우, 자바스크립트의 식별자와 같아지지 않도록 항상 값에 하이픈을 포함시킨다. 예: "profile" 또는 "userProfile" 보다는 "user-profile"를 사용

  - Where id attributes are strictly required, always include a hyphen in the value to ensure it does not match the JavaScript identifier syntax, e.g. use user-profile rather than just profile or userProfile.

- 엘리먼트에 id 속성이 있으면 브라우저가 글로벌 window 프로토타입에 명명된 속성으로 사용되도록 하여 예기치 못한 동작을 유발 할 수 있다. 하이픈이 포함된 속성 값은 id 속성 이름으로 사용할 수 있지만 전역 Javascirpt 변수로 참조할 수 없음.
  - When an element has an id attribute, browsers will make that available as a named property on the global window prototype, which may cause unexpected behavior. While id attribute values containing a hyphen are still available as property names, these cannot be referenced as global JavaScript variables.

```html
<!-- Not recommended: `window.userProfile` will resolve to reference the <div> node -->
<div id="userProfile"></div>
<!-- Recommended: `id` attribute is required and its value includes a hyphen -->
<div aria-describedby="user-profile">
  …
  <div id="user-profile"></div>
  …
</div>
```

---

### 3.2 HTML Formatting Rules

#### 3.2.1 General Formatting, 일반 서식

- 모든 블록, 리스트, 테이블 요소에서 줄바꿈 하고 모든 자식 요소는 들여쓰기 한다.

  - Use a new line for every block, list, or table element, and indent every such child element.

- 요소의 스타일 지정과는 별개로(CSS에서 요소마다 다른 display 속성을 가질 수 있으므로)모든 블록, 또는 테이블 요소는 줄바꿈 한다.

  - Independent of the styling of an element (as CSS allows elements to assume a different role per display property), put every block, list, or table element on a new line.

- 또한, 블록, 리스트 또는 테이블 요소의 자식 요소는 모두 들여쓰기 한다.
  Also, indent them if they are child elements of a block, list, or table element.

- 리스트 항목 사이에 공백 문제가 발생하면 li요소를 한 줄에 작성해도 된다. linter는 오류대신 경고를 표시하도록 하는 것이 좋다.
  (If you run into issues around whitespace between list items it’s acceptable to put all li elements in one line. A linter is encouraged to throw a warning instead of an error.)

```html
<blockquote>
  <p><em>Space</em>, the final frontier.</p>
</blockquote>

<ul>
  <li>Moe
  <li>Larry
  <li>Curly
</ul>

<table>
  <thead>
    <tr>
      <th scope="col">Income
      <th scope="col">Taxes
  <tbody>
    <tr>
      <td>$ 5.00
      <td>$ 4.50
</table>

```

---

#### 3.2.2 HTML Line-Wrapping, html 줄 바꿈

- 긴 라인은 줄바꿈 한다.(선택사항)

  - Break long lines (optional).

- HTML에 대한 컬럼을 제한하는 권장 사항은 없지만, 가독성이 크게 향샹되면 긴 줄을 줄바꿈 하는 것을 고려해볼 수 있다.
  - While there is no column limit recommendation for HTML, you may consider wrapping long lines if it significantly improves readability.
- 줄 바꿈할 때 줄 바꿈된 속성을 자식 요소와 구분하려면 각 연속 줄을 원래 줄에서 최소 4칸 들여써야 한다.
  - When line-wrapping, each continuation line should be indented at least 4 additional spaces from the original line to distinguish wrapped attributes from child elements.

```
<md-progress-circular md-mode="indeterminate" class="md-accent"
    ng-show="ctrl.loading" md-diameter="35">
</md-progress-circular>'
```

```html
<md-progress-circular
  md-mode="indeterminate"
  class="md-accent"
  ng-show="ctrl.loading"
  md-diameter="35"
>
</md-progress-circular>
```

```
<md-progress-circular md-mode="indeterminate"
                      class="md-accent"
                      ng-show="ctrl.loading"
                      md-diameter="35">
</md-progress-circular>
```

---
