
// basically we check after popping and pushing according to the opening and closing brackets... is something is left upon the stack then it means something was not in order hence return false...else true

// basically we check after popping and pushing according to the opening and closing brackets... is something is left upon the stack then it means something was not in order hence return false...else true
#include<stack>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<char> st;
    string str;
    getline(cin,str);
	cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        char cChar = str.at(i);
		if(cChar=='(' || cChar=='[' ||cChar=='{') st.push(cChar);

        if(cChar==')'){
			if(st.size()==0){
				cout<<"false";
				return 0;
			}
			if(st.top()!='('){
				cout<<"false";
				return 0;
			}
			else{
				st.pop();
			}
        }

		if(cChar==']'){
			if(st.size()==0){
				cout<<"false";
				return 0;
			}
			if(st.top()!='['){
				cout<<"false";
				return 0;
			}
			else{
				st.pop();
			}
        }

		if(cChar=='}'){
			if(st.size()==0){
				cout<<"false";
				return 0;
			}
			if(st.top()!='{'){
				cout<<"false";
				return 0;
			}
			else{
				st.pop();
			}
        }
    }

    if(st.empty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

 return 0;   
}