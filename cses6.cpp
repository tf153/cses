/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

 1 2  9  10 25
 4 3  8  11 24
 5 6  7  12 23
16 15 14 13 22
17 18 19 20 21

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints

    1≤t≤105


1≤y,x≤109


Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

#include <iostream>
using namespace std;
int main()
{
 long t, x, y, z;
 cin >> t;
 while (t--)
 {
  cin >> x >> y;
  z = x > y ? x : y;
  z = z * z - ~(z % 2 ? y - x : x - y) - z;
  cout << z << endl;
  /*flag = 2;
  cross = 1;
  x > y ? temp = x : temp = y;
  for (long i = 2; i <= temp; i++)
  {
   cross += flag;
   flag += 2;
  }
  if (x == y)
  {
   cout << cross << endl;
  }
  else if (x < y)
  {
   if (y % 2 == 0)
   {
    cout << cross - y - x << endl;
   }
   else
   {
    cout << cross + y - x << endl;
   }
  }
  else
  {
   if (y % 2 != 0)
   {
    cout << cross - x - y << endl;
   }
   else
   {
    cout << cross + x - y << endl;
   }
  }*/
 }
}