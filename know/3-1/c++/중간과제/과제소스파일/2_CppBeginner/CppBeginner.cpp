// CppBeginner.cpp
// Charset : EUC-KR
// Created at : 2022-09-26
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;

// Ŭ���� ����
class CppBeginner
{
public:
    void hello() const
    {
        cout << "���� ù ��° C++ ���α׷�" << endl;
    }
};

int main()
{

    CppBeginner me; // CppBeginner ��ü ����
    me.hello();     // ��ü���� ������ ����(����Լ� hello() ȣ��)
}