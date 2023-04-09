#include <bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);

    cout<<q.front();
    q.push(5);
    cout<< q.front();
    q.pop();
    cout<<q.front();
    return 0;
}