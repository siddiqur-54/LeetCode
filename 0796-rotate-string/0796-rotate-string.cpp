class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n_s=s.size();
        int n_goal=goal.size();
        bool ans;
        string str;
        
        if(n_s!=n_goal) {
            return false; 
        }
        
        str=s+s;
        if(str.find(goal)!=string::npos)
        {
            ans=true;
        }
        else
        {
            ans=false;
        }
        
        return ans;
    }
};