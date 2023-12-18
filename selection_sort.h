#include <iostream>
using namespace std'

void selectionsort(int arr[],int size)
{
	int rightmost=size-1;
	int max_index=0;
	
	for(rightmost ;rightmost>=0 ;rightmost--)
	{
		max_index=0;
		for(int i=1; i<rightmost;i++)
		{
			if(arr[max_index]<arr[i])
				max_index=i;
			if(arr[rightmost]<arr[max_index])
			{
				int temp=arr[rightmost];
				arr[rightmost]=arr[max_index];
				arr[max_index]=temp;
			}
		}
	}
}

//best + worst + avg case time complexity if O(n^2) 
