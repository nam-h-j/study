# 03_SaaS, IaaS, PaaS
## 클라우드
-  인터넷을 통해 접근 할 수 있는 서버 안에서 구동되는 소프트웨어, 데이터베이스 등
-  컴퓨터장비를 구축하지 않고 데이터센터(Data Center)에 맡겨 수행하는 것
-  네트워크 장비의 전력, 위치, 확장성을 고려하지 않고 서비스 운영에만 집중 가능.
  -  오프프레미스(off-premise) 방식 < > 온프레미스(on-premise)

## 클라우드 종류
### SaaS
- Software as a Service
- 인터넷을 통해 소프트웨어를 제공하는 것 (구글 드라이브, N드라이브, 구글 Docs등)
- 모든 요소를 사용자에게 제공하는 형태.
- Application, Data, Runtime, Middleware, O/S, Virtualization, Servers, Storage, Network

### IaaS
- Infrastructure as a Service
- 인프라를 제공 (빈방을 제공받는 것)
- 서버, DB
- 가상머신 위에서 앱의 각 컴포넌트가 구동됨.
- 특정 클라우드에 종속 되지 않는다. 이식성이 좋다.(migrate)
- 운영비가 상승한다.
- AWS EC2, NCP등
- O/S, Virtualization, Servers, Storage, Network

### PaaS
- Plaform as a Service
- 플랫폼을 제공
- 운영비 절감, 모니터링, CI/CD
- IaaS보다 유연하지 않고 플랫폼에 종속됨, 이식성이 떨어짐.
- heroku
- Runtime, Middleware, O/S, Virtualization, Servers, Storage, Network
