  vector<int> twoSum(vector<int>& nums, int target) {
    //    vector< pair <int,int> >  numsMap;
    //     for(int i =0 ; i < nums.size();i++) {
    //         numsMap.push_back({nums[i],i});
    //     }
    //     sort(numsMap.begin(),numsMap.end()); 
    //     int low = 0;
    //     int high = numsMap.size() - 1;

    //     while (low < high) {
    //         int sum = numsMap[low].first + numsMap[high].first;
    //         if (sum == target) {
    //             break;
    //         };
    //         if (sum > target) high--;
    //         else if (sum < target) low++;
    //     }
    //     int firstValue = numsMap[low].second, secondValue = numsMap[high].second;
    //     return vector<int> {firstValue,secondValue};

    unordered_map<int,int> valueIndexMap;
    for(int i = 0; i<nums.size();i++) {
        int difference = target - nums[i];
        if(valueIndexMap.count(difference) > 0) { //checks if key is present in the map
            return {i, valueIndexMap[difference]};

        }
        valueIndexMap[nums[i]] = i;
    }
    return {};
    }