
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
    int X,Y,A,B,K,C,D;
    cin>> X >> Y >> A >> B >> K;
    C=(A*K)+X;
    D=(B*K)+Y;
    // cout<<X<<' '<<Y<<' '<<A<<' '<<B<<' '<<M;
    if(C>D)
    cout<<"DIESEL"<<endl;
    else if(D>C)
    cout<<"PETROL"<<endl;
    else
    cout<<"SAME PRICE"<<endl;
    T=T-1;
    }

}