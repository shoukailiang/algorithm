class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size()-1;
        int mid = 0;
        char result = letters[0];
        while(l<=r){
            int mid = l+(r-l)/2;
            if(letters[mid]>target){
                r = mid-1;
                result = letters[mid];
            }else {
                l = mid+1;
            }
        }
        return result;
    }
};