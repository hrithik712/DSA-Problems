#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row =  matrix.size();
        //iterate through whole array...
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<=i; j++)
            {
                /// swap the rows and columns with each other to get the 90 degree rotation....
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<row;i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};
//Time Complexity -> o(n^2)......