#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *next;
	//constructor
	node(int d){
		data=d;
		next=NULL;
	}
};
class Stack{
public:
	node *head;
	int len;
	//constructor
	Stack(){
		head=NULL;
		len=0;
	}
	void push(int d){
		node *n=new node(d);
		n->next=head;
		head=n;
		len++;
	}
	void pop(){
		if(head==NULL){
			return ;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;
		}
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			len--;
		}
	}
		bool is_empty(){
			return head==NULL;
		}
		int size(){
			return len;
		}
		int top(){
			return head->data;
		}
};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	while(!s.is_empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}