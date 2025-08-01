class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int length = 0;
        int i = s.size() - 1;   // Start from the end and count characters

        // Step 1: Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};