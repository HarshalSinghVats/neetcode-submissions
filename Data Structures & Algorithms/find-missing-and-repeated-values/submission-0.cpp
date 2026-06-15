class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeated=-1,missing=-1,size=grid.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                
                int val=abs(grid[i][j]);
                int idx=val-1;
                int r=idx/size;
                int c=idx%size;

                if(grid[r][c]<0){
                    repeated=val;
                }
                else{
                    grid[r][c] *= -1;
                }
            }
        }

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(grid[i][j]>0){
                    missing=i*size+j+1;
                }
            }
        }
        return {repeated,missing};

    }
};