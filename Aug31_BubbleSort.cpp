
#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
char arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i++){
        cout<<"Steps: "<<i+1<<endl;
    for(int j=0;j<n-i-1;j++){
            if(int(arr[j])>int(arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
            for(int i=0;i<n;i++) //loop inside to see steps
        cout<<arr[i]<<" ";
  	    cout<<endl;
    }
}


}

