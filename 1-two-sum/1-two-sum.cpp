class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> Ans;
        for(int i = 0; i < nums.size(); i++ ){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] + nums[j] == target && i != j){ //need to make sure that we don't add the same index twice
                    Ans.push_back(i);
                    Ans.push_back(j);
                    return Ans;
                }
            }
        }
        return Ans;
    }
};