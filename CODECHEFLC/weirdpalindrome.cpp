

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T>0)
    {
        int N;
        cout<<"Enter the size:"<<endl;
        cin>>N;
        int numbers[N];
        cout<<"Enter the numbers:"<<endl;
        for(int i=0; i<N; ++i){
            cin>>numbers[i];
        }
        cout<<"The numbers are:"<<endl;
        for(int n=0; n<N; ++n){
            cout<<numbers[n]<<" ";
        }
        T=T-1;
    }
}
