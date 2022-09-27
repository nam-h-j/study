// GetMax.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
#include <limits>
using namespace std;

double maximum(double arr[], int len) // �Լ� �Ӹ���
{
    double max = arr[0]; // int���� �ּڰ��� max�� ������
    for (int i = 1; i < len; i++)
        if (max < arr[i])
            max = arr[i];

    return max; // ����� ��ȯ
}

int main()
{
    double data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    cout << "������ : ";
    for (int i = 0; i < 10; i++)
        cout << data[i] << "  ";
    cout << endl
         << endl;
    cout << "�ִ� = " << maximum(data, 10)
         << endl; // maximum �Լ��� �ִ� ���
}