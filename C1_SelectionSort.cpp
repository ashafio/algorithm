#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,mini,temp;
    int swapcount=0;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<N-1;i++)
    {
        int mini=i;

        for(j=i+1;j<N;j++)
        {
            if(A[j]<A[mini])
            {
                mini=j;
            }
        }
        if(i!=mini){
            swapcount+=1;
        }
        swap(A[i],A[mini]);
    }
    for(i=0;i<N;i++)
    {
        if(i!=N-1){
        cout<<A[i]<<" ";
        }
    else{
        cout<<A[i];
    }
}
cout<<"\n";
cout<<swapcount<<"\n";
return 0;
}
