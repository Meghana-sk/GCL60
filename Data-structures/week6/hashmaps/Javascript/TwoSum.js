var twoSum = function(nums, target) {
    let valueIndexMap = {};
    for(let i = 0 ; i < nums.length; i++) {
        let difference = target - nums[i];
        if(valueIndexMap[difference] != undefined) {
            return [i,valueIndexMap[difference]];
        }
        valueIndexMap[nums[i]] = i;
    }
    return [];
};