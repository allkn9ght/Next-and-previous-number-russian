#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int chislo = 0;

    cout << "Введите число: \n";
    cin >> chislo;

    int zanim = chislo - 1;
    int poslenego = chislo + 1;

    cout << "Следующее за числом " << chislo << " - " << poslenego << ".\n";
    cout << "Для числа " << chislo << " предыдущее число - " << zanim << ".\n";

    cout << "Для выхода нажмите <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
