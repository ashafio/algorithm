//Fibonacci
//Bottom up
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int F[n+1];
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=2;i++){
        F[i]=F[i-1]+F[i-2];
    }
    cout<<F[n]<<endl;
}
