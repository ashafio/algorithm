
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
//Take input
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++)
 {
     int x = num[i];
     i=i-1;
     while(j>=0 && num[j]>x)
     {
         num[j+1]=num[j];
         j--;
     }
  num[j+1]=x;
 }
     for(j=i+1;j>0;j--)
     {
         if(a[j]<=a[j-1])
         {
             //break;
                      swap(a[j],a[j-1]); //swap
         }
         //swap(a[j],a[j-1]); //swap
     }
 }
 //Print array output
for(i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }



