/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints

    2≤n≤2⋅105


Example

Input:
5
2 3 1 5

Output:
4
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int len, temp;
 cin >> len;
 set<long int> s;
 for (long i = 0; i < len - 1; i++)
 {
  cin >> temp;
  s.insert(temp);
 }
 set<long int>::iterator itr;
 temp = 1;
 for (itr = s.begin(); itr != s.end(); itr++)
 {
  if (*itr != temp)
  {
   cout << temp;
   break;
  }
  temp++;
 }
 if (temp == len)
  cout << len;
 return 0;
}