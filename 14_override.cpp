// 14_override  - 44 page

class Base {
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};

class Derived : public Base {
public:
	// ���� �Լ� �����ǽ� �Ǽ�(��Ÿ) �߻��ص� ������ ���� X
	// => �����Ϸ� : �׳� ���� �����������~~
	/*virtual void fooo() {}
	virtual void goo(double a) {}
	virtual void hoo() const  {}
	*/
	
	// => Cpp11 ���� override Ű���� ����!
	// compiler�� error ã���ش�.
	virtual void fooo() override {}
	virtual void goo(double a) override  {}
	virtual void hoo() const  override {}
	
	// => �����Լ� �����ǽÿ� override �ʼ�!!
};

int main() {



}