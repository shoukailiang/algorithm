class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int m = 0;
        for(int i =0;i<n1;i++){
            int l =i;
            int r = n2-1;
            int res =-1;
            while(l<=r){
                int mid = (r-l)/2+l;
                if(nums2[mid]<nums1[i]){
                    r= mid-1;
                }else {
                    l = mid+1;
                    res = mid;
                }
            }
            if(res!=-1){
                m = max(m,abs(i-res));
            }
        }
        return m;
    }
};