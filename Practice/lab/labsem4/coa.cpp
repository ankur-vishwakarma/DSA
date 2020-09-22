
#include <bits/stdc++.h> 
using namespace std; 
  
// function to subtract two values 
// using 2's complement method 
int Subtract(int a, int b) 
{ 
    int c; 
  
    // ~b is the 1's Complement of b  
    // adding 1 to it make it 2's Complement 
    c = a + (~b + 1); 
  
    return c; 
} 
  
// Driver code 
int main() 
{ 
    int a = 2, b = 7; 
  
    cout << Subtract(a, b)<<endl; 
  
    a = 9; b = 7; 
    cout << Subtract(a, b); 
  
    return 0; 
} 

