#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printStack(stack<int>,string& label){
    cout << label;
    vector <int> temp;
    while(!s.empty()){
        temp.push_back(s.top());
        s.pop();
    }  
   for(int i = temp.size()-1; i>0; i--){
    cout << temp [i];
    if(i>0) cout << " "; 
   } 
}
class Graph {
    int numVectices;
    vector < vector <int> > adj;
    vector < bool > visited;
    bool verbose;

    public:
    Graph(int V, bool venbeseMode = false) {
            numVectices = V;
            adj.resize(V);
            visited.resize (V,false);
            verbose = venbeseMode;
        }
    

    void addEdge (int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }

    void DFSRecursive(int vertex){
        visited[vertex] = true;
        cout << vertex << " ";
        for(int neighbor: adj[vertex]){
            if(!visited[neighbor]){
                DFSRecursive(neighbor)
            }
        }
    }
    void DFSRecursiveWrapper(int startvertex){
        fill(visited.begin(), visited.end(), false);
        cout <<"DFSRecursive begin";
        DFSRecursive(startvertex);
        cout << endl;
    }
};

int main(){
    Graph g1(6);
    g1.addEdge(0,1);
    g1.addEdge(0,1);
    g1.addEdge(0,1);
    g1.addEdge(0,1);
    g1.addEdge(0,1);
    g1.DFSRecursiveWrapper(0);
}