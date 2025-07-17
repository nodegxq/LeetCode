class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1;  // Start from the second position (index 1)

        for (int i = 1; i < nums.size(); ++i) {  // fast pointer, scans through every element
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
