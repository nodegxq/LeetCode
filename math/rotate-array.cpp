class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        for (int i = 0; i < k; ++i){
            int last = nums[n - 1];   // store last element

            // shift all elements to the right by 1
            for (int j = n - 1; j > 0; --j){
                nums[j] = nums[j - 1];
            }

            nums[0] = last;   // put the last element at the front
        }
    }
};