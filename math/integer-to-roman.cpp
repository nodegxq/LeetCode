class Solution {
public:
    string intToRoman(int num) {

        // Pairs of Roman numeral values and their corresponding symbols
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result = "";   // Final Roman numeral string

        // Iterate through each value-symbol pair
        for (const auto& [value, symbol] : roman) {
            // While the current value fits into the number
            while (num >= value) {
                result += symbol; // Append the Roman symbol to the result
                num -= value;     // Subtract the value from the number
            }
        }

        return result;



    }
};