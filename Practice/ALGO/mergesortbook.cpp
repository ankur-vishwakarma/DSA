#include <stdio.h>
#include <conio.h>
void merge(int a[], int, int, int,int);
void merge_sort(int a[],int, int,int);
main()
{
int  i, n;
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
int arr[n];
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
merge_sort(arr, 0, n-1,n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
getch();
}
void merge(int arr[], int beg, int mid, int end,int n)
{
int i=beg, j=mid+1, index=beg, temp[n], k;
while((i<=mid) && (j<=end))
{
if(arr[i] < arr[j])
{
temp[index] = arr[i];
i++;
}
else
{
temp[index] = arr[j];
j++;
}
index++;
}
if(i>mid)
{
while(j<=end)
{
	temp[index] = arr[j];
j++;
index++;
}
}
else
{
while(i<=mid)
{
temp[index] = arr[i];
i++;
index++;
}
}
for(k=beg;k<index;k++)
arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end,int n)
{
int mid;
if(beg<end)
{
mid = (beg+end)/2;
merge_sort(arr, beg, mid,n);
merge_sort(arr, mid+1, end,n);
merge(arr, beg, mid, end,n);
}
}
