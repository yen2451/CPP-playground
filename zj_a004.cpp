#include<iostream>

using namespace std;
int main()
{
	int a;
	cin>>a;
	while(cin){
		if (a%400==0)
		{cout<<"�|�~"<<endl;}
		else if(a%4==0&&a%100!=0)
		{cout<<"�|�~"<<endl;}
		else if(a%4!=0)
		{cout<<"���~"<<endl;}
		else if(a%100==0&&a%400!=0)
		{cout<<"���~"<<endl;}
		cin>>a;}
 
  //system("pause");
  return 0;
}