

// link : https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473


#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;

    for(int i=0;i<s.size();i++){

            char ch=s[i];

            if(ch=='(' || ch=='*' || ch=='+' || ch=='-' || ch=='/'){
                st.push(ch);
            }
            else if (ch==')'){
                bool r=true;
                while(st.top()!='('){
                    char top =st.top();
                    if(top=='(' || top=='*' || top=='+' || top=='-' || top=='/'){
                        r=false;
                        st.pop();
                    }
                }
                if(r==true)return true;
                st.pop();
            }
    }
            return false;
}
