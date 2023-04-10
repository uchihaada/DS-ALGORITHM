

// link:https://leetcode.com/problems/first-unique-character-in-a-string/description/


class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        queue<char>q;

       for(int i=0;i<s.size();i++){
           if( !mp[s[i]]){
               mp[s[i]]=i+1;
               q.push(s[i]);
           }
           else{
               mp[s[i]]=-1;
           }
       }

       while(!q.empty()){
           if(mp[q.front()]!=-1)return mp[q.front()]-1;
           q.pop();
       }
       return -1;
    }
};