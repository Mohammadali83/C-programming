#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;1<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1||i==4||j==1||j==7){
			cout<<"*";}
			else{
			cout<<" ";}
		}
	}
		cout<<"\n";
}
