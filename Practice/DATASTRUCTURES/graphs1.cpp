#include<iostream>
using namespace std;
struct node{
	int data;
	node * next;
};
main(){
	int n;
	cout<<"enter no of nodes: ";
	cin>>n;
	int s[n];
	node * t[n];
	for(int i=0;i<n;i++){
		cout<<"enter "<<i+1<<"th node: ";
		cin>>s[i];
		t[i]=NULL;
		int nr;
		cout<<"enter neighbours of "<<i+1<<"th node and press 0 to exit: ";
		cin>>nr;
		while(nr!=0){
			node * ptr=new node;
			ptr->data=nr;
			ptr->next=t[i];
			t[i]=ptr;
			cout<<"enter next: ";
			cin>>nr;
		}
	}
	for(int i=0;i<n;i++){
		cout<<"neigbours of "<<s[i]<<" node: ";
		node * ptr=t[i];
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<"\n";
	}
}
