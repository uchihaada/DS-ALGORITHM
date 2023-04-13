#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
int data;
struct Node* left;
struct Node * right;

public:
Node(int val){
    this->data=val;
    this->right=NULL;
    this->left=NULL;
}
};

int main(){
    
Node* root = new Node(2);
root->left = new node(3);
root->right= new Node(4);

root->left->left=new Node(7);


    return 0;
}