#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n+1;i++){
        dp[i]=0;
    }
    dp[0] = 1;
    for(int i= 1;i<n+1;i++){
        if(i==1){
            dp[i]=dp[i-1];
        }
        else if(i==2){
            dp[i] = dp[i-1]+dp[i-2];
        }
        else{
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];   
        }
    }
    cout<<dp[n];
    return 0;
}  