
#include <vector>
using namespace std;

class Solution {
    
public:
    int minSwaps(vector<int>& data) {
        int countOnes = accumulate(data.begin(), data.end(), 0);
        int currentSwaps = 0;
        for (int i = 0; i < countOnes; ++i) {
            currentSwaps += (1 - data[i]);
        }

        int minSwaps = currentSwaps;
        for (int i = countOnes; i < data.size(); ++i) {
            currentSwaps += (1 - data[i]) - (1 - data[i - countOnes]);
            minSwaps = min(minSwaps, currentSwaps);
        }
        return minSwaps;
    }
};
