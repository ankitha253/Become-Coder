#include<bits/stdc++.h>
using namespace std;
long long int N=10000001;
vector<bool>primes(N,true);
bool Gen_Seive()
{
	primes[0]=primes[1]=0;
	for(int i=2;i*i<=N;i++)
	{
	  if (primes[i]==true){
	    for(int j=i*i;j<=N;j+=i)
	  {
	    primes[j]=false;
	   }
	 }
   }
}
int main()
{
	Gen_Seive();
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
	if(primes[i]==true)
	     cout<<i<<" ";
	}
}