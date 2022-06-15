
import java.util.Arrays;

public class Solution {

    public int minSwaps(int[] data) {

        int countOnes = Arrays.stream(data).sum();
        int currentSwaps = 0;
        for (int i = 0; i < countOnes; ++i) {
            currentSwaps += (1 - data[i]);
        }

        int minSwaps = currentSwaps;
        for (int i = countOnes; i < data.length; ++i) {
            currentSwaps += (1 - data[i]) - (1 - data[i - countOnes]);
            minSwaps = Math.min(minSwaps, currentSwaps);
        }
        return minSwaps;
    }
}
