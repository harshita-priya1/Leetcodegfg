typedef pair<int,int> p;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue <int> maxprof;
        priority_queue<p,vector<p>,greater<p>>mincap;
        int profit=0;
        int n=profits.size();
        for(int i=0;i<n;i++){
            mincap.push({capital[i],profits[i]});
        }
        while(k>0){
            while(w>=mincap.top().first&&(!mincap.empty())){
                maxprof.push(mincap.top().second);
                mincap.pop();
            }
            if(maxprof.empty()) return w;
            w=w+maxprof.top();
            maxprof.pop();
            k--;
        }
        return w;
    }
};