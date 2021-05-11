// https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-increasing-decreasing-official/ojquestion
#include<iostream>
using namespace std;

void printIncDec(int n){
    // write your code here
    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}
