class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> counts;

        // Count each letter in magazine
        for (char c : magazine){
            counts [c] ++;
        }

        // Try to use letters for ransomNote
        for (char c : ransomNote){
            if (counts[c] == 0){
                // Not enough of this letter
                return false;
            }
            counts [c] --;
        }

        return true;
    }
};