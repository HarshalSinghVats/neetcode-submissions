class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=s.length(),letterCount=0,position;
        //loop 1 to trim trailing spaces
        for (position=length-1;position>0;position--){
            if (s[position]!=' ') break;
        }
        //loop 2 to count wordlength
        for(position;position>=0;position--){
            if(s[position]!=' ' && position>=0){
                letterCount++;
            }
            else break;
        }
        return letterCount;
    }
};