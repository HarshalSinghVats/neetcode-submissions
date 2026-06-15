class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLength=s.length();
        int tLength=t.length();
        if(sLength>tLength) return false;
        int i=0,j=0;
        while(j!=tLength && i!=sLength){
            if(s[i]==t[j]){
                i+=1;
                j+=1;
            }
            else{
                j+=1;
            }
        }
        if(i==sLength) return true;
        else return false;
    }
};