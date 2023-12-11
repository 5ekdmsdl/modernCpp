#include <iostream>
#include <type_traits> 

#pragma pack(1)  // ����ü align�� 1byte ������ = padding �߰�������.
struct PACKET
{
	char cmd;
	int  data;
};

// pck ���̿� padding�� �ȳֱ� ���ؼ��� assert �ڵ� �߰�!
static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int), \
			"error, unexpected padding!");

//int main()
//{
//	std::cout << sizeof(PACKET) << std::endl; // ?
//}

template<typename T> void object_set_zero(T* p)
{
	static_assert(!std::is_polymorphic<T>::value, "error, T has virtual function");

	// memset 0�� class���ٰ� �ϸ� �����Լ� �����͵� �ʱ�ȭ�ǹ���!
	memset(p, 0, sizeof(T));
}

class object {
	int data;
};

int main() {
	object ob;
	object_set_zero(&ob);

}
