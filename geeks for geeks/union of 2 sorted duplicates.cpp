class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int>resultSet;
        for(int num:a){
            resultSet.insert(num);
        }
        for(int num:b){
            resultSet.insert(num);
        }
        vector<int>result(resultSet.begin(),resultSet.end());
        return result;
    }
};
