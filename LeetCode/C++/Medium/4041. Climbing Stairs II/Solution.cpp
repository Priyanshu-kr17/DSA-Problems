class Solution {
public:
    int helper(int n, vector<int>& costs){
        if(n == 0) return 0;
            if(n == 1) return costs[0] + 1;
            if(n == 2) return min(costs[1] + 4, helper(1, costs) + costs[1] + 1);
            if(n == 3) return min({
                costs[2] + 9,
                helper(1, costs) + costs[2] + 4,
                helper(2, costs) + costs[2] + 1
            });

        return min(
            costs[n-1]+(n-(n-1))*(n-(n-1))+helper(n-1,costs),
            min(
                costs[n-1]+(n-(n-2))*(n-(n-2))+helper(n-2,costs),
                costs[n-1]+(n-(n-3))*(n-(n-3))+helper(n-3,costs)
            )
        );
    }
    int climbStairs(int n, vector<int>& costs) {
        
        return helper(n,costs);
    }
};