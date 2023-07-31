int makeBeautiful(string str) {
	// Write your code here
	string copy=str;


    int a=0,b=0;

    for(int i=0;i<str.size();i++){

        if(i&1 and str[i]=='0') a++; 

        if(i%2==0 and str[i]=='1') a++; 

        if(i&1 and str[i]=='1') b++; 

        if(i%2==0 and str[i]=='0') b++; 

    }

    return min(a,b);
}