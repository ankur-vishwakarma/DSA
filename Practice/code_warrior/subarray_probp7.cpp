#include<iostream>
#include<set>
using namespace std;

main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    set<pair<int,int> > st;
    for(int i=0; i<n-1; i++){
        int lar = max(arr[i],arr[i+1]), lar2 = min(arr[i],arr[i+1]);
        st.insert(make_pair(lar,lar2));
        for(int j=i+2; j<n; j++){
            if(arr[j] > lar){
                lar2 = lar;
                lar = arr[j];
            }
            if(arr[j] < lar && arr[j] > lar2)
                lar2 = arr[j];
            st.insert(make_pair(lar,lar2));
        }
    }
    cout<< st.size()<<endl;
}
