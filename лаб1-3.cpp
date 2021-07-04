#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int M=3, N=3;
    int a[M][N];
    int Opr = 0;
    for (int i=0; i<M;i++){
        for(int j=0;j<N; j++){
        cout<<"Vvedite element ["<<i<<"]["<<j<<"]:";
        cin>>a[i][j];
        }
    }
    for (int i=0;i<M; i++){
        for (int j=0; j<N; j++){
            cout<<setw(6)<<a[i][j];
        }
        cout<<"\n";
    }
    Opr = (a[0][0]*a[1][1]*a[2][2]) + (a[0][1]*a[1][2]*a[2][0]) + (a[0][2]*a[1][0]*a[2][1]) - (a[0][2]*a[1][1]*a[2][0]) - (a[0][1]*a[1][0]*a[2][2]) - (a[0][0]*a[1][2]*a[2][1]);
    cout<<"Opredelitel = "<<Opr<<endl;
}

