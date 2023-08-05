#include<bits/stdc++.h>
using namespace std;
//recurson
//memoization

int dfs(int n,int k,int arr[],vector<int>&dp){
    int ans=INT_MAX;
    if(dp[n]!=-1)return dp[n];
    if(n==0)return dp[n]= 0;
     for(int i=1;i<=k;i++){
        if(n>=i){
            ans=min(ans,dfs(n-i,k,arr,dp)+abs(arr[n]-arr[n-i]));
        }
     }
     return dp[n]=ans;
}
int main(){
    int n=2;
    int k=100;
    vector<int>dp(n+1,-1);
    int arr[n]={10 ,10};
    cout<<dfs(n-1,k,arr,dp);
}
// 3 1
// 10 20 10

// 2 100
// 10 10