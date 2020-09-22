#include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<int> *adj;
    bool *visited;
    public:
    Graph(int v){
        this->v = v;
        adj = new list<int>[v];
        visited = new bool[v];
        memset(visited, false, sizeof visited);
        //for(int i=0;i<v;i++) visited[i]=false;
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    /*void BFSi(int s = 0){
        bool visited[v];
        for(int i=0; i<v; i++)
            visited[i] = false;
        list<int> queue;
        visited[s] = true;
        queue.push_back(s);
        list<int>::iterator it;
        while(!queue.empty()){
            s = queue.front();
            cout<< s<< ' ';
            queue.pop_front();
            for(it = adj[s].begin(); it != adj[s].end(); it++)
                if(!visited[*it])
                    visited[*it] = true, queue.push_back(*it);
        }
    }
    void DFSi(int s = 0){
        bool visited[v];
        for(int i=0; i<v; i++)
            visited[i] = false;
        list<int> stack;
        visited[s] = true;
        stack.push_front(s);
        list<int>::iterator it;
        while(!stack.empty()){
            s = stack.front();
            cout<< s<< ' ';
            stack.pop_front();
            list<int> queue;
            for(it = adj[s].begin(); it != adj[s].end(); it++)
                if(!visited[*it])
                    visited[*it] = true, queue.push_back(*it);
            while(!queue.empty())
                stack.push_front(queue.back()), queue.pop_back();
        }
    }*/
    void DFSr(int s = 0){
        for(int i=0; i<v; i++) cout<< visited[i]<< ' ';
        cout<< endl;
        cout<< s<< ' ';
        visited[s] = true;
        for(auto it = adj[s].begin(); it!=adj[s].end(); it++){
            if(!visited[*it]){
                // cout<< *it<< endl;
                DFSr(*it);
                //continue;
            }
            
        }
    }
};
int main(){
    Graph ob(10);
    ob.addEdge(0,3);
    ob.addEdge(0,1);
    ob.addEdge(3,2);
    ob.addEdge(2,9);
    ob.addEdge(2,8);
    ob.addEdge(1,4);
    ob.addEdge(1,7);
    ob.addEdge(1,6);
    ob.addEdge(4,5);
    //ob.BFSi(0);
    cout<< endl;
    ob.DFSr(0);
}
