#include "SetLab1_2_Miroshnichenko.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream> // Для использования stringstream

using namespace std; 

// f1 создание пустого множества

Node* createEmptySet() {
    return nullptr;
}

// f2 пустое множество?

bool isEmptySet(Node* head) {
    return head == nullptr;
}

// f3 проверка принадлежности элемента множеству

bool isElementInSet(Node* head, int value) {
    Node* current = head; // начало с головы списка
    while (current != nullptr) { // пока не дойдем до конца списка
        if (current->data == value) { // если нашли совпадающее значение
            return true; // элемент принадлежит множеству
        }
        current = current->next; // к след элементу
    }
    return false; // если не нашли, элемент не принадлежит множеству
}

// f4 добавление нового элемента в множество

Node* addElementToSet(Node* head, int value) {
    if (!isElementInSet(head, value)) { // элемент уже есть в множестве?
        Node* newNode = new Node; // созд новый узел
        newNode->data = value; // присв ему значение
        newNode->next = head; // встав в начало списка
        head = newNode; // обнов голова списка
    }
    return head; // возвр обновленного множества
}

// f5 создание множества

Node* createSet(int count, int min, int max) {
    Node* head = createEmptySet();
    srand(time(0)); // иниц генератора случайных чисел 
    for (int i = 0; i < count; ++i) {
        int value = min + rand() % (max - min + 1); // генерация случайного значения в заданном диапазоне
        head = addElementToSet(head, value);
    }
    return head; // возвр множества
}

// f6 мощность множества

int setPower(Node* head) {
    int count = 0; // счетчик элементов множества
    Node* current = head;
    while (current != nullptr) {
        ++count;
        current = current->next; // к след элементу
    }
    return count; // мощности множества
}

// f7 вывод элементов множества

string setToString(Node* head, char delimiter) {
    stringstream ss; // созд строковый поток
    Node* current = head; // начало с головы списка
    while (current != nullptr) {
        ss << current->data; // запись значения элемента в поток
        if (current->next != nullptr) { // если это не последний элемент
            ss << delimiter; // добавление разделителя
        }
        current = current->next; // переход к след элементу
    }
    return ss.str(); // строку с элементами множества
}

// f8 удаление множества

Node* deleteSet(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current; // сохр текущий узел
        current = current->next; // к следующему узлу
        delete temp;
    }
    return nullptr;
}
