#include<iostream>

int main()
{
	int id = 0;		//lambda�в��� mutable �൱�ڣ���lambda�г����Ǹ�����һ��ֻ�����ڲ��ı���id
	auto f = [id]()mutable
	{
		std::cout << "id: " << id << std::endl;
		++id;
	};
	id = 42;
	f();
	f();
	std::cout << id << std::endl;
	f();
	getchar();
	return 0;
}