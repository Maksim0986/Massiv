// Массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
  
#include <iostream>
#include <conio.h>
#include <locale>

using namespace std;


int main()
{

    while ("") {

        while ("") {
            setlocale(LC_ALL, "rus");

            cout << "1.Запустить программу" << endl;
            cout << "2.Выйти из программы" << endl;

            int m = 0;


            cin >> m;

            switch (m) {
            case 1:

                goto sdf;
                _getch();
                break;

            case 2:

                cout << "Выход из программы" << endl;
                _getch();
                return 0;
                break;

            default:

                cout << "Вы ввели неверный пункт меню, введите еще раз" << endl;
                _getch();
                break;

            }
        }




       sdf:
        srand(time(NULL));

        cout << "Введите размер массива" << endl;
        int SIZE;
        cin >> SIZE;
        while ("") {
            if (SIZE <= 0) {
                cout << "Неверно введен размер массива, размер массива должен быть больше 0, введите еще раз" << endl;
                cin >> SIZE;
            }
            else {
                goto onn;
            }
        }
        
        onn:
        cout << " " << endl;
        
        int* arr = new int[SIZE];

        cout << "Введите размерность массива" << endl;
        int d;
        cin >> d;
        while ("") {

            if (d <= 0) {
                cout << "Неверно введена размерность массива, размерность должна быть больше 0, введите еще раз" << endl;
                cin >> d;
            }
            else {
                goto black;
            }

        }

        black:
        cout << " " << endl;
        
        cout << "Массив: " << endl;
        

        for (int i = 0; i < SIZE; i++) {
            arr[i] = rand() % d;

        } 

        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << endl;
        }

        int i, k, origVal = 0, newVal = 0;


        for (i = 0; i < SIZE; i++)
        {
            origVal = arr[i];

            for (k = i + 1; k < SIZE; k++)
            {

                if (origVal == arr[k])
                {
                    newVal = 1;
                    break;
                }

            }

            if (newVal) { break; }

        }

        if (newVal == 1)
        {
            cout << "Массив не содержит полностью различных значений" << endl;
        }
        else
        {
            cout << "Массив содержит полностью различные значения " << endl;
        }

        system("PAUSE");
        delete[] arr;

    }

}



