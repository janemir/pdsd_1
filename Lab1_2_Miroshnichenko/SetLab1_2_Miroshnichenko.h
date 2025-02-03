#pragma once

#include <string> 

struct Node {
    int data;
    Node* next;
};

Node* createEmptySet(); // f1 создание пустого множества
bool isEmptySet(Node* head); // f2 пустое множество?
bool isElementInSet(Node* head, int value); // f3 проверка принадлежности элемента множеству
Node* addElementToSet(Node* head, int value); // f4 добавление нового элемента в множество
Node* createSet(int count, int min, int max); // f5 создание множества
int setPower(Node* head); // f6 мощность множества
std::string setToString(Node* head, char delimiter); // f7 вывод элементов множества
Node* deleteSet(Node* head); // f8 удаление множества

