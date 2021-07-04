#include <iostream>

using namespace std;

int pred(int vverh, int niz, double chislo)
    {
        if(chislo == int(chislo))
        {
        if(chislo>=niz && chislo<=vverh)
        {
            cout<<"Число входит в диапозон"<<endl;
            return chislo;
        }
        else
        {
            cout<<"Число не входит в диапозон"<<endl;
            return -1;
        }
    }
    else
{
    cout<<"Число не целочисленное"<<endl;
    return 0;
}
    }
void min()
    {
        int niz=-1;
        int vverh=-1;
        double chislo=-1;
        bool b = true;
        while(b)
        {
            cout << "1. Ввод верхнего предела" << endl;
            cout << "2. Ввод нижнего предела" << endl;
            cout << "3. Ввод числа" << endl;
            cout <<"4. Выход"<< endl;

            int vib;
            do {
            cin >> vib;
            } while (vib < 1 || vib > 4);
            
            switch (vib) {
            case 1:
            cout << "Введите верхний предел: "; 
            cin >> vverh;
            break;
            case 2:
            cout << "Введите нижний предел: "; 
            cin >> niz;
            break;
            case 3:
            cout << "Введите число: "; 
            cin >> chislo;
            break;
            case 4: b = false; break;
            }

    if(niz!=-1 && vverh!=-1 && chislo!=-1 && b!=false)
    {
        int result=pred(niz,vverh,chislo);
        if(result==0) b=false;
        if(result==-1) continue;

    }

        }
    }
int main()
{
min();

return 0;
}
