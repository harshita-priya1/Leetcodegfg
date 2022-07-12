// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.
bool canCol(int node,int color[],bool graph[101][101],int n, int col){
    for(int i=0;i<n;i++){
        if(graph[i][node]==1&&color[i]==col) return false;
    }//dont understand well
    return true;
}
bool solve(int node,int col[], int m, int n, bool graph[101][101]){
    if(node==n) return true;
    for(int i=1;i<=m;i++){
        if(canCol(node,col,graph,n,i)){
            col[node]=i;
            if(solve(node+1,col,m,n,graph)) return true;
            col[node]=0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n) {
    int col[n]={0};
    if(solve(0,col,m,n,graph)) return true;
    return false;// your code here
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends