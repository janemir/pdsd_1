#include "SetLab1_2_Miroshnichenko.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {

    setlocale(LC_ALL, "ru");

    srand(time(0));
    int count = 6 + rand() % 4; // �������� ��������� �� 6 �� 9

    Node* setA = createSet(count, 1, 100); // f5 �������� ���������
    cout << "������� ��������� A - " << setToString(setA, ' ') << endl; // f7 ����� ��������� 
    cout << "�������� ��������� � - " << setPower(setA) << endl; // f6 �������� 
    setA = deleteSet(setA);  // f8 �������� ���������
    cout << "�������� ��������� �" << endl;
    cout << "�������� ��������� � - " << setPower(setA) << endl;
    cout << "����� ��������� � - " << setToString(setA, ' ') << endl;
    cout << "��� ����������� ������� ����� �������..." << endl;
    cin.get();

    return 0;
}