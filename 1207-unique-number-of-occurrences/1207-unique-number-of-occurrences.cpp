class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int sizeArr = arr.size();
        map<int,int>mp;
        set<int>s;
        
        for(int i=0; i<sizeArr; i++) {
            mp[arr[i]]++;
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            s.insert(it->second);
        }
        
        if(s.size() == mp.size()) {
            return true;
        }
        else {
            return false;
        }
    }
};