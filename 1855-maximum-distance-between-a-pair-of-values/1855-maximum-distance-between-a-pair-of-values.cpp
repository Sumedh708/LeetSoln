class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=0;int j=0;
        int max=0;
        while(i<nums1.size() and j<nums2.size()){
            
            while(j < nums2.size() && nums1[i]<=nums2[j]){
                if((j-i)>=max)
                    max=j-i;
                j++;
            }
            
            i++;
            

        }  
        return max;
    }

};