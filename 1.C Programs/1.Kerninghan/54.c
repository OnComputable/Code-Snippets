#include<stdio.h>

int binsearch(int x,int v[],int n)
{
 int low,high,mid;

 low=0;
 high=n-1;
 while (low <=high){
	mid = (low+high)/2;
	if(x<v[mid])
		high = mid + 1;
	else if(x>v[mid])
		low = mid + 1;
	else
		return mid;
 
 }
 return -1;
}
main()
{
i  int x=2,n=4;
  int v[]={1,2,3,4,5};
  binsearch(x,v[],n);

 return 0;
}


