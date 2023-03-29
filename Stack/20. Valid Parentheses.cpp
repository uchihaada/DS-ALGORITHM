link: https://leetcode.com/problems/valid-parentheses/submissions/924221630/

class Solution {
public:
    bool isValid(string s) {
         stack<char>st;

         for(auto it: s){
             if(it == '(' || it=='{' || it== '['){
                 st.push(it);
             }
             else{
                 if(!st.empty()){
                     char ch=st.top();
                     if((ch=='(' && it==')') || (ch=='{' && it=='}') || (ch=='[' && it==']')){
                         st.pop();
                     }
                     else{
                         return false;
                     }
                 }
                 else{
                     return false;
                 }
             }
         }
         if(!st.empty())return false;
         return true;
    }
}; 