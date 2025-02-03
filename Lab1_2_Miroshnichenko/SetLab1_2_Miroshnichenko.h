#pragma once

#include <string> 

struct Node {
    int data;
    Node* next;
};

Node* createEmptySet(); // f1 �������� ������� ���������
bool isEmptySet(Node* head); // f2 ������ ���������?
bool isElementInSet(Node* head, int value); // f3 �������� �������������� �������� ���������
Node* addElementToSet(Node* head, int value); // f4 ���������� ������ �������� � ���������
Node* createSet(int count, int min, int max); // f5 �������� ���������
int setPower(Node* head); // f6 �������� ���������
std::string setToString(Node* head, char delimiter); // f7 ����� ��������� ���������
Node* deleteSet(Node* head); // f8 �������� ���������

