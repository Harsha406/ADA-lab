#include <stdio.h>
int RecursiveLS(int arr[], int value, int index, int n)
{
    int pos = 0;
 
    if(index >= n)
    {
        return 0;
    }
 
    else if (arr[index] == value)
    {
        pos = index + 1;
        return pos;
    }
 
    else
    {
        return RecursiveLS(arr, value, index+1, n);
    }
    return pos;
}
 int binarySearch(int arr[], int low, int high, int x)
{
   
    if (low > high) {
        return -1;
    }
 
  
 
    int mid = (low + high)/2;   
    
 
    if (x == arr[mid]) {
        return mid;
    }
 
   
    else if (x < arr[mid]) {
        return binarySearch(arr, low, mid - 1, x);
    }
 
  
    else {
        return binarySearch(arr, mid + 1, high, x);
    }
}
int main()
{
    int n, value, pos, arr[100],choice;
    for(;;)
	{
printf("\n1:linear search\n2:binary search\n");
printf("enter choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
    printf("Enter the total elements in the array:\n");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
 
    pos =  RecursiveLS(arr, value, 0, n);
    if (pos != 0)
    {
        printf("Element found at pos %d ", pos);
    }
    else
    {
        printf("Element not found");
    }
    break;
    case 2:printf("Enter the total elements in the array:\n");
    scanf("%d", &n);
 
    printf("Enter the array elements in sorted way\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search:\n");
    scanf("%d", &value);
    int low = 0, high = n - 1;
     int index = binarySearch(arr, low, high, value);
 
    if (index != -1) {
        printf("Element found at pos %d\n", index+1);
    }
    else {
        printf("Element not found in the array\n");
    }
    break;
    
    return 0;
}
}
}