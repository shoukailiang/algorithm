class Solution {
    public void merge(int[] A, int m, int[] B, int n) {
        int p1 = m-1;
        int p2 = n-1;
        int p = m+n-1;
        while(p1>=0&&p2>=0){
            if(A[p1]>B[p2]){
                A[p--] = A[p1--];
            }else{
                A[p--]= B[p2--];
            }
        }
        int i = 0;
        while(i<=p2){
            A[i] = B[i];
            i++;
        }
        
    }
}