// FindMaxInArr.cpp
// Charset : EUC-KR
// Created at : 2022-09-26
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;

int main()
{
    int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};
    int max = data[0]; // data�� ù ��° �����͸� max�� ������

    cout << "������ : " << data[0]; // 0�� ������ ���
    for (int i = 1; i < 10; i++)
    {                            // ������ 9���� ������ ��
        cout << "  " << data[i]; // i�� ������ ���
        if (max < data[i])       // i�� �����Ͱ� max���� ũ�� ��
            max = data[i];       // max�� i�� �����ͷ� �ٲ�
    }
    cout << endl
         << endl;
    cout << "�迭�� �ִ� : " << max << endl;
    return 0;
}