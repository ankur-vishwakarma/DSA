#include <bits/stdc++.h>

using namespace std;
void rotateby2(int * s){
	int frst=s[0],sec=s[1];
	for(int i=0;i<6;i++) s[i]=s[i+2];
	s[6]=frst,s[7]=sec;
}
// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
	int base[]={8,3,4,9,2,7,6,1};
	int base2[]={4,3,8,1,6,7,2,9};
	int ourcase[]={s[0][0],s[0][1],s[0][2],s[1][2],s[2][2],s[2][1],s[2][0],s[1][0]};
	int cost=abs(5-s[1][1]);
	int ans=INT_MAX;
	for(int i=0;i<4;i++){
		int count=0;
		//search comms
		for(int j=0;j<8;j++) count+=(abs(base[j]-ourcase[j]));
		ans=min(ans,count);
		count=0;
		for(int j=0;j<8;j++) count+=(abs(base2[j]-ourcase[j]));
		ans=min(ans,count);
		rotateby2(ourcase);
	}
	return ans+cost;
}

int main()
{

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}

