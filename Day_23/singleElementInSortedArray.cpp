int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int s = 0;
	int e = arr.size()-1;
	if(e==0) return arr[0];
	while(s<e){
		int mid= (e+s)/2;
		if(mid%2==0){
			if(arr[mid]==arr[mid+1]) s = mid+1;
			else e = mid;
		}else{
			if(arr[mid]==arr[mid-1]) s = mid+1;
			else e = mid;
		}
	}
	return arr[s];

}