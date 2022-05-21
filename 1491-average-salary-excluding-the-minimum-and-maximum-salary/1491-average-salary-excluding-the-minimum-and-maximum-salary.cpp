class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int n=salary.size();
        double avg=0;
        avg=accumulate(salary.begin(),salary.end(),0);
        avg=avg-salary[0]-salary[n-1];
        avg=avg/(n-2);
        return avg;
    }
};