// GetMaxOl.cpp
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

int maximum(int arr[], int len) // maximum �Լ��� int�� ��������
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
        if (max < arr[i])
            max = arr[i];

    return max; // ����� ��ȯ
}

int main()
{
    double datadoub[10] = {10.123, 23.12, 5.33, 9.1924, 22.1829, 48.12, 12.495, 10.123, 55.909, 31.1};
    int dataInt[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    cout << "������(double��) : ";
    for (int i = 0; i < 10; i++)
        cout << datadoub[i] << "  ";
    cout << endl;
    cout << "������(int��) : ";
    for (int i = 0; i < 10; i++)
        cout << dataInt[i] << "  ";
    cout << endl
         << endl;
    cout << "�ִ�(double��) = " << maximum(datadoub, 10) << endl; // Double�϶�
    cout << "�ִ�(int��) = " << maximum(dataInt, 10) << endl;     // Int�϶�
}