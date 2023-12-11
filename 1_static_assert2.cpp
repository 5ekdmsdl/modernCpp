#include <iostream>
#include <type_traits> 

#pragma pack(1)  // 구조체 align을 1byte 단위로 = padding 추가하지마.
struct PACKET
{
	char cmd;
	int  data;
};

// pck 사이에 padding을 안넣기 위해서는 assert 코드 추가!
static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int), \
			"error, unexpected padding!");

//int main()
//{
//	std::cout << sizeof(PACKET) << std::endl; // ?
//}

template<typename T> void object_set_zero(T* p)
{
	static_assert(!std::is_polymorphic<T>::value, "error, T has virtual function");

	// memset 0을 class에다가 하면 가상함수 포인터도 초기화되버려!
	memset(p, 0, sizeof(T));
}

class object {
	int data;
};

int main() {
	object ob;
	object_set_zero(&ob);

}
