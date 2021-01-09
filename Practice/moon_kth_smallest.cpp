#include<iostream>
using namespace std;

int heap[100];      //array for storage
int count=-1;		//variable to count number of elements
int capacity=100;		//capacity



void print(){
	cout<<"Print heap condition\n";
	for(int i=0;i<=count;i++) cout<<heap[i]<<endl;
}
		
		//follow bottom-up approach to satisfy heap property
		void up_heapify(int index){
			if(index<=0) return;
			int par=(index-1)/2;
			
			if(heap[par]<heap[index]){
				swap(heap[par],heap[index]);
				up_heapify(par);
			}
			
		}
		
		//follow top-down approach to satisfy heap property
		void down_heapify(int index=0){
			
			if(index>=count) return;
			int left_child=2*index+1;
			int right_child=2*index+2;
			int max_ind=index;
			if(left_child<=count&&heap[left_child]>heap[index]) max_ind=left_child;
			if(right_child<=count&&heap[right_child]>heap[max_ind]) max_ind=right_child;
			
			swap(heap[max_ind],heap[index]);
			
			if(max_ind!=index) down_heapify(max_ind);
		}
		
		///member function to insert into heap
		void insert(int value){
			if(count==capacity-1){
				cout<<"Exception: Heap size full!";
			}
			count++;
			heap[count]=value;
			up_heapify(count);
		}
		
		//extract maximum
		int extract_max(){
			if(count<0){
				cout<<"Exception: Heap empty!";
				return -1;
			}
			int tmp=heap[0];
			heap[0]=heap[count];
			count--;
			down_heapify();
			return tmp;
		}
		
		//max element
		int max(){
			if(count<0){
				cout<<"Exception: Heap empty!";
				return -1;
			}
			else return heap[0];
		}
		
	int findkthsmallest(int k){
			if(count<k-1){
				cout<<"Exception: Less than k elements!";
				return -1;
			}
			//we can extract the count-k th element from max heap
			//copy the current heap into some array to maintain the state
			
			int temp[count+1],tmp=count;
			for(int i=0;i<=count;i++) temp[i]=heap[i];
			
			int k_1th=count-k+1;
			//cout<<k<<"k "<<endl;
			
			//make n-1 pops
			while(k_1th--) extract_max();
			
			//copy back from temp
			int kth = max();
			count=tmp;
			for(int i=0;i<=count;i++) heap[i]=temp[i];
			return kth;
		}		


main(){
	//insert
	insert(13);
	insert(10);
	insert(16);
	insert(18);
	insert(19);
	
	//print and check
	print();
	
	cout<<"4th smallest: ";
	cout<<findkthsmallest(4)<<endl;
	
	print();
}
