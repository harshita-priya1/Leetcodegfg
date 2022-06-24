bool solve(pair<int,int>a, pair<int,int>b){
    if(a.second==b.second)
        return a.first<b.first;
    else
        return a.second<b.second;
    } 



    int noof1s(int x){
        int res=0;
        while(x){
            x=(x&(x-1));
            res++;
        }
        return res;
    }
class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>a;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            a.push_back({arr[i],noof1s(arr[i])});
        }
       sort(a.begin(),a.end(),solve);
        for(auto &i:a){
           ans.push_back(i.first);
        }
        return ans;
        }
        
    
};