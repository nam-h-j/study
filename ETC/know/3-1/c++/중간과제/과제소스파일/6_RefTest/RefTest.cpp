// RefTest.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int &aRef = a; // a�� �����ϴ� ���� ���� aRef�� ����
    cout << "a�� �� : " << a << endl;
    cout << "aRef�� �����ϴ� �� : " << aRef << endl
         << endl;
    aRef = 100;
    cout << "a�� �� : " << a << endl;
    aRef = b;
    cout << "a�� �� : " << a << endl;
    return 0;
}