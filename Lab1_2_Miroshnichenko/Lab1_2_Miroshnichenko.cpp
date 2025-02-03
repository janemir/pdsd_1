#include "SetLab1_2_Miroshnichenko.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {

    setlocale(LC_ALL, "ru");

    srand(time(0));
    int count = 6 + rand() % 4; // Мощность множества от 6 до 9

    Node* setA = createSet(count, 1, 100); // f5 создание множества
    cout << "Создано множество A - " << setToString(setA, ' ') << endl; // f7 вывод элементов 
    cout << "Мощность множества А - " << setPower(setA) << endl; // f6 мощность 
    setA = deleteSet(setA);  // f8 удаление множества
    cout << "Удаление множества А" << endl;
    cout << "Мощность множества А - " << setPower(setA) << endl;
    cout << "Вывод множества А - " << setToString(setA, ' ') << endl;
    cout << "Для продолжения нажмите любую клавишу..." << endl;
    cin.get();

    return 0;
}