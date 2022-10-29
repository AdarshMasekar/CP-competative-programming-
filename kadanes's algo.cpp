//problem statement :
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

//solution:

 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0;
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi=max(sum,maxi);
        
            if(sum<0)
                sum=0;
        
        }
        return maxi;
    }
