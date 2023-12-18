#include <iostream>
using namespace std;

void bubblesort(int arr[],int size)
{
	for(int i=0 ;i<size ;i++)
	{
		for(int j=0; j<size-1-i ;j++)
		{
			if(arr[j+1]<arr[j])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
}

	//METHOD 2
void bubblesort(int arr[],int size)
{
    for(int i=0 ;i<size ;i++)
    {
        for(int j=i; j<size ;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
}


//best case time complexity  is O(n) 
// worst case is O(n^2)
//slow for large data 

