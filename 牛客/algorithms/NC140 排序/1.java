import java.util.*;


public class Solution {
    int partition(int arr[],int low,int high){
        int key = arr[low];
        while (low<high){
            while (low<high&&arr[high]>key) {
                high--;
            }
            arr[low] = arr[high];
            while (low<high&&arr[low]<key){
                low++;
            }
            arr[high] = arr[low];
        }
        arr[low] = key;
        return low;
    }
    public  void quick_sort(int[] arr,int low,int high){
        if(low>=high) {
            return;
        }
        int key = partition(arr,low,high);
        quick_sort(arr,low,key-1);
        quick_sort(arr,key+1,high);
    }
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 将给定数组排序
     * @param arr int整型一维数组 待排序的数组
     * @return int整型一维数组
     */
    public int[] MySort (int[] arr) {
        // write code here
        quick_sort(arr,0,arr.length-1);
        return arr;
    }
}