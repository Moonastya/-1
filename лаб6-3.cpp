#include <iostream>


using namespace std;
int main(){
    
    int a[5],i,j,n;
    cout<<"Заполните массив"<<endl;
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
    }
    for(i=1, j;i<5;i++)
    {
    n=a[i];
    for(j=i-1;j>=0&&a[j]>n;j--)
    {
    a[j+1]=a[j];
    }
    a[j+1]=n;
    }
    for(i=0;i<5;i++)
    {
    cout<<a[i]<<" ";
    }
}
