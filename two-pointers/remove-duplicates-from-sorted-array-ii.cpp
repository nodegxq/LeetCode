class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2) return nums.size();  // All elements can stay if size <= 2
        
        int k = 2;   // slow pointer, first 2 elements are always allowed

        for (int i = 2; i < nums.size(); i++){

            if (nums[i] != nums[k - 2]){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};