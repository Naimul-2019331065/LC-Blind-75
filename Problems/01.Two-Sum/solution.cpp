class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++) 
            mp[nums[i]] = i;
        for(int i = 0; i<nums.size(); i++){
            if(mp.find(target-nums[i])!=mp.end() and mp[target-nums[i]]!=i)
                return {i, mp[target-nums[i]]};
        }    
        return {0, 0};
    }
};

// alternative solution
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>v(2);
//         map<int, int>mp;
//         for(int i=0; i<nums.size(); i++){
//             int sec = target - nums[i];
//             if(mp.find(sec) != mp.end()){
//                 v[0] = mp[sec], v[1] = i;
//                 return v;
//             }
//             mp[nums[i]] = i;
//         }
//         return v;
//     }
// };