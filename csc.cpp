#include<bits/stdc++.h>
using namespace std;
int Gcd(int a,int b)
{
	if(b==0) return a;
	else return Gcd(b,a%b);
}
int main()
{
	int n; 
	vector<int> ve;
	while(cin>>n)
	{
		ve.push_back(n);
	}
	n=ve.size();
	int d=abs(ve[1]-ve[0]),res=0;
	if(d==0)
	{
		cout<<"0";
		return 0;
	}
	for(int i=2;i<n;i++)
	{
		//cout<<"1";
	    int m1=min(d,abs(ve[i]-ve[i-1]));
	    int m2=max(d,abs(ve[i]-ve[i-1]));
	    if(m2%m1==0) d=m1;
	    else {
	    	d=Gcd(m1,m2);
		}
	}		
	//cout<<d<<" ";
	for(int i=1;i<n;i++)
	{
		res+=(abs(ve[i]-ve[i-1])/d-1);
		}	
		cout<<res;
}
