int maxArea(vector<int>& height) {
    // Write your code here.
    int ans = 0;
    int i=0;
    int j=height.size()-1;
    
    while(i<j){
        if(height[i]>height[j]){
            ans = max(height[j]*(j-i), ans);
            j--;
        }else{
            ans = max(height[i]*(j-i), ans);
            i++;
        }
    }
    return ans;
}