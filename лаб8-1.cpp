#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int chislo,a,t=10000;
cout<<"Введите 5-значное число: ";
cin>>chislo;
while(chislo)
{

a = chislo/t;
chislo=chislo%t;
t= t/=10;
cout<<a<<endl;
}

return 0;
}
