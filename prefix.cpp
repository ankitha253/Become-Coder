#include<bits/stdc++.h>
using namespace std;
long long int N=10000001;
vector<bool>primes(10000001,true);
vector<int>prefix(N,0);
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
	 for(int j=1;j<N;j++)
	 	prefix[j]=prefix[j-1]+primes[j];
   
}
int main()
{
	Gen_Seive();
	int r;
	cin>>r;
	cout<<prefix[r];
}