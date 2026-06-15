class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        int wordCount=words.size();
        for (int i=0; i<wordCount; i++){
            for(int j=0; j<words[i].length();j++){
                if(j<wordCount && i<words[j].length() && words[i][j]==words[j][i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
