// https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/power-logarithmic-official/ojquestion
#include<iostream>
#include <cmath>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(powerLogarithmic(x,n/2),2);
    }
    else return x*pow(powerLogarithmic(x,n/2),2);
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}