// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {
        int sum=0;
        int s=n*(n+1)/2;
        for(int i=0;i<a.size();i++){    //array er size a traverse korchi 
            sum+=a[i];
        }
        return s-sum;
    }
};



// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {
        int sum=0;
        int s=n*(n+1)/2;
        for(int i=0;i<n-1;i++){      //required element er oonujai traverse korchi 
            sum+=a[i];
        }
        return s-sum;
    }
};  
                                                //optimal way ta korteh hobe.
