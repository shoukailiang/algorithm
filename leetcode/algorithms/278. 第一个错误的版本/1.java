/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isBadVersion(mid)==true){
                r = mid-1;
            }else if(isBadVersion(mid)==false){
                l = mid+1;
            }
        }
        return r+1;
    }
}