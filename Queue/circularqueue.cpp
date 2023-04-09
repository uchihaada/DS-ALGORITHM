

//  link:https://www.codingninjas.com/codestudio/problems/circular-queue_1170058?leftPanelTab=1

#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int f;
    int r;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=n;
        arr=new int[size];
        f=r=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((f==0 && r==size-1)||(r==(f-1)%(size-1))){
           
            return false;
        }
        else if(f==-1){
            f=r=0;
            
        }
        else if(r==size-1 && f!=0){
            r=0;
            
        }
        else{
            r++;
          
        }
        arr[r]=value;
        return true;
    
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(f==-1){
            return -1;
        }
        int ans=arr[f];
        arr[f]=-1;
        if(f==r){
            f=r=-1;
        }
        else if(f==size-1){
            f=0;
        }
        else{
            f++;
        }
        return ans;
        
    }
};