// 0/1 Knapsack

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,w;
    cin>>n;

    int profit[n];
    int weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>profit[i];
        cin>>weight[i];
    }
    int V[n=1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int w=0;w<m+1;w++)
        {
            if(i==0||w==0){
                V[i][w]=0;
            }
            else if(weight[i]>w)
            {
                V[i][w]=V[i-1][w];
            }
            else{
                V[i][w]=max(V[i-1][w],V[i-1][w-weight[i]]+profit[i]);
            }
            for(int k=0;k<n+1;k++)
            {
                for(j=0;j<m+1;j++)
                {

                }
            }
        }
    }
    cout<<V[n][m]<<endl;
}
