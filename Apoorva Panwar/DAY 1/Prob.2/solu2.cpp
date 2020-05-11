#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a[] = { 4,2,5,1}; 
    int n = sizeof(a) / sizeof(a[0]);   
    
    int minXor = INT_MAX; 
    for(int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) 
            minXor = min(minXor, a[i] ^ a[j]); 
  
    return minXor; 
} 