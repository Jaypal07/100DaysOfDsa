#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    // Write your code here.
    int i=0, j=0;
    while(i<str2.size()){
        if(str1[j]==str2[i]){
            j++;
            i++;
        }else{
            i++;
        }
    }
    
    if(j==str1.size()) return 1;
    return 0;
}
