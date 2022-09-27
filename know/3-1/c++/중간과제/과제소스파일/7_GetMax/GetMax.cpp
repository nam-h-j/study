// GetMax.cpp
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

int main()
{
    double data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    cout << "데이터 : ";
    for (int i = 0; i < 10; i++)
        cout << data[i] << "  ";
    cout << endl
         << endl;
    cout << "최댓값 = " << maximum(data, 10)
         << endl; // maximum 함수로 최댓값 계산
}