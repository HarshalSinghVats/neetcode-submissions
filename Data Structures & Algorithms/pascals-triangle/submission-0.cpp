class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i=0; i<numRows;i++){
            vector<int> tempResult(i+1,1);

            for(int j=0;j<i;j++){
                tempResult[j] = result[i-1][j-1]+result[i-1][j];
            }
            result.push_back(tempResult);
        }
        return result;
    }
};