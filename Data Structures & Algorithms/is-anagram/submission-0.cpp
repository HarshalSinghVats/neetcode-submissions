class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int> check;

        for (char c:s){
            check[c]++;
        }
        for (char c:t){
            if(check.count(c)==0) return false;
            check[c]--;
            if(check[c]==0) check.erase(c);
        }
        return check.empty();
    }
};
