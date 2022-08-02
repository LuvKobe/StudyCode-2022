class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int ret = 0;
        int sum = 0, cur = 1;
        while (sum + cur <= n) {
            ret++;
            sum += cur++;
        }
        return ret;
    }
};