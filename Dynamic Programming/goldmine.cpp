#include<iostream>
using namespace std;
int main(){
    int n,m;
    
    cin>>n;
    cin>>m;
    int mine[n][m];
    int dp[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mine[i][j];
            dp[i][j]=0;
        }
    }
    
    for(int j=m-1;j>=0;j--){
        for(int i=0;i<n;i++){
            if(j==m-1){
                dp[i][j] = mine[i][j];
            }
            else if(i==0)
            {                
                dp[i][j] = mine[i][j] + max(dp[i][j+1],dp[i+1][j+1]); 
            }
            else if(i==n-1)
            {
                dp[i][j] = mine[i][j] + max(dp[i-1][j+1],dp[i][j+1]); 
            }
            else{
                dp[i][j] = mine[i][j] + max(max(dp[i-1][j+1],dp[i][j+1]),dp[i+1][j+1]); 
            }
        }
    }
    int g=0;
    int j=0;
    for(int i = 0;i<n;i++){
        g = max(g,dp[i][j]);
    }
    cout<<g;
    return 0;
}

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a, which represents a maze.
// 4. You are standing in top-left cell and are required to move to bottom-right cell.
// 5. You are allowed to move 1 cell right (h move) or 1 cell down (v move) in 1 motion.
// 6. Each cell has a value that will have to be paid to enter that cell (even for the top-left and bottom- 
//      right cell).
// 7. You are required to traverse through the matrix and print the cost of path which is least costly.