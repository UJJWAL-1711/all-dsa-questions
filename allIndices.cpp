#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void findIndices(int *input, int size, int x,vector<int> &output, int &k, int currIndex){
	if(currIndex==size){
		return;
	}
	if(input[currIndex]==x){
		// cout<<"  hellno  "<<endl;
		output.push_back(currIndex);
		k++;
	}
	findIndices(input,size,x,output,k,currIndex+1);
}

// int allIndices(int input[], int size, int x, vector<int> &output){
// 	int k = 0;
// 	findIndices(input,size,x,output,k,0);
// 	cout<<k<<endl;
// 	return k;
// }

int main(){
	// cout<<"\n none";
	int size ;cin>>size;
	int input[size];
	
	for(int i =0;i<size;i++){
	    cin>>input[i];
	}
	int x;cin>>x;
	int k=0;
	vector<int> output;
	
	findIndices(input,size,x,output,k,0);

	// cout<<output.size();
	
	if(output.size()==0){
	    
	}

	else{vector<int>::iterator i;
	for(i = output.begin();i!=output.end();i++){
		// cout<<"hell";
		cout<<*i<<endl;
	}}
	// cout<<"\n none";cout<<"\n none";
	return 0;
}