/*
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input

The first input line has an integer n: the number of values.

The second line has n integers x1,x2,…,xn.

Output

Print one integers: the number of distinct values.

Constraints

    1≤n≤2⋅105


1≤xi≤109


Example

Input:
5
2 3 2 2 3

Output:
2
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
 long n;
 int temp;
 cin >> n;
 map<int, int> mp;
 while (n--)
 {
  cin >> temp;
  mp[temp]++;
 }
 cout << mp.size();
 return 0;
}