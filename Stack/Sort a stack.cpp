

// link:https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275




#include <bits/stdc++.h> 
void sortedInsert(stack<int>&stack,int ele){
	if(stack.empty() || stack.top()<=ele){
		stack.push(ele);
		return;
	}

	int top=stack.top();
	stack.pop();
	sortedInsert(stack,ele);
	stack.push(top);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}

	int top=stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack,top);
}
