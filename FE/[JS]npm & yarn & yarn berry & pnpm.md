# npm & yarn & yarn berry & pnpm

## Package Manager?

- 여러가지 모듈을 합쳐놓은 덩어리 => Package
- 수많은 패키지들을 관리하기 위한 도구

## Npm

- 자바스크립가 모듈화 되면서 수많은 패키지를 관리하기 위해서 등장

### Npm의 목표

- 여러 버전의 동일한 패키지를 한 프로젝트에서 사용할 수 있게 한다.
- 설치 방식을 통일한다.
- 패키지 정보가 들어있는 메타데이터를 간소화 한다.
- 누구나 배포 할 수 있게 한다.

### Npm의 구조

```
- node_modules/
- package.json
- .npmrc
- package-lock.json
```

- node_modules/ : 설치하려는 패키지가 모두 담겨진 곳
- package.json : 패키지를 다루는데 필요한 cli, 패키지 메타데이터

## Yarn

- npm의 단점을 보완하여 등장한 패키지 매니저

### Yarn에서 개선된 부분

- 병렬화를 통한 속도 개선
- 자동화 된 lock 생성
  - 지금 npm에서도 lock파일은 자동으로 생성되지만 yarn이 등장하기 전에는 npm에서 lock파일을 수동으로 생성했어야 했다.
- 의존성 트리 알고리즘 변경
  - npm 에서는 패키지를 다운 받는 순서에 따라서 의존성이 변경될 수 있는 알고리즘
  - yarn에서는 의존성 트리 변형이 잘 일어나지 않도록 했음
- 캐시 사용
  - 캐시를 사용해서 다운로드 속도를 개선

### Yarn의 구조

```
- .yarn/
  - cache/
  - releases/
    - yarn-1.XX.XX.cjs
- node_modules/
- package.json
- .yarnrc
- yarn.lock
```

### Npm, Yarn의 한계

- 비 효율적인 의존성 검색

  - node_modules 패키지를 찾을 때 순차적으로 검색한다
  - 순차적으로 탐색하다가 중간에 다른버전 혹은 중복 설치된 패키지를 그대로 사용한다.
  - 모듈이 없어도, 처음부터 끝까지 탐색한다.

- 유령 의존성

  - node_modules 디렉토리에는 package.json에 명시된 라이브러리가 저장된다.
  - 각 라이브러리에도 독자적인 package.json이 있고, package.json에 명시된 dependencies를 각각 해당 라이브러리가 저장된 디렉토리의 하위에 node_modules 디렉토리를 또 만들어 저장한다.
  - 이 때 복수의 라이브러리에서 동시에 같은 버전의 라이브러리를 dependency로 사용하고 있다면, 해당 라이브러리를 node_modules 디렉토리의 최상위 경로로 올린다.(호이스팅)
  - 위와 같이 중복라이브러리 위치 때문에 발생하는 현상이다.
  - 호이스팅 되는 과정에서 package.json에 명시하지 않은 라이브러리를 사용할 수 있는 것이다.
  - 이 라이브러리는 버전이 명확하지 않기 때문에, 다른 사용자에게는 버전 호환 실패로 인한 오류를 발생시킬 수 있다.

- 너무 무거운 node_modules

  - npm과 yarn에서 node_modules가 제대로 설치 되었는지 검사하지 않는다.
  - 그래서 실무에서 node_modules를 삭제하고 재설치하면 정상 작동하는 경우가 종종 있다.

## pnpm

- npm을 기본으로 따라가지만 평탄화(호이스팅)구조를 중첩(계층)구조로 관리한다.
- 심볼릭 링크를 통해서 중복으로 사용되는 의존성을 사용한다.

```
// npm의 구조 예시
.bin
accepts
array-flatten
body-parser
bytes
content-disposition
cookie-signature
cookie
debug
depd
...
```

