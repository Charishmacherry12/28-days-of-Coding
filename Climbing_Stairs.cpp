class Solution {
public:
    int climbStairs(int n) {
        vector<int> poss(n+2);
        poss[0] = 1;
        poss[1] = 1;
        for(int i=2;i<=n;i++)
        {
            poss[i] = poss[i-1] + poss[i-2];
        }
        return poss[n];
    }
};
