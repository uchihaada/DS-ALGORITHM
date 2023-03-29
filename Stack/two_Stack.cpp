class Twostack{
	int *data;
	int top1;
	int top2;
	int size;
public:
	Twostack(int s){
		size=s;
		data=new int[s];
		top1=0;
		top2=s-1;
	}

	void push1(int num){
		if(top2-top1>=0){
			data[top1]=num;
			top1++;
		}
	}

	void push2(int num){
		if(top2-top1>=0){
			data[top2]=num;
			top2--;
		}
	}

	int pop1(){
		if(top1==0){
			return -1;
		}
		else{
			top1--;
			return data[top1];
		}
	}

	int pop2(){
		if(top2==size-1){
			return -1;
		}
		else{
			top2++;
			return data[top2];
		}
	}

};