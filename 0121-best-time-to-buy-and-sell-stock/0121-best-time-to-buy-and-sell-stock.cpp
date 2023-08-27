class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        int mn=prices[0];
        int x, ans=0;
        
        for(int i=1;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
            }
            else
            {
                x=prices[i]-mn;
                if(x>ans)
                {
                    ans=x;
                }
            }
        }
        
        return ans;
    }
};