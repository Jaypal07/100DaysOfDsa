
bool canPlace(vector<int> &stalls, int dis, int cows){
    int cCows = 1;
    int last = stalls[0];
    for(int i=1; i<stalls.size(); ++i){
        if(stalls[i]-last>=dis){
            cCows++;
            last=stalls[i];
        }
        if(cCows>=cows){
            return true;
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1, high = stalls[n-1]-stalls[0];
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canPlace(stalls, mid, k)==true){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return high;
}