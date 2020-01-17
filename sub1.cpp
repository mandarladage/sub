#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(void) {
	int n,i,arr[1000],temp[2];
	cout<<"Welcome in array programm\n\n please enter the length of array: \n";
	cin>>n;
	cout<<"Please enter the array: \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	temp[0]=arr[0];
    temp[1]=arr[1];
    
	for(i=0;i<n-2;i++)
	{
		arr[i]=arr[i+2];
		}	
	
	
	
	arr[n-2]=temp[0];
	arr[n-1]=temp[1];	


	cout<<"Modified array: \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\n\nThank you!!!\n\nPlease visit again!!\n\n";
	
	return 0;
}
