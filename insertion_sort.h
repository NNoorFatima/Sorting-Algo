#include <iostream>
using namespace std;

/*If the data is nearly sorted or when the list is small as it has a complexity of O(N2) and if the list is sorted a minimum number of elements will slide over to insert the element at its correct location.
This algorithm is stable and it has fast running case when the list is nearly sorted.
The usage of memory is a constraint as it has space complexity of O(1).*/
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
