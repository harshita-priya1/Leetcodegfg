// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void solve(vector<int> arr, vector<int>& ans, int i, int s){
        if(i<0){
            ans.push_back(s);
            return;
        }
        int s1=s,s2=s;
        s1+=arr[i];
        solve(arr,ans,i-1,s1);
        solve(arr,ans,i-1,s2);
        return;
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
        solve(arr,ans,n-1,0);
        sort(ans.begin(),ans.end());
        return ans;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends