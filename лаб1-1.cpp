#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int M=10;
    int a[M];
    for (int i=0; i<M;i++)
    {
        cout<<"Vvedite element ["<<i<<"]:";
        cin>>a[i];
    }
    for (int i=0; i<M; i++)
    {
        if (a[i]%2==0)
        a[i]=0;
        cout<<' '<<a[i]<<' ';
    }
}
