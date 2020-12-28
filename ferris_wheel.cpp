//to be checked
/*
There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.

What is the minimum number of gondolas needed for the children?

Input

The first input line contains two integers n and x: the number of children and the maximum allowed weight.

The next line contains n integers p1,p2,…,pn: the weight of each child.

Output

Print one integer: the minimum number of gondolas.

Constraints

    1≤n≤2⋅105


1≤x≤109

1≤pi≤x


Example

Input:
4 10
7 2 3 9

Output:
3
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
 long n, x, temp, count = 0, i;
 vector<long> v;
 vector<long>::iterator itr, max;
 cin >> n >> x;
 while (n--)
 {
  cin >> temp;
  v.push_back(temp);
 }
 while (!v.empty())
 {
  max = max_element(v.begin(), v.end());
  for (i = x - (*max); i >= 1; i--)
  {
   itr = find(v.begin(), v.end(), i);
   if (itr != v.end() && itr != max)
   {
    count++;
    v.erase(max);
    v.erase(itr);
    break;
   }
   if (i == 1)
   {
    count++;
    v.erase(max);
   }
  }
 }
 cout << count;
 return 0;
}