//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-increasing-official/ojquestion
#include<iostream>
using namespace std;

void printIncreasing(int n){
    // write your code here
    printIncreasing(n-1);
    cout<<n<<endl;
    //print after call as if we print while going down we will print it this way f(0) => return , f(1) post this we print 1 ....then after each function returns we print it  therefore the increasing order....
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
