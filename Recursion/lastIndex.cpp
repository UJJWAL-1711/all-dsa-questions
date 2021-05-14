//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/last-index-official/ojquestion

#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx==n){
        return -1;
    }
    int rec = lastIndex(arr,idx+1,x,n);
    
    if(rec == -1 && arr[idx] == x){
        return idx;
    }
    
    if(rec == -1){
        return -1;
    }
    
    else return rec;
    // program comes to this case only when non -1 is returned i.e. a value is found hence we need to keep passing that index down through the recursion as it is. 
    
    //as soon as we hit the first value from back side we start to return non -1 hence it keeps on returning the last index 
}

int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}