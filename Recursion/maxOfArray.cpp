//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/max-of-an-array-official/ojquestion

#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    
    if(idx==n-1){
        return arr[idx];
    }
    
    int rMax = max(arr,idx+1,n);
    
    if(rMax>arr[idx]) return rMax;
    else return arr[idx];
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
