// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]>k){
                e=mid-1;
            }else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};
