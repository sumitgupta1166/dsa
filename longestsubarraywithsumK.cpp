//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<long long,int>presummap;
        long long sum=0;
        int maxlen=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K){
            maxlen=max(maxlen,i+1);
            }
            else{
            long long rem=sum-K;
            if(presummap.find(rem)!=presummap.end())
            {
              int len=i-presummap[rem];
              maxlen=max(maxlen,len);
            }
                
            }
            if(presummap.find(sum)==presummap.end()) 
            {
              presummap[sum]=i;
                
            }
        }
            return maxlen;
    }

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
