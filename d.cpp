#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2;
    char sim;
    setlocale(0, "");

    cout << "[+] Программа: Фигуры" << endl;
    cout << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "Выберите фигуру (От 1 до 2): ";
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        cout << "[+] Программа: Фигуры, линия" << endl;
        cout << endl;
        cout << "Размер фигуры: ";
        cin >> num2;
        system("cls");
        cout << "[+] Программа: Фигуры" << endl;
        cout << endl;
        cout << "[1] Горизонтальная" << endl;
        cout << "[2] Вертикальная" << endl;
        cout << "Выберите тип линии (От 1 до 2): ";
        cin >> num;
        system("cls");

        switch (num)
        {
        case 1:
            cout << "Выберите символ: ";
            cin >> sim;
            system("cls");
            for (int i = 0; i < num2; i++)
            {
                cout << sim;
            }
            break;
        case 2:
            cout << "Выберите символ: ";
            cin >> sim;
            system("cls");
            for (int i = 0; i < num2; i++)
            {
                cout << endl << sim;
            }
            break;
        default:
            cout << "Вы ввели некоректные значени.";
            break;

        }

    }
    return  0;
}

