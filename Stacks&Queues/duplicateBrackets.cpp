//https://www.pepcoding.com/resources/online-java-foundation/stacks-and-queues/duplicate-brackets-official/ojquestion
// basic principle being that while pushing and popping if there are brackets where there are no contents we return true or in the end we return false...
#include<stack>
#include<bits/stdc++.h>

using namespace std;

void checkBrackets(string str){
    // cout<<str<<endl;
	stack<char> st;
	for(int i=0;i<str.length();i++){
		char cChar = str.at(i);
// 		cout<<cChar<<" ";
		if(cChar == ')'){

			if(st.top() =='('){ 
			    cout<<"true"; 
			    return;
			}
			
			while(st.top() !='('){
				st.pop();
			}
			st.pop();
		}

		else st.push(cChar);
	}
	cout<<"false";
}

int main(){
    string st;
    
	getline(cin,st);
    // cout<<st<<"   this\n";
    checkBrackets(st);
    return 0;
}