//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        char character='A';
        for(int i=0;i<n;i++){ //FOR CHECKING AND PRINTING ROWS
	     for(int j=0;j<(n-i);j++){   //FOR CHECKING AND PRINTING COLUMNS 
	         cout<<char(j+character);
	     }
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
