

// link : https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count=1;
        helper(s,sizeOfStack,count);
    }
    void helper(stack<int>&s, int size,int count){
        if(size/2+1==count){
            s.pop();
            return;
        }
        
        int top=s.top();
        s.pop();
        helper(s,size,count+1);
        s.push(top);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends