//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       int spaces =2*n-2;                //catch over here
       for(int i=0;i<n;i++){
           for(int j=0;j<i+1;j++){
               cout<<j+1<<" ";
           }
           for(int j=0;j<spaces;j++){
               cout<<" "<<" ";          //catch overe here
           }
           for(int j=i;j>=0;j--){
               cout<<j+1<<" ";
           }
           spaces -=2;                  //catch over here
           cout<<endl;
       }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
