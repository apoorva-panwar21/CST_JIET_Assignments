/*Square Root of Integer
Given an integar A. Compute and return the square root of A.
If A is not a perfect square, return floor(sqrt(A)). DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
*/


#include<iostream>
using namespace std;
int main()
{
int sqt=1;
int i = 1;
int inpt=36;
if(inpt==0||inpt==1) {return inpt;}
else
{
    while (sqt <= inpt) 
    { 
      i++; 
      sqt = i * i; 
    } 
    return i - 1; 
}
}
