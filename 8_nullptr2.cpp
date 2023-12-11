// 8_nullptr2
#include <iostream>

void foo(int* p) {}

int main()
{
	int n = 0;
	foo(0);
	foo(n);	
}

template<typename F, typename ARG>
void forward_parameter(F f, ARG arg)
{
	f(arg);
}






