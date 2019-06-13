#include<iostream>

int main()
{
	int id = 0;		//lambda中采用 mutable 相当于，在lambda中出啊那个键了一个只在其内部的变量id
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