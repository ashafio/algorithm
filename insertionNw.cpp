#include<iostream>
using namespace std;
int main()
{
    int N,i,j,k,key;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    for(i=1;i<N;i++)
    {
        key=A[i];
        for(k=0;k<N;k++)
        {
            if(k!=N-1)
                cout<<A[k]<<" ";
                else
                cout<<A[k];
        }
        for(j=i-1;j>=0 && A[j]>key;j--){
            A[j+1]=A[j];
        }
        A[j+1]=key;
        cout<<"\n";
    }
    for(k=0;k<N;k++){
        if(k!=N-1)
            cout<<A[k]<<" ";
        else
            cout<<A[k];
    }
    cout<<"\n";
    return 0;
}
