int pivot(int* arr, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]) s = mid+1;
        else e = mid;
    }

    return s;
}

int binarySearch(int* arr, int s, int e, int key){
    while(s<=e){
        int mid = s +(e-s)/2;
        if(arr[mid]==key) return mid;
        else if(key<arr[mid]) e = mid-1;
        else s = mid+1;
    }
    return -1;
}


int search(int* arr, int n, int key) {
    // Write your code here.
    int pv = pivot(arr, n);
 
    if(arr[pv]<=key && key<=arr[n-1]){
        return binarySearch(arr, pv, n-1, key);
    }else{
        return binarySearch(arr, 0, pv-1, key);
    }
}