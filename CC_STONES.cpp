#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string jewel,stone;
		cin>>jewel>>stone;
		int j,k,p=0;
		for(j=0;stone[j]!='\0';j++)
		{
			for(k=0;jewel[k]!='\0';k++)
			{
				if(stone[j]==jewel[k])
				{
					p++;
					break;
				}
			}
		}
		cout<<p<<endl;
	}
}
