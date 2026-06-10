# VM, JVM, WSL2 정리

## VM (Virtual Machine)

가상 머신(VM)은 하나의 운영체제 위에서 또 다른 운영체제를 실행할 수 있도록 해주는 가상화 기술이다.

예를 들어 Windows 환경에서 Ubuntu Linux를 설치하여 사용할 수 있다.

### 장점

* 여러 운영체제를 한 컴퓨터에서 사용할 수 있음
* 테스트 및 개발 환경 구축이 편리함
* 실제 시스템에 영향을 주지 않고 실습 가능

### 단점

* CPU, RAM, 저장 공간 등 시스템 자원을 많이 사용함
* 성능이 실제 운영체제보다 다소 낮을 수 있음

대표적인 VM 프로그램으로는 VirtualBox와 VMware가 있다.

---

## JVM (Java Virtual Machine)

JVM은 Java 프로그램을 실행하기 위한 가상 실행 환경이다.

Java 소스 코드는 컴파일 과정을 거쳐 바이트코드(Bytecode)로 변환되며, JVM이 이를 해석하고 실행한다.

### 특징

* 운영체제에 관계없이 Java 프로그램 실행 가능
* "Write Once, Run Anywhere"를 실현하는 핵심 기술
* 메모리 관리와 가비지 컬렉션(Garbage Collection) 기능 제공

즉, Windows에서 작성한 Java 프로그램을 Linux나 macOS에서도 동일하게 실행할 수 있다.

---

## WSL2 (Windows Subsystem for Linux 2)

WSL2는 Windows 환경에서 Linux를 사용할 수 있도록 제공하는 기능이다.

별도의 듀얼 부팅이나 가상 머신 설치 없이 Linux 명령어와 개발 환경을 사용할 수 있다.

### 장점

* Windows와 Linux를 함께 사용할 수 있음
* 개발 환경 구축이 편리함
* VM보다 상대적으로 가볍게 동작함

### 활용 예시

* Linux 명령어 학습
* 서버 개발 환경 구축
* Docker 및 개발 도구 사용

---

## 정리

VM은 운영체제 자체를 가상으로 실행하는 기술이고, JVM은 Java 프로그램을 실행하기 위한 가상 환경이다. WSL2는 Windows에서 Linux 환경을 사용할 수 있도록 지원하는 기능으로 개발 및 학습 환경에서 많이 활용된다.
