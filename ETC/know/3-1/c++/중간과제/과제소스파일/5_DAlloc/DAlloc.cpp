// DAlloc.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;

int main()
{
    char *sPtr;
    int maxSLen; // �Է��Ҵܾ����ִ����
    cout << "�ܾ��� �ִ� ���̸� �Է��Ͻÿ� : ";
    cin >> maxSLen;
    sPtr = new char[maxSLen]; // maxSLen���� ���ڸ� ������ �޸� �Ҵ�
    cout << "�ܾ �Է��Ͻÿ� : ";
    cin >> sPtr;
    int len{0};
    for (char *p = sPtr; *(p) != 0; *(p++)) // p�� �̿��Ͽ� sPtr�� ���ۺ��� ������ �ݺ�
        len++;                              // ���� ���� ī��Ʈ
    cout << sPtr << "�� ���� ��: " << len << endl;
    delete[] sPtr; // ������ �Ҵ��� �޸� ��ȯ
}