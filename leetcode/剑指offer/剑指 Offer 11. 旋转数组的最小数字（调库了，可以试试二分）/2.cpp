class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l =0;
        int r = numbers.size()-1;
        while(l<r){
            int mid = (r-l)/2+l;
            // 3 4 1 2 3
            if(numbers[mid]<numbers[r]){
                r= mid;
            //  2 3 4 5 1
            }else if (numbers[mid]>numbers[r]){
                l = mid+1;
            }else{
                // num[mid]  == num[r]
                r-=1;
            }
        }
        return numbers[l];
    }
};
