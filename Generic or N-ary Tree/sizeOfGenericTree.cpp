// https://www.pepcoding.com/resources/online-java-foundation/generic-tree/size-generic-tree-official/ojquestion#!
#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i < b; ++i)

class Node{
public:

    int data;
    vector<Node*> children;

    Node() {}

    Node(int _data) {
        data = _data;
    }

    Node(int _data, vector<Node*> _children) {
        data = _data;
        children = _children;
    }

};

// display the tree via recursion
void display(Node* node) {
    if(node == NULL){
        return;
    }

    string str = to_string(node->data) + " -> ";

    for(Node* child : node->children){
        str += to_string(child->data) + ", ";
    }
    str += ".";

    cout << str << endl;

    for (Node* child : node->children) {
        display(child);
    }
}

// constructs the tree via help of stack
Node* construct(int arr[], int n) {
    Node* root = NULL;
    stack<Node*> st;

    for(int i = 0; i < n; i++){
        if(arr[i] == -1){
            st.pop();
        }
        else{
            Node* temp = new Node(arr[i]); // acc to constructor1

            if(!st.empty()){
                st.top()->children.push_back(temp);
            }
            else{
                root = temp;
            }

            st.push(temp);
        }
    }

    return root;
}

// return total number of nodes in the tree
int size(Node* node) {
    int s = 0;
    for(Node* child : node->children){
        int si = size(child);
        s+=si;
    }
    s++;
    
    return s;
}

int main()
{
    int n; 
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* root = construct(arr, n);
    cout << size(root);

    return 0;
}