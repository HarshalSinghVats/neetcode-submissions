class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int words=strs.size();
        string ans;

        for (int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(int j=0;j<words;j++){
                if(i<strs[j].length() && ch==strs[j][i]){
                    continue;
                }
                else{
                    return ans;
                }
            }
            ans.push_back(ch);
        }
        return ans;
    }
};