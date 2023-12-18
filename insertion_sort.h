#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
	int i=0,j=0;
	for(i=1; i<size ;i++)
	{
	
		int temp=arr[i];
		for(j=i ;j>0 && temp<arr[j-1];j--)
		{
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	} 
}
