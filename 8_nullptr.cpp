// 8_nullptr - 29page

int main()
{
	// C++98 시절
	int  n1 = 0;
	int* p1 = 0;

	// C++11부터는
	int* p2 = 0;		// bad code
	int* p3 = nullptr;	// good code
	//int v1 = nullptr;	// error
}