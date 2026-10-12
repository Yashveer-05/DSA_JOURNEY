class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>l1;
        vector<int>l2;

        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                l1.push_back(nums[i]);
            }
            else{
                l2.push_back(nums[i]);
            }
        }

        vector<int>result(n);
        for(int i = 0; i<l1.size(); i++){
            result[2*i] = l1[i];
            result[2*i+1] = l2[i];
        }
        return result;
    }
};