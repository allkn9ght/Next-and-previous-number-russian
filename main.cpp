#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int chislo = 0;

    cout << "������� �����: \n";
    cin >> chislo;

    int zanim = chislo - 1;
    int poslenego = chislo + 1;

    cout << "��������� �� ������ " << chislo << " - " << poslenego << ".\n";
    cout << "��� ����� " << chislo << " ���������� ����� - " << zanim << ".\n";

    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
