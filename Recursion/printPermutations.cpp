#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        string ch(str);
        ch.erase(ch.begin() + i);
        printPermutations(ch,asf+str.at(i));
    }
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}