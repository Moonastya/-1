#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int M=5;
    int a[M];
    int sr=0, sum = 0;
    for (int i=0; i<M;i++)
    {
        cout<<"Введите элемент ["<<i<<"]:";
        cin>>a[i];
    }
    for (int i=0; i<M; i++)
   {
       sr++;
       sum+=a[i];
       
   }
   cout<<"Среднее арифметическое: "<<sum/sr<<endl;
}
