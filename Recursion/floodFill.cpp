#include<iostream>

#include<vector>
#include<string>
using namespace std;

void floodfill(vector < vector < int >> maze,int row, int col,string psf,vector < vector < bool >> visited) {
    int trow = maze.size();
    int tcol = maze[0].size();
    
    if( row<0 || col<0 || row==trow || col==tcol || visited[row][col]==true || maze[row][col] == 1){
        
        return;
    }
    if(row==trow-1 && col==tcol-1){
        cout<<psf<<endl;
        return;
    }
    visited[row][col]=true;
    floodfill(maze,row-1,col,psf+"t",visited);//t
    
    floodfill(maze,row,col-1,psf+"l",visited);//l
    
    floodfill(maze,row+1,col,psf+"d",visited);//d
    
    floodfill(maze,row,col+1,psf+"r",visited);//r
    
    visited[row][col] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> arr(n, vector < int > (m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    vector < vector < bool >> visited(n, vector < bool > (m));
    floodfill(arr,0,0,"",visited);
}