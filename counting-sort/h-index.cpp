class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        // Sort the citations in descending order
        sort(citations.begin(), citations.end(), greater<int>());
        
        int h = 0;   // store the h-index

        for(int i = 0; i < citations.size(); ++i){

            if (citations[i] >= i + 1){
                h = i + 1;
            } else{
                break;
            }
        }

        return h;

    }
};