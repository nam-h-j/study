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
- 캐시 사용
  https://www.youtube.com/watch?v=Ds7EjE8Rhjs
