//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/target-sum-subsets-dp-official/ojquestion
#include<iostream>
using namespace std;
int main(){
    int n,target;
    
    cin>>n;
    int elements[n];
    for(int i = 0;i<n;i++){
        cin>>elements[i];
    }
        cin>>target;
    bool dp[n+1][target+1];

    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(i==0 && j==0){
                dp[i][j]=true;
            }
            else if(i==0){
                dp[i][j]=false;
            }
            else if(j==0){
                dp[i][j] = true;
            }
            else if(dp[i-1][j]){
                    dp[i][j] = true;
            }
            else {
                int val = elements[i-1];
                if( j < val){
                dp[i][j]= false;
                }
                else {
                    dp[i][j]=dp[i-1][j-val];
                }
            }
        }
    }
    dp[n][target]?cout<<"true":cout<<"false";cout<<endl;
    
    
    return 0;
}