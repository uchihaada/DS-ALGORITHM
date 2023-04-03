

// link: https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166



#include <bits/stdc++.h> 
void helper(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int top=myStack.top();
    myStack.pop();
    helper(myStack,x);
    myStack.push(top);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.

    helper(myStack,x);
    return myStack;
}
