#include <iostream>
using namespace std;
//friend 기능 사용하기
//클래스의 멤버 함수는 아니나, 해당 클래스의 private 값에 접근할 수 있게 해줍니다.

//friend 처리된 함수는 private를 사용할 수 있는 멤버 함수와 동등한 권한을 가지게 됩니다.

//유의사항
//해당 기능은 비공개에 대한 접근 허용 문법이므로, 남용하지 않는 것을 전제로 사용합니다.
//꼭 필요한 경우에만 사용합니다.

//1. friend 클래스 목록
//클래스를 다른 클래스의 friend로써 등록합니다.
//이렇게 하면 다른 클래스의 private 멤버에 접근할 수 있게 됩니다.
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

//3. friend 연산자 오버로딩
class Complex //복소수 클래스 : 흔히 a + bi라고 부르는 형태로
	//a는 실수(real), b는 허수(imaginary)를 의미합니다.
	//실수 : 흔히 알고 있는 일반적인 실제 숫자
	//허수 : i 기호가 붙은 가상의 숫자(제곱해서 -1이 되는 수)
	//수학에서 실수에 대한 부호 표현을 위해서 사용됩니다.
{
public :
	double real;
	double imag;
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }

	//멤버 함수로써 오버로딩이라면?
	// complex operateor+(sonst Complex& other);
	//외부에서 진행할 복소수
	friend Complex operator+(const Complex& a, const Complex& b);

	//외부에서 진행할 복수수에 대한 비교(==)
	friend bool operator==(const Complex& a, const Complex& b)
};
int main()
{
	A a(10);
	B b;
	b.veiw(a);

	//외부에서 편하게 사용 가능
	F_function(a)

	
	return 0;
}