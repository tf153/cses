/*
There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.

Each customer announces the maximum price he or she is willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

Input

The first input line contains integers n and m: the number of tickets and the number of customers.

The next line contains n integers h1,h2,…,hn: the price of each ticket.

The last line contains m integers t1,t2,…,tm: the maximum price for each customer.

Output

Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.

If a customer cannot get any ticket, print −1.

Constraints

    1≤n,m≤2⋅105


1≤hi,ti≤109


Example

Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1
*/

#include <iostream>
#include <map>
using namespace std;
struct node
{
 long value = 0;
};
int main()
{
 long n, m, temp, flag;
 map<long, node> mp;
 cin >> n >> m;
 while (n--)
 {
  cin >> temp;
  mp[temp].value++;
 }
 while (m--)
 {
  flag = 0;
  cin >> temp;
  while (temp)
  {
   if (mp[temp].value)
   {
    mp[temp].value--;
    cout << temp << endl;
    flag = 1;
    break;
   }
   temp--;
  }
  if (!flag)
   cout << -1 << endl;
 }
}