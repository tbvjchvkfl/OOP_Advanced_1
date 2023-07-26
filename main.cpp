#include <iostream>


class MyClass
{
	int mValue;

public:
	MyClass(int x) : mValue(x)
	{
		std::cout << " �Ϲ� ������" << std::endl;
	}

	// ���� ������
	MyClass(const MyClass& target) // ���� ������ : <class_name>(const <class_name> & )
	{
		mValue = target.mValue;
		std::cout << "���� ������" << std::endl;
	}
	~MyClass()
	{
		std::cout << "[�Ҹ���]" << std::endl;
	}
};

int main()
{
	MyClass x1 = 5;			// ����(����)�ʱ�ȭ
	MyClass x2(5);			// ���� �ʱ�ȭ
	MyClass x3{ 5 };		// ������ �ʱ�ȭ					


	MyClass c1(1);

	// ���� ������ 
	// ������ �ʱ�ȭ�ĵ� ������.
	MyClass c2(c1);
}

// ���� ������
// Deep Copy (���� ������) VS Shallow (���� ������)


