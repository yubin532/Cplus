#include <iostream>
using namespace std;

//C++ zmffotm : 데이터와 함수를 하나로 묶은 사용자 정의 데이터 타입
//클래스는 프로그램 내의 '객체'를 만들기 위한 설계도 역할을 합니다.


// ex) ATM에 대한 클래스 설계
// ATM에 필요한 햄시데이터 나열
//1. 사용자(ATM을 이용합니다.)
//2. ATM 기기 (담당 관리자, 위치)
//3. 은행(ATM이 연결할 대상 (은행 주소)
//4. 계좌(사용자가 은행에 만든) (잔액, 기능(예금, 출금, 입금)
//5. 예금

//클래스 설게의 기본 법칙
//private를 통해, 직접적으로 접근하면 안되는 정보들을 설계하고,
// //public을 통해 외부에 기능을 전달합니다.
//좌석 클래스 만들기
class Seat
{
//private에 적혀있느 변수 또는 함수는 공개되지 않습니다.(외부에서 접근할 수 없습니다.)
private :
	string name;
//public에 적혀있는 변수 또는 함수는 공개되빈다.(외부에서 사용할 수 있습니다.)
public :
	//생성자는 클래스와 이름이 동일한 함수를 의미합니다.
	//클래스 형태의 객체(데이터)가 생성되었을 때, 호출됩니다.
	Seat()
	{
		name = "{--- }";
	}
	void reset()
	{
		name = "{--- }";
	}
	void setname(string name)
	{
		//this->name은 현재 클래스 Seat 자신이 가지고 있는 name임을 표현합니다. (웬만해서는 사용하지는 않는 것이 좋습니다.)
		this->name = name;
	}
	string getName()
	{
		return name;
	}
};

int main()
{
	Seat* seats = new Seat[5];

	cout << "김준표님께서 2번 자리에 예약하셨습니다." << endl;
	seats[1].setname("김준표");
	
	for (int i = 0; i < 5; i++)
	{
		cout << seats[i].getName() << "";
	}
	return 0;
}
