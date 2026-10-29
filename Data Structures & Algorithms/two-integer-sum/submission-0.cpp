class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> um;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){

            int a = target - nums[i];
            if(um.contains(a)){
                ans.push_back(um[a]);
                ans.push_back(i);
                break;
            }
            um.insert({nums[i],i});
        }

        return ans;
        
    }
};
