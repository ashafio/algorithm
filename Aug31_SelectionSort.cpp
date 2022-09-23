#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
        cout<<"Steps: "<<i+1<<endl;
    for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
            }

        for(int i=0;i<n;i++) //loop inside to see steps
        cout<<arr[i]<<" ";
  	    cout<<endl;

    }
}

/*
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
  	cout<<endl;
  	*/

}


/*
void selectionSort(arr[],n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}

selectionSort([23,12,45,3,34],5);
*/
