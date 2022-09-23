#include<iostream>
using namespace std;

int main(){

int N,i,j,key;
cin>>N;

int A[N];

for(i=0;i<N;i++){
    cin>>A[i];
}

for(i=1;i<N;i++)
 {
     key = A[i];
     j=i-1;
     while(j>=0 && A[j]>key)
     {
         A[j+1]=A[j];
         j--;
     }
  A[j+1]=key;
  //print here
  for(int i=0;i<N;i++){
    if(i!=N-1)
    {
        cout<<A[i]<<" ";
    }
    else
    {
        cout<<A[i];
    }
}
return 0;
 }
}





