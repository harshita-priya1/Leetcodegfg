class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int n=0;
        for(int i=0;i<seats.size();i++){
            n+=abs(seats[i]-students[i]);
        }
        return n;
    }
};