```
//pnpm 구조 예시
- node_modules
  - .pnpm
    - accepts@1.X.X
    - array-flatten@1.X.X
    ...
    - express@4.XX.X
      - node_modules
        - accepts
        - array-flatten
        - body-parser
        - content-disposition
        ...
        - etag
        - express
          - lib
            - history.md
            - index.js
            - License
            - package.json
            - readme.md
```

## yarn berry

- node_modules를 사용하지 않는 컨셉

### yarn berry 구조

- node_modules가 없음

```
- .yarn/
  - cache/
  - release/
    - yarn-3.X.X.cjs
  - sdk/
  - unplugged/
- .pnp.cjs
- .pnp.loader.mjs
- .yarnrc.yml
- package.json
- yarn.lock
```

### cache

- cache 폴더 내부에 모듈을 zip 파일 형태로 보관
- Zero Install, install이 불필요
- 오프라인시에 캐싱기능으로 사용가능
- ci 배포시에 clone만 하면 의존성이 다 포함되어 있기 때문에 배포속도에 유리(배포 후에 의존성 설치하는 과정이 필요하지 않음)

### plug 'n' play

- 기존 npm은 종속성 트리 아래의 패키지를 병함 및 호이스팅 함.
- 기존 방식은 루트경로에서 패키지를 바로 탐색하기 때문에 효율적인 부분이 있다.
- 하지만 효율면에선 좋지만 간접설치된 종속성에 개발자가 접근하거나, 존재하지 않는 종속성에 의존하는 코드가 발생한다.(유령의존성)
- yarn berry에서는 호이스팅 동작이 일어나지 않게 nohoist 옵션이 기본이다.
- 그리고 효율성을 높이기 위해서 pnp 개념을 채택했다.
- .yarn 경로 하위에 의존성들을 .zip 포맷으로 압축 저장,
- .pnp.cjs 파일에 의존성 트리 정보를 저장한다. 이를 인터페이스 링커(Interface Linker)라고 함

```json
 ["@babel/helper-module-transforms", [\ //패키지 이름
        ["npm:7.19.6", {\ //버전
          "packageLocation": "./.yarn/cache/@babel-helper-module-transforms-npm-7.19.6-c73ab63519-c28692b37d.zip/node_modules/@babel/helper-module-transforms/",\ // 위치
          "packageDependencies": [\ // 참조하는 의존성
            ["@babel/helper-module-transforms", "npm:7.19.6"],\
            ["@babel/helper-environment-visitor", "npm:7.18.9"],\
            ["@babel/helper-module-imports", "npm:7.18.6"],\
            ["@babel/helper-simple-access", "npm:7.19.4"],\
            ["@babel/helper-split-export-declaration", "npm:7.18.6"],\
            ["@babel/helper-validator-identifier", "npm:7.19.1"],\
            ["@babel/template", "npm:7.18.10"],\
            ["@babel/traverse", "npm:7.19.6"],\
            ["@babel/types", "npm:7.20.2"]\
          ],\
          "linkType": "HARD"\
        }]\
      ]],\
```

## 각 패키지 항목별 성능비교

| 항목                              | npm        | yarn       | pnpm       | yarnberry  |
| --------------------------------- | ---------- | ---------- | ---------- | ---------- |
| 용량                              | 100%       | 100%       | 80%        | 40%        |
| 파일개수                          | 100%       | 90%        | 100%       | 70%        |
| 속도(clean Install)               | 100%       | 50%        | 50%        | 70%        |
| 속도(cache and with node_modules) | 큰차이없음 | 큰차이없음 | 큰차이없음 | 큰차이없음 |
| 속도(update)                      | 10%        | 50%        | 30%        | 100%       |

- npm : 사이즈가 작은 프로젝트 / 사용성 편함, 트러블슈팅 쉬움, 느림, 무거움
- pnpm : 사이즈가 큰 프로젝트 / 트러블슈팅 어렵지만 여러가지 성능 이점 많음
- yarn : yarnberry 이후 업데이트 없음 사용안하는게 좋음
- yarnberry : 사이즈가 큰 프로젝트 /
