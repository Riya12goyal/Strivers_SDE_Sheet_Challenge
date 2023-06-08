#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	vector<int> rows;
        vector<int> col;
        int row_number = matrix.size();
        int col_number = matrix[0].size();
        for(int i =0; i< matrix.size(); i++){
            for(int j =0; j< matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                 rows.push_back(i);
                 col.push_back(j);   
                }
            }}
            for(int c = 0; c< col.size(); c++){
            for(int k = 0; k < row_number; k++){
                        matrix[k][col[c]] = 0;
                    }
                    }


            for(int r = 0; r< rows.size(); r++){
                for(int m = 0; m<col_number; m++){
                        matrix[rows[r]][m] = 0;
                    }
            }
}