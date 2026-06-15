class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int words = strs.size();
        unordered_map <string,vector<string>> check;
        vector<vector<string>> result;

        for (int i=0;i<words;i++){
            string word=strs[i];
            sort(word.begin(),word.end());
            check[word].push_back(strs[i]);
        }
        for(auto &p : check){
            result.push_back(p.second);
        }
        return result;
    }
};
