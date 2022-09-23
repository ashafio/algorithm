//Contest 1
//Problem D -> BubbleSort
#include<iostream>
using namespace std;
int main(){
int n,swapcount = 0;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
for(int i=0;i<n-1;i++){
    for(int j=n-1;j>=i+1;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
                swapcount++;
}}}
for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<A[i];
        }
        else{
    cout<<A[i]<<" ";}}
    cout<<endl;
cout<<swapcount;}

