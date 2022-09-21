class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& i1, vector<vector<int>>& i2) {
        map<int,int> m;
        int n1=i1.size(),n2=i2.size();
        for(int i=0;i<n1;i++){
            m[i1[i][0]]=i1[i][1];
        }
        for(int i=0;i<n2;i++){
            if(m.find(i2[i][0])==m.end()){
                m[i2[i][0]]=i2[i][1];
            }
            else m[i2[i][0]]+=i2[i][1];
        }
        vector<vector<int>> ans;
        for(auto i: m){
            ans.push_back({i.first,i.second});
        }
        
        return ans;
    }
};