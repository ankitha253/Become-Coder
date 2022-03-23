#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(10);
	ve.push_back(20);
	ve.emplace_back(30);//reduces time as compared to push_back.
	ve.emplace_back(40);
	ve.emplace_back(50);
	ve.emplace_back(60);
	ve.emplace_back(70);
	for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
	//ve.pop_back();
	cout<<"\n";
	for(auto it:ve){
		cout<<it<<" ";
	}
	cout<<"\n";	
	auto it1=ve.begin();
	auto it2=ve.end()-1;
	cout<<*it2;
	cout<<"\n";
	sort(ve.begin(),ve.end());
    ve.erase(ve.begin());//starting value will be deleted
    for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
    	cout<<"\n";
    ve.erase(ve.begin()+1);//to remove 2nd position element
    for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
      cout<<"\n";
    ve.erase(ve.begin()+1,ve.begin()+4);//to remove until 4th index
    for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
}  
