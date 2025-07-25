class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jump = 0;
        int left = 0;
        int right  = 0;

        while (left < nums.size() - 1){
            int farthest = 0;

            for (int i = left; i < nums.size() - 1; ++i){
                farthest = max(farthest, i + nums[i]);
            }

            left = right + 1;
            right = farthest;
            jump += 1;
        }

        return jump;
    }
};