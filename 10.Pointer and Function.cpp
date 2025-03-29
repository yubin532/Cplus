//#include <iostream>
//using namespace std;
//알고가야하는 부분
//포인터는 변수의 주소를 저장하는 특별한 타입의 변수
//참조자는 연결한 변수의 또다른 이름
// 함수의 매개변수는 함수를 호출할 때, 전달받을 '값'에 대한 표현
// 함수의 인자(argument)는 함수를 호출할 때 전달해줄 '값'애 대한 표현
//
//1. 함수의 매개변수 전달 방법을 통한 포인터와 레퍼런스의 이해
//void Function01(int* ptr)
//{
//	*ptr *= 3;
//	전달받은 포인터 변수  ptr가 가르고 있는 실제 '값'을 3만큼 곱합니다.
//}
//void Function02(int& ref)
//{
//	ref *= 4;
//	전달받은 참조자 ref의 값을 4만큼 곱합니다.
//}
//
//int main()
//{
//	int a = 5;
//	1. 포인터를 매개변수로 하는 fnuction을 호출합니다.
//	Function01(&a);
//	cout << a << endl;
//	2. 참조라를 매개변수로 하는 함수 Function02를 호출합니다.
//	Function02(a);
//	cout << a << endl;
//	return 0;
//}
