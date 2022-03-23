#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(10);
	ve.push_back(20);
	ve.emplace_back(30);//reduces time as compared to push_back.
	for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
	ve.pop_back();
	cout<<"\n";
	for(auto it:ve){
		cout<<it<<" "<<"\n";
	}	
	auto it1=ve.begin();
	auto it2=ve.end();
	cout<<*it2;

}