// problem statement :
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

//solution:

void sort012(int arr[], int n)
    {
        // code here
        int start=0,end=n-1,mid=0;
        while(mid<=end){
        if(arr[mid]==2){
            swap(arr[end--],arr[mid]);
            
        }
        else if(arr[mid]==0){
            swap(arr[mid++],arr[start++]);
            
        }
        else{
            mid++;
        }
        }
    }
