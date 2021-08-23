class Solution {
    public void merge(int[] A, int m, int[] B, int n) {
        int[] C  = new int[m+n];
        int i=0,j=0;
        int k = 0;
        while(i<m&&j<n){
            if(A[i]<B[j]){
                C[k] = A[i];
                k++;
                i++;
            }else {
                C[k]  =B[j];
                k++;
                j++;
            }

        }
        while(i<m){
            C[k] = A[i];
            k++;
            i++;
        }
        while(j<n){
            C[k] =B[j];
            k++;
            j++;
        }
        for(int l=0;l<m+n;l++){
            A[l] = C[l];
        }
        
    }
}