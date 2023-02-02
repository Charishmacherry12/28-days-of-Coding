class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> pay(n);
        pay[0] = cost[0];
        pay[1] = cost[1];
        for(int i=2; i<n; i++)
        {
            pay[i] = cost[i] + min(pay[i-1],pay[i-2]);
        }
        return min(pay[n-2],pay[n-1]);
    }
};
