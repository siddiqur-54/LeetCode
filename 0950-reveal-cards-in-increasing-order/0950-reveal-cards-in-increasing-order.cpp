class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        int n=deck.size(),x;
        vector<int>ans(n);
        queue<int>qu;
        
        for(int i=0;i<n;i++)
        {
            qu.push(i);
        }
        
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++)
        {
            x=qu.front();
            qu.pop();
            
            ans[x]=deck[i];
            
            x=qu.front();
            qu.pop();
            qu.push(x);
        }
        
        return ans;
    }
};