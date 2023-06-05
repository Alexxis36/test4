#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string s = "Это 1строка23";
    int col_chisla = 0;
    for (int i = 0; i < size(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9') {
            col_chisla++;
        }
    }
    cout << "Количество чисел в строке = " << col_chisla;
}
