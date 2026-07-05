class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start=-1,end=-1;
       if (!nums.empty()) {
            int low=0;
            int high=nums.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    start=mid;
                    high=mid-1;
                    
                }
                else if(target>nums[mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            low=0;
            high=nums.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    end=mid;
                    low=mid+1;
                    
                }
                else if(target>nums[mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
}
    ans.push_back(start);
    ans.push_back(end);
    return ans;
    }
};