int floorSqrt(int n)
{
    if(n == 0 || n == 1){
        return n;
    }

    int low = 2;
    int high = n;
    int mid;
    while(low < high){

        mid = low + (high - low) / 2;
        if(mid <= (n / mid)){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }

    return low - 1;
}