class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalTank = 0;     // Total gas left after one full round
        int currentTank = 0;   // Gas in tank for current trip
        int startIndex = 0;    // Candidate starting station

        for (int i = 0; i < gas.size(); ++i) {
            int gain = gas[i] - cost[i];
            totalTank += gain;
            currentTank += gain;

            // If we run out of gas at station i, we can't start from previous stations
            if (currentTank < 0) {
                startIndex = i + 1; // Try the next station
                currentTank = 0;
            }
        }

        // return (condition) ? value_if_true : value_if_false;
        return (totalTank >= 0) ? startIndex : -1;
    }
};
