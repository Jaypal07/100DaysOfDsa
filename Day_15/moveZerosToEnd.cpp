void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	int i=0;
	int j=0;
	while(i<arr.size()){
		// cout<<arr[i]<<" ";
		if(arr[i]!=0){
			swap(arr[i], arr[j]);
			i++;
			j++;
		}else{
			i++;
		}
	
	}
	// cout<<endl;
}