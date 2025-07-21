class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num; // change candidate
            }

            if (num == candidate) {
                count++;  // same as candidate, increase count
            } else {
                count--;  // different, decrease count
            }
        }

        return candidate;
    }

};