/*
Given an integer A representing the square blocks. The height of each square block is 1. 
The task is to create a staircase of max height using these blocks. 
The first stair would require only one block, the second stair would require two blocks
and so on. Find and return the maximum height of the staircase
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{

  int N=20;
  int res = (-1+sqrt(1+8*N))/2;
  return res;
}
