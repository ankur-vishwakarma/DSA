#include <bits/stdc++.h>
using namespace std;
int main() {
std::vector<std::vector <int> > normal;
for(int i=0;i<3;i++)
{
    normal.push_back(std::vector<int>());
    for(int j=0;j<3;j++)
    {    
        normal[i].push_back(j);    
    }
}
for(int i=0;i<3;i++) for(int j=0;j<3;j++) cout<<normal[i][j]<<"\n";
return 0;
}
