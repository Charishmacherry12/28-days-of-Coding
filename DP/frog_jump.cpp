#include <bits/stdc++.h> 
using namespace std;
int rec(int n, vector<int> &heights, vector<int> &dp)
{
    if(n<1)
    return 0;
    if(dp[n] != -1)
    return dp[n];
    int l = rec(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
    int r = INT_MAX;
    if(n>1)
    r = rec(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
    return dp[n]=min(l,r);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n,-1);
    dp[0] = 0;
    for(int i=1;i<n;i++)
    {
        int l = dp[i-1]+abs(heights[i]-heights[i-1]);
        int r = INT_MAX;
        if(i>1)
        r = dp[i-2]+abs(heights[i]-heights[i-2]);
        dp[i]=min(l,r);
    }
    return dp[n-1];
   //return rec(n-1,heights,dp);
}
