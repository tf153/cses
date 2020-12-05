/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints

    1≤n≤106


Example

Input:
ATTCGGGA

Output:
3
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int max = 1, temp = 1;
 cin >> s;
 int len = s.length();
 for (int i = 1; i < len; i++)
 {
  if (s[i] == s[i - 1])
   temp++;
  else
  {
   if (temp > max)
    max = temp;
   temp = 1;
  }
 }
 if (temp > max)
  max = temp;
 cout << max;
 return 0;
}