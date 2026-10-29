class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // for(int a : nums){
        //     int count = 0;
        //     for (int b : nums){
        //         if(a == b)
        //             count++;
        //     }
        //     if(count == 2)
        //         return true;
        // }

        // return false;


        int l = nums.size();

        unordered_set<int> us;
        for(int a : nums){
            // auto it = us.find(a);
            if(!us.contains(a)){
                us.insert(a);
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};