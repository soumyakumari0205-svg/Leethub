class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> list;
        for(int i=0;i<nums.size();i++){
            if(list.size()==0 || list[0]!=nums[i] ){
                int count=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[j]==nums[i]){
                        count++;
                    }
                }
                if(count > (nums.size()/3)){
                    list.push_back(nums[i]);
                }
            }
            if(list.size()==2)
            break;
        }       
        return list;
    }
};