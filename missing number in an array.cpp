// problem statement:

// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

// solution:

 int MissingNumber(vector<int>& arr, int n) {
       int sum=0;
       for(int i=0;i<n-1;i++){
           sum+=arr[i];
       }
       return ((n*(n+1))/2)-sum;
    }
