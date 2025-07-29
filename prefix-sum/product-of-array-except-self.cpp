class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1); // Initialize result array with 1s

        // Step 1: Prefix product pass
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            answer[i] = prefix;  // store prefix product before nums[i]
            prefix *= nums[i];   // update prefix to include nums[i]
        }

        // Step 2: Postfix product pass
        int postfix = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= postfix; // multiply by postfix product after nums[i]
            postfix *= nums[i];   // update postfix to include nums[i]
        }

        return answer;
    }
};