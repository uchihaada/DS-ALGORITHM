

// link : https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insertAtend(stack<int>&st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int top=st.top();
        st.pop();
        insertAtend(st,x);
        st.push(top);
    }
    void helper(stack<int>&st){
        if(st.empty()){
            return;
        }
        int top=st.top();
        st.pop();
        helper(st);
        insertAtend(st,top);
    }
    void Reverse(stack<int> &st){
        helper(st);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends