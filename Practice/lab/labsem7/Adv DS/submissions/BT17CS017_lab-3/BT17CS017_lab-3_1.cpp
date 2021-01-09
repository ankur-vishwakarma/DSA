#include<bits/stdc++.h>
using namespace std;
class max_heap{
	int * heap;    //array for storage
	int count;		//variable to count number of elements
	int size;		//capacity
	
	public:
		//default constructor
		max_heap(){
			heap=new int[100];
			size=100;
			count=-1;
		}
		
		//parameterized constructor
		max_heap(int n){
			heap=new int[n];
			size=n;
			count=-1;
		}
		
		//follow bottom-up approach to satisfy heap property
		void percolate_up(int curr){
			if(curr<=0) return;
			int parent=(curr-1)/2;
			if(heap[parent]<heap[curr]){
				swap(heap[parent],heap[curr]);
				percolate_up(parent);
			}
		}
		
		//follow top-down approach to satisfy heap property
		void percolate_down(int curr=0){
			if(curr>=count) return;
			int left_child=2*curr+1;
			int right_child=2*curr+2;
			int mx=curr;
			if(left_child<=count&&heap[left_child]>heap[curr]) mx=left_child;
			if(right_child<=count&&heap[right_child]>heap[mx]) mx=right_child;
			
			swap(heap[mx],heap[curr]);
			
			if(mx!=curr) percolate_down(mx);
		}
		
		///member function to insert into heap
		void insert(int val){
			if(count==size-1){
				cout<<"Exception: Heap size full!";
			}
			count++;
			heap[count]=val;
			percolate_up(count);
		}
		
		//extract maximum
		int delete_max(){
			if(count<0){
				cout<<"Exception: Heap empty!";
				return -1;
			}
			int tmp=heap[0];
			heap[0]=heap[count];
			count--;
			percolate_down();
			return tmp;
		}
		
		//max element
		int front(){
			if(count<0){
				cout<<"Exception: Heap empty!";
				return -1;
			}
			else return heap[0];
		}
		
		void print(){
			cout<<"Heap current state\n";
			for(int i=0;i<=count;i++) cout<<heap[i]<<endl;
		}
};

main(){
	//construct heap
	max_heap myheap;
	myheap.insert(31);
	myheap.insert(10);
	myheap.insert(16);
	myheap.insert(14);
	myheap.insert(12);
	myheap.insert(9);
	myheap.insert(8);
	myheap.insert(3);
	myheap.insert(1);
	myheap.insert(5);
	myheap.insert(7);
	
	//print and check
	myheap.print();
	
	myheap.insert(19);
	
	
	myheap.print();
	
	cout<<"delete_max:"<<myheap.delete_max()<<endl<<endl;
	
	myheap.print();
	
	cout<<"front:"<<myheap.front()<<endl<<endl;
}
