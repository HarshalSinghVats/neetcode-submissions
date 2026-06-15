class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> check;
        int a1=INT_MIN,a2=INT_MAX;
        for(int i = 0; i<s.length(); i++){
            check[s[i]]++;
        }
        for(auto &c : check){
            if(c.second%2!=0){
                a1=max(a1,c.second);
            }
            else if(c.second>0){
                a2=min(a2,c.second);
            }
        }
        return a1-a2;
    }
};