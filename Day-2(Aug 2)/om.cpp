class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> vec;
        vector<int> temp;
        temp.push_back(1);
        vec.push_back(temp);
        for(int i=1;i<numRows;i++) {
            temp.clear();
            temp.push_back(1);
            for(int j=0;j<i-1;j++) {
                int ele = vec[i-1][j] + vec[i-1][j+1];
                temp.push_back(ele);
            }
            temp.push_back(1);
            vec.push_back(temp);
        }
        
        return vec;
    }
};
