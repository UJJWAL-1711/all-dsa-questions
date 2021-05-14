//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/first-index-official/ojquestion

#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(arr[idx]==n-1 && arr[idx]!=x){
        return -1;
    }
    if(arr[idx]==x){
        return idx;
    }
    
    int rec = firstIndex(arr,idx+1,x,n);
    
    if(rec != -1){
        return rec;
    }
    
    else return -1;
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}