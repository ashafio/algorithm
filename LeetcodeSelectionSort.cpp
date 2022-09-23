#include<iostream>
using namespace std;
int main(){
int n,i,j,temp;
cin>>n;
int nums[n];
for(i=0;i<n;i++){
    cin>>nums[i];
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
            }
    }
}
for(i=0;i<n;i++)
        cout<<nums[i]<<" ";
  	    cout<<endl;
}
