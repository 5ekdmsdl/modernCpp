// 4_beginend - 16 page
#include <vector>
#include <list>
#include <iostream>

int main()
{
	//std::vector<int> v = { 1,2,3,4,5 };
	//std::list<int>   v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };


	// # 1. C++98 ������ �ݺ��ڸ� ��� �ڵ�
	// => �Ʒ� ó�� �ݺ����� Ÿ���� ���� ����ϸ�
	// ���� 1. �ڵ尡 ������ ���̰�
	//      2. �����̳� ����� �ݺ��� Ÿ�Ե� ����Ǿ�� �մϴ�.
//	std::vector<int>::iterator p1 = v.begin();
//	std::vector<int>::iterator p2 = v.end();

	// # 2. �ݺ��� Ÿ���� ���� ������� ����, auto ����ϼ���
	// => �����̳� ����� �º��� �������ʿ� �����ϴ�.
	// => �� �Ʒ� �ڵ�� v �� �迭�̶�� error �Դϴ�.
//	auto p1 = v.begin();
//	auto p2 = v.end();


	// (�߿�) # 3. ��� �Լ� begin ���� �Ϲ� �Լ� begin �� �������� �����ϴ�.
	// => �Ʒ� ó�� ����ϸ� v �� �迭�̾ ���� �����ϴ�.
	auto p1 = std::begin(v);
	auto p2 = std::end(v);

	// �迭�� std:;size ����ϸ� ���� Ÿ�� ������� ��밡��
	// �迭 vector ��� ��� ����
	auto sz1 = std::size(v);

	/////////////////////////////////////////////////////
	// C20���� �ݺ��� ������!

	std::vector<int> vv = { 1,2,3,4,5 };

	// �ݺ��ڸ� ������ 3���� ���
	// # 1. ��� �Լ� begin ���(C++98)
	auto p1 = vv.begin();

	// # 2. �Ϲ� �Լ� begin ���(C++11)
	// => v �� �迭�̶� ok
	auto p2 = std::begin(vv);

	// # 3. std::ranges::begin ���(C++20)
	auto p3 = std::ranges::begin(vv);

	// std::ranges::begin : �������� ������,
	auto p4 = std::begin(std::vector<int>{1, 2, 3});
	// std::begin�� �ӽð�ü�� begin�� ���´�. => ����ϸ� runtime error
	// �ٵ� ����� �ȴ�.

	// �׷��� ��� ������ ���� ���ش�. (����)
	auto p4 = std::ranges::begin(std::vector<int>{1, 2, 3});



}