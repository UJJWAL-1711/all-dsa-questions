//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-zig-zag-official/ojquestion
#include<iostream>
using namespace std;


void pzz(int n){
    // write your code here
    if(n==0){
        return;
    }
    cout<<n<<" ";
    pzz(n-1);
    cout<<n<<" ";
    pzz(n-1);
    cout<<n<<" ";
}



int main(){
    int n; cin>>n;
    pzz(n);
}
