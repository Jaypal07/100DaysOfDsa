#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  vector<int>hash(128,0);
  for (auto &it:str)
  {
    hash[it]++;
  }
  for (int i=0;i<str.size();i++)
  {
    if (hash[str[i]]==1) return str[i];
  }
  return str[0];

}
