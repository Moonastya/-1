#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   int n, count = 0, j = 0;
   int *mass, *mass1;
   cout<<"Размер массива: ";
   cin>>n;
   mass = new int[n];
   for (int i=0; i<n; i++)
   {
       cin>> mass[i];
       if (mass[i]>=0)
       {
           count++;
       }
    }
    mass1 = new int[count];
    cout<<endl<<"Положительные элементы: ";
    for (int i=0; i<n; i++)
    {
        if (mass[i] >= 0)
        {
            mass1[j] = mass[i];
            j++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout<<mass1[i]<<" ";
    }
    
    return 0;
}
