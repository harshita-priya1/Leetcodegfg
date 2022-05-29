class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target>=letters[letters.size()-1]){
            return letters[0];
        }
        int l=0,h=letters.size()-1;
        int mid;
        while(l<h){
            mid=l+(h-l)/2;
            if(letters[mid]==target){
                l=mid+1;
            }
            else if(letters[mid]>target){
                if(mid==0||letters[mid-1]<=target)return letters[mid];
                else h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return letters[l];
    }
};