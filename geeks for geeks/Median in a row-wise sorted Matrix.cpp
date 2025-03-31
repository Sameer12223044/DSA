class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        vector<int>flattened;
        for(const auto &row:mat){
            flattened.insert(flattened.end(),row.begin(),row.end());
        }
        sort(flattened.begin(),flattened.end());
        return flattened[(flattened.size()-1)/2];
    }
};

