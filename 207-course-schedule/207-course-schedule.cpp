class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& preq) {
        vector<vector<int>> adj(n, vector<int>());
        vector<int> indeg(n, 0);
        for (auto it: preq) {
            adj[it[1]].push_back(it[0]);
            indeg[it[0]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
            if (indeg[i] == 0) q.push(i);
        while (!q.empty()) {
            int node = q.front(); 
            q.pop(); 
            n--;
            for (auto it: adj[node]){
                indeg[it]--;
                if (indeg[it] == 0) q.push(it);
            }
        }
        return n == 0;
    }
        
};