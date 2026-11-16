class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        //To initialise an 1D vector
        // vector<int> ans; 
        //To initalise an 2D vector;
        //vector<vector<int>> name(rows, vector<int>(columns)); 
        
        int i=0,j=0;

        int m = matrix.size();
        int n = matrix[i].size();

        vector<vector<int>> transpose(n,vector<int>(m));

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
};