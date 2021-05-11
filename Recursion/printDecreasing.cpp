// https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-decreasing-official/ojquestion

#include <iostream>
using namespace std;

void printDecreasing(int n){
    // write your code here
    if(n==0){
        return;
    }
    cout<<n<<endl;//placed before the call as while giving a new call we first print that number then it further calls with a smaller number hence the decreasing
    printDecreasing(n-1);
    //not printed post call as then it would print it while coming down the stack...
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}
