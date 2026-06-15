class Solution {
public:
    int appendCharacters(string s, string t) {
        int tLength=t.length(),sLength=s.length();
        int i = 0, j = 0;
        while(j!=sLength && i!=tLength){
            if(t[i]==s[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return tLength-i;
    }
};