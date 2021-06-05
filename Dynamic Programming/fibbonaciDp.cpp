//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/fibonacci-dp-official/ojquestion
#include <iostream>
using namespace std;

int fib(int n, int dp[]){
    // write your code here
    
    if(n==1 || n==0){
        return n;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    int f1 = fib(n-1,dp);
    int f2 = fib(n-2,dp);
    int rres = f1 + f2;
    dp[n] = rres;
    return rres;
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=0;
    }
    cout<<fib(n,arr)<<endl;
    return 0;
}  