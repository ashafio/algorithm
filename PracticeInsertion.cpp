#include<bits/stdc++.h>
using namespace std;

int main(){

int n,i,j;
cin>>n;
int arr[n];
for(i = 0; i<n; i++){
    cin>>arr[i];
}

for(i=0;i<n-1;i++){
    for(j=i+1;j>0;j--){
        if(arr[j]<=arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
    }
}

for(i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
