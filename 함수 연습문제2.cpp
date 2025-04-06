//#include <iostream>
//using namespace std;
////책 클래스를 기반으로 Ebook 클래스를 정의합니다.
////책에서 기본적으로 책의 제목과, 책의 가격이 주어지며,
////E에서는 주기적으로 보안 키를 넣어주려고 합니다.
////Ebook에서는 주기적으로 보안 키를 넣어주려고 합니다.
//
////책의 정보를 확인할 수 이쓴 메소드 bookInfo를 만들고.
////Ebook의 정보를 확인할 수 있는 메소드 ebookInf도 구현하세요.
//
//class Book
//{
//public:
//	string Bookname;
//	int price;
//	void bookInfo()
//	{
//		cout << Bookname << " " << price << endl;
//	}
//};
//class Ebook : public Book
//{
//public :
//	string key;
//	Ebook(string name, int price, string key)
//	{
//		this->Bookname = name;
//		this->price = price;
//		this->key = key;
//	}
//	void EbookInfo()
//	{
//		cout << Bookname << " " << price << " " << key,endl;
//	}
//};
//		
//int main()
//{
//	Ebook ebook("Welcome to C++;", 17900, "adsx0icfe);
//	ebook.ebookInfo();
//	//Welcome to C++ 1790 adsx0icfe
//
//	return 0;
//}