/*Quick sort is the fastest, but it is not always O(N*log N), as there are worst cases where it becomes O(N2).
Quicksort is probably more effective for datasets that fit in memory. For larger data sets it proves to be inefficient so algorithms like merge sort are preferred in that case.
Quick Sort is an in-place sort (i.e. it doesn’t require any extra storage) so it is appropriate to use it for arrays.*/
#include <iostream>
using namespace std;
int divide(int arr[], int low, int high)
{
    int i = low - 1;
    float c = arr[high];        //this is the last index of the array (value of salary )

    for (int j = low; j <= high-1; j++)
    {
        if (c >= arr[j])        //checks if the slary at position j is less than the max index salary 
        {
            i++;
            int temp = arr[i];        //swapping 
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    float temp = arr[i + 1];        //swapping current i index with the max array 
    arr[i + 1] = arr[high];
    arr[high] = temp;
    i += 1;
    return i ;
}
void iterativeQuickSortEmployees(int arr[], int size)
{
    int* a_stack = new int[size];
    int top = -1;
    
    a_stack[++top] = 0;
    a_stack[++top] = size - 1;

    while (top >= 0)
    {
        int high = a_stack[top--];
        int low = a_stack[top--];

        int num = divide(arr, low, high);    //pivot index

        if (low<num-1)
        {
            a_stack[++top] = low;
            a_stack[++top] = num - 1;
        }

        if (high>num + 1 )
        {
            a_stack[++top] = num + 1;
            a_stack[++top] = high;
        }
    }
}

int main()
{
  int p[]={10,20,11,3,1,5,2};
  int size = sizeof(p)/sizeof(p[0]);
  iterativeQuickSortEmployees(p, size);
  
}

