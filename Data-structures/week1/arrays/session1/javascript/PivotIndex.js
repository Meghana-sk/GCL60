/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let leftSum = 0, rightSum = 0;
    let i = 0, j = nums.length-1;
    for(let i = 0; i < nums.length; i++) {
        rightSum += nums[i];
    }
    while(i < nums.length) {
        leftSum += nums[i];

        if(leftSum == rightSum) {
            return i;
        }
                rightSum -= nums[i]
        i++;
    }
    return -1;
};