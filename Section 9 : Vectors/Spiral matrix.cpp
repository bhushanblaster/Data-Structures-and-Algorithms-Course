/*
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example 1:

Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:

Input:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows = matrix.size();
        if(rows==0)
            return ans;
        int cols = matrix[0].size();
        int rs = 0;
        int re = rows-1;
        int cs = 0;
        int ce = cols-1;
        
            
        int count = 0,items = rows*cols;
        
        while(rs<=re || cs <=ce)
        {
            for(int i=cs;i<=ce;i++)
            {
                ans.push_back(matrix[rs][i]);
                count++;
            }
             rs++;
            if(count == items)
                return ans;
            
            for(int i = rs;i<=re;i++)
            {
                ans.push_back(matrix[i][ce]);
                count++;
            }
            ce--;
            if(count == items)
                return ans;
            
            for(int i = ce; i>=cs;i--)
            {
                ans.push_back(matrix[re][i]);
                count++;
            }
            re--;
            if(count == items)
                return ans;
            for(int i=re;i>=rs;i--)
            {
                ans.push_back(matrix[i][cs]);
                count++;
            }
            cs++;
            if(count == items)
                return ans;
        }
        return ans;
    }
};
