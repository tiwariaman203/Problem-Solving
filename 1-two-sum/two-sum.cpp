class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;
        vector<int>res;
        
        for(int i=0;i<n;i++){
            m[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            int key = target - nums[i];
            if(m.find(key) != m.end() && m[key] != i){
                res.push_back(i);
                res.push_back(m[key]);
                break;
            }
        }
        return res;
    }
};