#include<bits/stdc++.h>
using namespace std;

main() {
    int t,cs =0;
    cin>> t;
    while(t--) {
        int r, c;
        cin>>r>>c;
        
        int s[r][c];
        
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin>> s[i][j];
        
        int left[r][c], right[r][c], up[r][c], down[r][c];
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(j==0) {
                    left[i][j] = s[i][j];
                    continue;
                }
                if(s[i][j]) left[i][j] = left[i][j-1] + 1;
                else left[i][j] = 0;
            }
            for(int j=c-1; j>=0; j--) {
                if(j==c-1) {
                    right[i][j] = s[i][j];
                    continue;
                }
                if(s[i][j]) right[i][j] = right[i][j+1] + 1;
                else right[i][j] = 0;
            }
        }
        
        for(int j=0; j<c; j++) {
            for(int i=0; i<r; i++) {
                if(i==0) {
                    up[i][j] = s[i][j];
                    continue;
                }
                if(s[i][j]) up[i][j] = up[i-1][j] + 1;
                else up[i][j] = 0;
            }
            for(int i=r-1; i>=0; i--) {
                if(i==r-1) {
                    down[i][j] = s[i][j];
                    continue;
                }
                if(s[i][j]) down[i][j] = down[i+1][j] + 1;
                else down[i][j] = 0;
            }
        }
        
        
        int ans=0;
        for(int i=0 ; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(up[i][j] >=2 && right[i][j] >=4) ans += min(up[i][j], right[i][j]/2)-1;
                if(up[i][j] >=2 && left[i][j] >=4) ans += min(up[i][j], left[i][j]/2)-1;
                if(up[i][j] >=4 && right[i][j] >=2) ans += min(up[i][j]/2, right[i][j])-1;
                if(up[i][j] >=4 && left[i][j] >=2) ans += min(up[i][j]/2, left[i][j])-1;
                if(down[i][j] >=2 && right[i][j] >=4) ans += min(down[i][j], right[i][j]/2)-1;
                if(down[i][j] >=2 && left[i][j] >=4) ans += min(down[i][j], left[i][j]/2)-1;
                if(down[i][j] >=4 && right[i][j] >=2) ans += min(down[i][j]/2, right[i][j])-1;
                if(down[i][j] >=4 && left[i][j] >=2) ans += min(down[i][j]/2, left[i][j])-1;
            }
        }
        cout<< "Case #"<< cs<< ": "<< ans<< endl;
        cs++;
    }
}
