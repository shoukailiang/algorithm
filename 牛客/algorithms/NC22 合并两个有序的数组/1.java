public class Solution {
  public void merge(int A[], int m, int B[], int n) {
      int newArray[] = new int[m+n];
      int p1 = 0;
      int p2 = 0;
      int cur =0;
      while(p1<m||p2<n){
          if(p1==m){
              cur = B[p2++];
          }else if(p2==n){
              cur = A[p1++];
          }else if(A[p1]<B[p2]){
              cur = A[p1++];
          }else {
              cur = B[p2++];
          } 
          newArray[p1+p2-1] = cur; 
      }
     
      for(int i=0;i<m+n;i++){
          A[i] = newArray[i];
      }
  }
}