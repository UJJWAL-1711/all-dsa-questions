#include<iostream>
#include<string>

using namespace std;

void printTargetSumSubsets(vector<int> arr, int idx, string set, int sos, int tar){
    
    
    if(idx==arr.size())
    {
        if(sos==tar){
        cout<<set<<"."<<endl;
    }
        return;
    }
    // if(sos>tar) return;
    printTargetSumSubsets(arr,idx+1,set.append(to_string(arr[idx]))+", ",sos+arr[idx],tar);
    printTargetSumSubsets(arr,idx+1,set,sos,tar);
    
    
    
    
}

int main(){
    int n;cin>>n;
    vector<int> a;
    for(int i= 0;i<n;i++){
        int t; cin>>t; 
        a.push_back(t);
    } 
    int tar;cin>>tar;
    printTargetSumSubsets(a,0,"",0,tar);
    return 0;
}