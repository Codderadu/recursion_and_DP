#include<bits/stdc++.h>
using namespace std;
int dfs(int n,int arr[]){
    if(n==0)return 0;
    //jump of 1st step
    int left=dfs(n-1,arr)+abs(arr[n]-arr[n-1]);
    //jump for 2nd step
    int right=INT_MAX;
    if(n>1)right=dfs(n-2,arr)+abs(arr[n]-arr[n-2]);
    return min(left,right);
}
int main(){
   int arr[4]={10,20,30,10};
   int n=4;
   cout<< dfs(n-1,arr);
   return 0;
}