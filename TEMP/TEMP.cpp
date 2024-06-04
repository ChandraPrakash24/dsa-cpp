
//{ Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n) {
        if (n < 10)
            return n; // Base case: return single digit number
        
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        
        return digitalRoot(sum); // Recursive call with accumulated sum
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends