
/**
 * @param {number[]} data
 * @return {number}
 */
var minSwaps = function (data) {
    let countOnes = data.reduce((x, y) => x + y);
    let currentSwaps = 0;
    for (let i = 0; i < countOnes; ++i) {
        currentSwaps += (1 - data[i]);
    }

    let minSwaps = currentSwaps;
    for (let i = countOnes; i < data.length; ++i) {
        currentSwaps += (1 - data[i]) - (1 - data[i - countOnes]);
        minSwaps = Math.min(minSwaps, currentSwaps);
    }
    return minSwaps;
};
