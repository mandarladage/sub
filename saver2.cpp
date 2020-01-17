#include<iostream>
using namespace std;


int rotatl(int a[],int n,int rq)
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












int rotatr(int a[],int n,int rq)
{
	rq=(-rq);
  int temp[rq];int i,m=0;
  for(i=(n-1);i>((n-1)-rq);i--)
  {
  	temp[m]=a[i];
  	m++;
  }
  
  for(i = (n-1);i > (rq-1); i--)
  {
  	a[i]=a[i-rq];
  }
  
  for(i=0;i<rq;i++)
  {
  	a[i]=temp[m-1];
  	m--;
  	
  	
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
cout<<"req="<<(req%n);

if(req==0)
goto l1;
if(req>0)
rotatl(a,n,(req%n));
if(req<0)
rotatr(a,n,(req%n));
l1:cout<<"The modified array is:\n";
for(i=0;i<n;i++)
{
 	cout<<a[i]<<"\n";
}


return 0;
  
}
