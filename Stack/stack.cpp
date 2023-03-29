#include <iostream>


using namespace std;

class stack{
public:
	int *arr;
	int idx;
	int size;

	stack (int size){
		this->size=size;
		arr = new int [size];
		idx =0;
	}
	void push(int ele){
		if(idx==size){
			cout<<"Stack is full"<<endl;
			return;
		}
		arr[idx]=ele;
		idx++;
	}
    	

	int pop(){
		if(!isEmpty()){
			idx--;
			return arr[idx];
		}
		else{
			cout<<"Stack underflow"<<endl;
			return -1;
		}
	}

	int top(){
		if(isEmpty()){
			cout<<"stack is empty"<<endl;
			return -1;
		}
		return arr[idx];
	}
	
	
	bool isEmpty(){
		if(idx==0){
			return true;
		}
		else{
			return false;
		}
	}
};

void init_code(){


#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 

}

int main(int argc, char const *argv[])
{
	init_code();
	stack st(5);
	st.push(2);
	st.push(3);
	st.push(6);
	cout<<st.top();
	return 0;
}