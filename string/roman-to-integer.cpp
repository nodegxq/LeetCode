class Solution {
public:
    int romanToInt(string s) {
        
        // Map of Roman numeral symbols to their corresponding integer values
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;

        for(int i = 0; i < s.length(); ++i){
            
            // If the current value is smaller than the next value, it's a subtractive case
            if(i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]){
                result -= roman[s[i]];
            } else{
                result += roman[s[i]];
            }
        }

        return result;
    }
};