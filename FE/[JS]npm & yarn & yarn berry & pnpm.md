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

  https://www.youtube.com/watch?v=Ds7EjE8Rhjs
