class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
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