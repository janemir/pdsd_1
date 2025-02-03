#include "SetLab1_2_Miroshnichenko.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {

    setlocale(LC_ALL, "ru");

    srand(time(0));

    char userInput;
    bool running = true;

    while (running) {
        int count = 6 + rand() % 4; // Мощность множества от 6 до 9

        Node* setA = createSet(count, 1, 100); // f5 создание множества
        cout << "Создано множество A - " << setToString(setA, ' ') << endl; // f7 вывод элементов 
        cout << "Мощность множества А - " << setPower(setA) << endl; // f6 мощность 
        setA = deleteSet(setA);  // f8 удаление множества
        cout << "Удаление множества А" << endl;
        cout << "Мощность множества А - " << setPower(setA) << endl;
        cout << "Вывод множества А - " << setToString(setA, ' ') << endl;
        //cout << "Для продолжения нажмите любую клавишу..." << endl;
        //cin.get();
        cout << "Хотите создать новое множество? (y/n): ";
        cin >> userInput;

        if (userInput != 'y' && userInput != 'Y') {
            running = false; 
        }
        else {
            cout << endl; 
        }
    }

    cout << "Программа завершена" << endl;
    return 0;
}