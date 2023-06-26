/* Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 
Constraints:

1 <= numRows <= 30 */

//code
class Solution {
public:
    vector<int> rows(int row){
        long long ans = 1;
        vector<int>temp;
        temp.push_back(ans);
        for(int col = 1; col<row; col++){
            ans = ans * (row-col);
            ans = ans /col;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i = 1; i<=numRows; i++){
            res.push_back(rows(i));
        }
        return res;
    }
};
