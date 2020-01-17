#include<iostream>
using namespace std;

int rotat(int a[],int n,int rq)
{
  int temp[rq];int i,m=0;
 for(i=0;i<rq;i++)
 {
	temp[i]=a[i];
 }
  //cout<<"The temp= \n"<<temp;
  for(i=0;i<n;i++)
 {
  	a[i]=a[i+rq];
 }
  for(i=(n-rq);i<n;i++)
{
    a[i]=temp[m];
    m++;
}

return *a;
}









int main(void)
{
 int n,i,req;
 cout<<"lease enter the size of array: \n";
 cin>>n;
int a[n];
cout<<"please enter the array :\n"; 
for(i=0;i<n;i++)
{
 	cin>>a[i];
}
cout<<"please enter the rotation length:\n";
cin>>req;
rotat(a,n,req);
cout<<"The modified array is:\n";
for(i=0;i<n;i++)
{
 	cout<<a[i]<<"\n";
}


return 0;
  
}

