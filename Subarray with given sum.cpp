//problem statement:

https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

//solution

 vector<int> subarraySum(int arr[], int n, long long s)

    {

       int j=0;

       int sum=0;

       vector<int>v;

       for(int i=0;i<n;i++)

       {

          sum+=arr[i];

          while(sum>s)

          sum-=arr[j++];

          if(sum==s and j<=i)

          {

              v.push_back(j+1);

              v.push_back(i+1);

               return v;

          }

       }

      return -1;

    }
