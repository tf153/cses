/*
You are given the arrival and leaving times of n customers in a restaurant.

What was the maximum number of customers?

Input

The first input line has an integer n: the number of customers.

After this, there are n lines that describe the customers. Each line has two integers a and b: the arrival and leaving times of a customer.

You may assume that all arrival and leaving times are distinct.

Output

Print one integer: the maximum number of customers.

Constraints

    1≤n≤2⋅105


1≤a<b≤109


Example

Input:
3
5 8
2 4
3 9

Output:
2
*/

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
int main()
{
 long n, a, b, count = 0, end, next;
 priority_queue<p, vector<p>, greater<p>> pq;
 cin >> n;
 while (n--)
 {
  cin >> a >> b;
  pq.push(make_pair(a, b));
 }
 p top = pq.top();
 pq.pop();
 end = top.second;
 count++;
 while (!pq.empty())
 {
  top = pq.top();
  next = top.first;
  if (next < end)
  {
   pq.pop();
  }
  else
  {
   end = top.second;
   count++;
   pq.pop();
  }
 }
 cout << count;
 return 0;
}