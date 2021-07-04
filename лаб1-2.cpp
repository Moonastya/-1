#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()                              
{
    string s;                                        
    int n, m;                                              
    do {
        cout << "Введите символ: ";
            cin >> n;
            if(!cin) 
        {
       cout << "Ошибка, введите символ: \n";
       cin.clear();
       while (cin.get() != '\n');
            }
                else 
                break;
    } while (true);
    cout << "Введите строчку: " << endl;
    do {
        cin >> s;
        if (s.size() < 1) {                             
            cout << "Ошибка, введите строчку: " << endl;
            s.clear();
        }
        else
            break;
    } while (true);
    m = s.find(n);                                      
    if (m != -1) cout << "Введенный символ не найден" << endl;
    else {cout << "Введенный символ находится на: " << m+3 << " позиции" << endl;}
    }
