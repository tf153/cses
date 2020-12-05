/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints

    1≤n≤2⋅105


1≤xi≤109


Example

Input:
5
3 2 5 1 7

Output:
5
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
 long len, i, count = 0;
 int temp1, temp2;
 cin >> len;
 cin >> temp1;
 for (i = 1; i < len; i++)
 {
  cin >> temp2;
  if (temp2 < temp1)
  {
   count += temp1 - temp2;
   temp2 = temp1;
  }
  temp1 = temp2;
 }
 cout << count;
}