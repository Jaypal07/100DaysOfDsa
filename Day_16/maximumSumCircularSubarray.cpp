int maxSubarraySum(vector<int> &arr, int n) {
	// Write your code here.
	int max_s=0;
    int min_s=0;
    int max_sum=INT_MIN;
    int min_sum=INT_MAX;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        max_s=max_s+arr[i];
        max_sum=max(max_s,max_sum);
        if(max_s<0)
        max_s=0;
        min_s=min_s+arr[i];
        min_sum=min(min_s,min_sum);
        if(min_s>0)
        min_s=0;
    }
    if(sum==min_sum)
    return max_sum;
    return max(max_sum,sum-min_sum);
}