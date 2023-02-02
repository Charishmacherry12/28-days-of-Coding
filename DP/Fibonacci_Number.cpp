class Solution {
public:
    int fib(int n) {
        int fibonacci[n+2];
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        for(int i=2;i<=n;i++)
        {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
        return fibonacci[n];
    }
};
