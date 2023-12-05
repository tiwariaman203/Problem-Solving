class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int key = target - nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j] == key){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};