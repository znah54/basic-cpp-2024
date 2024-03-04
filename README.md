# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명

- 제어문
	1. 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의), Overriding
		
	2. 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식){
			1. 초기식을 가지고 조건식을 따진다.
			2. 참이면 for문의 실행문 실행
			3. 증감식을 실행
			4. 조건식을 따지고
			2.
			3.
			4.
			2.
			3.
			4.
			.
			.
			.
		}

	
- 지역변수 = 로컬변수
	1. 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	1. 문자 : 문자(char),문자열
	2. 숫자 : 정수(int),실수
	
- 정수로 계산하기
	


## 2일차

- 자료형
	- 문자(char) / 문자열
	- 정수(int) / 실수
ex) char name [100];
	char lang [200];

- C에서 메모리
	1. 스택 : 지역변수, 매개변수
	2. heap : 사용자에게 할당된 영역 사용을 할려면 malloc()으로 할당을 받는다 - free()로 반환
	3. data : 함수, 전역변수, 상수, 문자리터럴
	4. point : call by value, reference(*,&) 주소 사용법, 상수 사용법
		- 참조자(Reference)와 함수 
		* call-by-value : 값을 인자로 전달하는 함수의 호출방식
		![주소값 호출]("https://raw.githubusercontent.com/znah54/basic-cpp-2024/main/images/call_by.jpg")

## 3일차
	- C++ new,delete(C는 malloc free) >> Heap에 메모리 저장
	- Class
	: 클래스는 기본적으로 클래스 내에 선언된 변수는 클래스 내에 선언된 함수에서만 접근 가능하다.
		- Public : 어디서든 접근 허용	> 접근제한
		- protected : 상관관계에 놓여있을 때, 유도 클래스에서의 접근허용
		- private : 클래스 내(클래스 내에 정의된 함수)에서만 접근허용	 > 멤버함수

	- Class 함수는 전역함수 

## 4일차
	- new 연산자는 힙영역에 메모리를 할당하고 그 주소를 리턴한다.
	

	1. 생성자와 소멸장
	```
	class SimpleClass
	{
		private:
		int num;
		public:
		SimpleClass(int n) // 생성자(constructor)
		{
			num=n;
		}
		int GetNum() const
		{
			return num;
		}
	};
	```

## 5일차
	1. 멤버 이니셜라이즈
	: 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
	: const변수와 참조벼수의 초기화에 사용
	
	- 멤버 이니셜라이즈
	- 객체 생성 전, 선언과 동시에 초기화가 필요한 경우에 사용
	- const 변수와 참조 변수의 초기화에 사용
	
- 생성자(클래스 이름과 같은 멤버 함수로 출력x)
	- 객체 생성시 자동으로 호출되는 멤버함수
	- 모든 클래스는 디폴트 생성자를 가지고 있음
	- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출 불가 -> 디폴트 생성자가 필요한 경우 명시적으로 작성
	- 멤버변수를 초기화를 담당
	
- 생성자 불일치
	- 매개변수가 void형으로 선언되는 디폴트 생성자
	- 생성자가 하나도 정의되어 있지 않을때에만 삽입이 됨!
	
- Private 생성자
	- 생성자들은 모두 Public으로 선언
	- 객체의 생성이 클래스의 외부에서 진행도기 때문에 생성자는 Public으로 선언
	
- 소멸자 => 객체 생성시 반드시 호출되는 것이 생성자 -> 객체 소멸시 반드시 호출 되는 것은 소멸자

- 메모리 동적할당 : new 연산자 사용
	- 프로그램 실행 중 = 메모리 할당
	
- 객체 배열
```c++ 
SoSimple arr[10];
```

```c++ 동적으로 할당할 경우
SoSimple *ptrArr = new SoSimple[10]

```
- 포인터배열 : 포인터를 저장하는 배열
- 배열 포인터 : 배열을 가리키는 포인터
- 복사 생성자, 디폴트 생성자


## 6일차

	1. 복사 생성자
		- 깊은복사, 얕은복사
		- 깊은복사 예제문 예시
		```
		Person(const Person &copy) : age(copy.age)
		{
			name=new char[strlen(copy.name)+1];
			strcpy(name, copy.name)
		}
		- 복사 생성자 호출되는 시점
			1. 기존에 생성된 객체를 이용해서 새로운 객체를 초기화 하는 경우
			2. Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
			3. 객체를 반환하되, 참조형으로 반환하지 않는 경우

		- 메모리 공간의 할당과 초기화가 동시에 일어나는 상황
		(Call-by-value) 값만 전달할 경우에만
		```
		int func(int a){		// a = 10; num의 10을 복사해서 사용한다.
		a = 10 + a;
		return a;				// a를 리턴한다.
		}

		int num = 10;
		int res = func(num)
		```

## 7일차
	- friend , static
	p.265~310

	상속(Inheritance)
	유도클래스
	protected
	

## 8일차

	- 오버로딩(Overloading) : 다중정의
	- 오버라이딩(Overriding) : 재정의, 상속관계에서 사용

## 9일차 

## 10일차