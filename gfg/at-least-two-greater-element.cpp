class Solution{
public:
    vector<int> findElements(int a[], int n)
    { vector<int>ans;
       sort(a,a+n);  //stl of sorting for array
       for(int i=0;i<n-2;i++){
           ans.push_back(a[i]);
       }
       return ans;
    }
};
