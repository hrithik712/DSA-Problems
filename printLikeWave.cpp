#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // if odd index move from buttom to top...
    // if even index print sum from top to buttom....
    vector <int> ans;

    for(int col=0; col<mCols; col++)
    {
        if(col&1)
        {
            // odd -> buttom to top, sum..........
            for(int row = nRows-1; row>=0; row--)
            {
               // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            //0 or  even -> top to buttom, print sum.......
            for(int row=0; row<nRows; row++)
            {
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}