equalcoins.cpp

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    long long T;
    cin>>T;
    while (T>0)
    {
        long long X,Y;
        cin >> X >> Y;
        if(X==0 && Y==0)
            cout<<"NO"<<endl;
        else if(X==0 && Y%2==0)
            cout<<"YES"<<endl;
        else if(Y==0 && X%2==0)
            cout<<"YES"<<endl;
        else if (X!=0 && Y!=0)
            if (X%2==0 && Y%2==1)
                cout<<"YES"<<endl;
            else if(X%2==0 && Y%2==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        else
            cout <<"NO"<<endl;
        T=T-1;
    }
    
}