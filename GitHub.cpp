#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "");
    while (1) {
        int a;
        cout << "Введите только положительное число: ";
        cin >> a;
        if (a >= 0) {
            continue;
        }
        else
        {
            cout << "Вы написали отрицательное число: ";
        }
        cout << a << endl;
        break;
    }
}