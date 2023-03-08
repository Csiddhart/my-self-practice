//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	  int f,s;
	  f=s=INT_MIN;
	  for(int i=0;i<n;i++){
	      if(arr[i]>f){
	          s=f;
	          f=arr[i];
	      }
	      else if(f>arr[i]&&arr[i]>s){
	          s=arr[i];
	      }
	  }
	  if(s==INT_MIN){   // one-way to write
	      return -1;
	  }
	  return s;
	}
};

//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	  int f,s;
	  f=s=INT_MIN;
	  for(int i=0;i<n;i++){
	      if(arr[i]>f){
	          s=f;
	          f=arr[i];
	      }
	      else if(f>arr[i]&&arr[i]>s){
	          s=arr[i];
	      }
	  }
	  
	  return s==INT_MIN?-1:s;  //optimal way to write code
	}
};
