#include <iostream>

int foo(int &i){
	static int j = i;
	std::cout << "j = " << j << std::endl;

	j++;
//	std::cout << "j = "<< j << std::endl;
	return j;
}

int main (void)
{

	int k = 0;
//	std::cout << "k before foo = " << k << std::endl;
	foo(k);
//	std::cout << "k after foo = " << k << std::endl;
//	std::cout << "foo(k) = " << foo(k) << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0 && foo(i) % 2 == 0)
		{
			++k;
			std::cout << "k = " << k << std::endl;

		}
	}
	std::cout << k << std::endl;
	std::cout << foo(k) << std::endl;
}