class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last valid index in nums1
        int j = n - 1;         // last index in nums2
        int k = m + n - 1;     // last index to fill in nums1
        
        // Process from the end of nums1
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                // nums1[i] is bigger, put it at nums1[k]
                nums1[k] = nums1[i];
                i--;
            } else {
                // nums2[j] is bigger or equal, put it at nums1[k]
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};