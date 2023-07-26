#include <iostream>


class MyClass
{
	int mValue;

public:
	MyClass(int x) : mValue(x)
	{
		std::cout << " 일반 생성자" << std::endl;
	}

	// 복사 생성자
	MyClass(const MyClass& target) // 복사 생성자 : <class_name>(const <class_name> & )
	{
		mValue = target.mValue;
		std::cout << "복사 생성자" << std::endl;
	}
	~MyClass()
	{
		std::cout << "[소멸자]" << std::endl;
	}
};

int main()
{
	MyClass x1 = 5;			// 복사(대입)초기화
	MyClass x2(5);			// 직접 초기화
	MyClass x3{ 5 };		// 유니폼 초기화					


	MyClass c1(1);

	// 복사 생성자 
	// 유니폼 초기화식도 동일함.
	MyClass c2(c1);
}

// 복사 생성자
// Deep Copy (깊은 생성자) VS Shallow (얕은 생성자)


