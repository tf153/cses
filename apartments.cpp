/*
There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.

Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.

Input

The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.

The next line contains n integers a1,a2,…,an: the desired apartment size of each applicant. If the desired size of an applicant is x, he or she will accept any apartment whose size is between x−k and x+k.

The last line contains m integers b1,b2,…,bm: the size of each apartment.

Output

Print one integer: the number of applicants who will get an apartment.

Constraints

    1≤n,m≤2⋅105


0≤k≤109

1≤ai,bi≤109


Example

Input:
4 3 5
60 45 80 60
30 60 75

Output:
2
*/

#include <iostream>
#include <queue>
using namespace std;
int main()
{
 long n, m, k, temp, ntop, mtop, count = 0;
 priority_queue<long> nq, mq;
 cin >> n >> m >> k;
 while (n--)
 {
  cin >> temp;
  nq.push(temp);
 }
 while (m--)
 {
  cin >> temp;
  mq.push(temp);
 }
 while (!nq.empty() && !mq.empty())
 {
  ntop = nq.top();
  mtop = mq.top();
  if (ntop == mtop)
  {
   count++;
   nq.pop();
   mq.pop();
  }
  else if (ntop < mtop)
  {
   if (mtop - ntop <= k)
   {
    count++;
    nq.pop();
    mq.pop();
   }
   else
   {
    mq.pop();
   }
  }
  else
  {
   if (ntop - mtop <= k)
   {
    count++;
    nq.pop();
    mq.pop();
   }
   else
   {
    nq.pop();
   }
  }
 }
 cout << count;
}