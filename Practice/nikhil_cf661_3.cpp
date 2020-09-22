#include<bits/stdc++.h>
    using namespace std;
            
    int mp[100];
    int main(){
        int t;
        cin >> t;        
        while(t--){
            int n;
            cin >> n;
            
            string str;
            cin >> str;
            
            int idx[n];
            idx[0] = 1;
            
            int num = 1,preN=1,i=1,curN;
            while(i<n){
                curN = 1;
                preN--;
                if(str[i]==str[i-1]){
                while(str[i] == str[i-1] && i<n){
                    while(preN>0 && i<n){
                        curN++,preN--;
                        idx[i] = curN;
                        i++;
                    }
                    num++;
                    idx[i] = num;
                    curN++;
                    i++;
                    }
                }
                    idx[i] = 1;
                    i++;
                    preN = curN;
            }
            
            cout << num << endl;
            for(int i=0;i<n;i++) cout << idx[i] << " ";
            cout << endl;
        }
    }
    /*
	1
10
1110011101
	*/
