#include <iostream>
using namespace std;
//friend ��� ����ϱ�
//Ŭ������ ��� �Լ��� �ƴϳ�, �ش� Ŭ������ private ���� ������ �� �ְ� ���ݴϴ�.

//friend ó���� �Լ��� private�� ����� �� �ִ� ��� �Լ��� ������ ������ ������ �˴ϴ�.

//���ǻ���
//�ش� ����� ������� ���� ���� ��� �����̹Ƿ�, �������� �ʴ� ���� ������ ����մϴ�.
//�� �ʿ��� ��쿡�� ����մϴ�.

//1. friend Ŭ���� ���
//Ŭ������ �ٸ� Ŭ������ friend�ν� ����մϴ�.
//�̷��� �ϸ� �ٸ� Ŭ������ private ����� ������ �� �ְ� �˴ϴ�.
class A
{
private :
	int secret_value;
public :
	A(int s) : secret_value(s) {}
	friend class A
};

class B
{
public :
	void View(A& a)
	{
		cout << a.secret_value << endl;
	}
};

//3. friend ������ �����ε�
class Complex //���Ҽ� Ŭ���� : ���� a + bi��� �θ��� ���·�
	//a�� �Ǽ�(real), b�� ���(imaginary)�� �ǹ��մϴ�.
	//�Ǽ� : ���� �˰� �ִ� �Ϲ����� ���� ����
	//��� : i ��ȣ�� ���� ������ ����(�����ؼ� -1�� �Ǵ� ��)
	//���п��� �Ǽ��� ���� ��ȣ ǥ���� ���ؼ� ���˴ϴ�.
{
public :
	double real;
	double imag;
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }

	//��� �Լ��ν� �����ε��̶��?
	// complex operateor+(sonst Complex& other);
	//�ܺο��� ������ ���Ҽ�
	friend Complex operator+(const Complex& a, const Complex& b);

	//�ܺο��� ������ �������� ���� ��(==)
	friend bool operator==(const Complex& a, const Complex& b)
};
int main()
{
	A a(10);
	B b;
	b.veiw(a);

	//�ܺο��� ���ϰ� ��� ����
	F_function(a)

	
	return 0;
}