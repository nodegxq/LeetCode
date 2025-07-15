class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;   // This will store the running sums
        int total = 0;

        for(int i = 0; i < nums.size(); i++){
            total += nums[i];   // add the current number to total
            result.push_back(total);   // add total to result
        }

        return result;
    }
};