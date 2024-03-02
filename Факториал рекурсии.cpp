#include <iostream>
using namespace std;
int recursion(int num)
{
    int a = num;
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    return num * recursion(num - 1);
}
int main()
{
    setlocale(0, "");
    int a;
    cout << "Введите факториал: ";
    cin >> a;
    cout << "Факториал = " << recursion(a) << "." << endl;
    int _;
    cin >> _;
    return 0;
}