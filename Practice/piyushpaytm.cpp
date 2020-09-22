#include<bits/stdc++.h>
using namespace std;
#define MIN(x, y) ( (x < y) ? x : y)

int abs(int x) {
  return ((x < 0) ? (-1*x) : x);
}

int divide(vector<int> a, int i, int X, int Y) {
  if(i >= a.size()) {
    return abs(X-Y);
  } else {
    int x1 = divide(a, i+1, X+a[i], Y);
    int x2 = divide(a, i+1, X, Y+a[i]);
    return min(x1, x2);
  }
}

int main() {
	int n,l;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++) cin>>l,a.push_back(l);
    cout<<divide(a, 0, 0, 0);
}



//optimisd
 

int divide(vector<int> a, int i, int X, int Y) {
  if(i >= a.size()) {
    return abs(X-Y);
  } else {
    int x1 = divide(a, i+1, X+a[i], Y);
    int x2 = divide(a, i+1, X, Y+a[i]);
    return min(x1, x2);
  }
}


int findMinimumDifference(int *arr,int n){
	vector<int> a;
	for(int i=0;i<n;i++) a.push_back(arr[i]);
    return divide(a, 0, 0, 0);
}






/*main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	long long sum1=0,sum2=0;
	sort(arr,arr+n,greater<int>());
	int s1=0,s2=0,i=0;
	while(s1<n/2&&s2<n/2&&i<n){
		if(sum1<sum2) sum1+=arr[i],s1++,cout<<arr[i]<<"s1 ";
		else sum2+=arr[i],s2++,cout<<arr[i]<<"s2 ";;
		i++;
	}
	while(s1<n/2&&i<n) sum1+=arr[i],s1++,i++;
	while(s2<n/2&&i<n) sum2+=arr[i],s2++,i++;
	cout<<abs(sum1-sum2);
}
/*
10
3 4 5 -3 100 3 90 55 23 20
*/
