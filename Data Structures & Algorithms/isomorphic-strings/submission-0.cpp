class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>STmap;
        unordered_map<char,char>TSmap;

        for(int i = 0; i<s.length();i++){
            char a = s[i];
            char b = t[i];

            if(STmap.find(a)!= STmap.end() && STmap[a]!=b){
                return false;
            }
            else{
                STmap[a]=b;
            }

            if(TSmap.find(b)!= TSmap.end() && TSmap[b]!=a){
                return false;
            }
            else{
                TSmap[b]=a;
            }
        }
        return true;
    }
};