// GetMaxOl.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
#include <limits>
using namespace std;

double maximum(double arr[], int len) // 함수 머리부
{
    double max = arr[0]; // int형의 최솟값을 max로 가정함
    for (int i = 1; i < len; i++)
        if (max < arr[i])
            max = arr[i];

    return max; // 결과의 반환
}

int maximum(int arr[], int len) // maximum 함수의 int형 다중정의
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
        if (max < arr[i])
            max = arr[i];

    return max; // 결과의 반환
}

int main()
{
    double datadoub[10] = {10.123, 23.12, 5.33, 9.1924, 22.1829, 48.12, 12.495, 10.123, 55.909, 31.1};
    int dataInt[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    cout << "데이터(double형) : ";
    for (int i = 0; i < 10; i++)
        cout << datadoub[i] << "  ";
    cout << endl;
    cout << "데이터(int형) : ";
    for (int i = 0; i < 10; i++)
        cout << dataInt[i] << "  ";
    cout << endl
         << endl;
    cout << "최댓값(double형) = " << maximum(datadoub, 10) << endl; // Double일때
    cout << "최댓값(int형) = " << maximum(dataInt, 10) << endl;     // Int일때
}