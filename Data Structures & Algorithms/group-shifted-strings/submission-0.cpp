class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        int length=strings.size();
        unordered_map <string,vector<string>> check;
        vector<vector<string>> result;

        for(auto &str:strings){
            string key;
            for(int i=1;i<str.length();i++){
                int difference=(str[i-1]-str[i]+26)%26;
                key += to_string(difference) + ",";
            }
            check[key].push_back(str);
        }
        for(auto &key : check){
            result.push_back(key.second);
        }
        return result;
    }
};
