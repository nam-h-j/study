// DAlloc.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;

int main()
{
    char *sPtr;
    int maxSLen; // 입력할단어의최대길이
    cout << "단어의 최대 길이를 입력하시오 : ";
    cin >> maxSLen;
    sPtr = new char[maxSLen]; // maxSLen개의 문자를 저장할 메모리 할당
    cout << "단어를 입력하시오 : ";
    cin >> sPtr;
    int len{0};
    for (char *p = sPtr; *(p) != 0; *(p++)) // p를 이용하여 sPtr의 시작부터 끝까지 반복
        len++;                              // 문자 수를 카운트
    cout << sPtr << "의 문자 수: " << len << endl;
    delete[] sPtr; // ㈀에서 할당한 메모리 반환
}