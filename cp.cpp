#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printqueue(queue <int>, q string lable){
    while(!q empty()){
        cout << q.front() << " ", q.pop();
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

    void BFSRecursive(int vertex){
        visited[vertex] = true;
        cout << vertex << " ";
        for(int neighbor: adj[vertex]){
            if(!visited[neighbor]){
                DFSRecursive(neighbor)
            }
        }
    }
    void BFS(int startvertex){
        fill(visited.begin(), visited.end(), false);
        queque <int> q;
        visited[startvertex] = true;
        q.push(startvertex);
        if(verbose){}
        int step = 1;
        int level= 0;   
        while(!q empty()){
            //if verbose дописать дома 
        

        int currentvertex = q.front();
        q.pop();
        cout << currentvertex << " ";

        /*if(verbose){
            cout << "Ищем соседей" << currentvertex;
            bool hasUnvisited = false;
            for(int neighbor: adj[vertex]){
            if(!visited[neighbor]){
                BFS(neighbor) 
        }*/
       for (int neighbor:adj[currentvertex]){
        if(visited[neighbor]){
        visited[neighbor] =time;
        q.push (neqghbor);
             }
        }
        }
       step++;
    }

    cout << endl;
    cout << "Обход завершен";

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