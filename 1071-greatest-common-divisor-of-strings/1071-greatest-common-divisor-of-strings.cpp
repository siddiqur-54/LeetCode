class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        
        if(n1 < n2) {
            return gcdOfStrings(str2, str1);
        }
        else if(str1.find(str2) != 0) {
            return "";
        }
        else if(str2 == "") {
            return str1;
        }
        else {
            return gcdOfStrings(str1.substr(n2), str2); 
        }
    }
};