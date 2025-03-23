#pragma once
//인클루드 파일 또는 헤더 파일이라고 불리는 이 파일은
//#include를 통해서 소스 파일에 추가하는 파일입니다.
#include <iostream> //입출력 도구
#include <iomanip> //출력 조정 도구 (자리수 조정, 칸 조정 진법 설정(8,10,16진수))
#include <string> //문자열 관련 도구
using namespace std;
//헤더파일에 작성할 수 있는 내용
//변수
//함수 원형
//구조체
//클래스
//매크로

//헤더 파일 만드는 이유
//구문의 중복을 막아줘서 프로그램 에러를 방지할 수 있습니다.
//사용자가 만든 헤더는 #include ""를 통해 따로 검색하기 쉽습니다.(project) 
//기존의 <>는 종류가 너무 많습니다.(Windows Kits)