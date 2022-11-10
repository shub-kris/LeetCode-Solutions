class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int count = 0;
	    sort(arr, arr + n);
	    for(int i = 0; i < n-2; i++){
	        if(arr[i] >= sum) break;
	        int st = i+1, end = n - 1;
	        while(st < end){
	            long long triplet_sum = arr[i] + arr[st] + arr[end];
	            if(triplet_sum < sum) count+=end-st, st++;
	            else end--;
	        }
	    }
	    return count;
	}


};
