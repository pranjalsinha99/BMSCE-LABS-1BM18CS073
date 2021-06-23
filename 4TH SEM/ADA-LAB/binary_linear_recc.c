#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear( int l,int arr[], int r, int x) 
{ 
    int time;
    clock_t startl,endl;
    startl=clock();
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
    endl=clock();
    time=(int)(endl-startl);
    printf("Time taken to linear Search : %d \n",time);
     return linear( l+1,arr, r-1, x); 
} 
  


int binarySearch(int arr[], int l, int r, int x) 
{ 
    clock_t startb,endb;
    int time;
    startb=clock();
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        
        if (arr[mid] == x)  
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x); 
  
        return binarySearch(arr, mid+1, r, x); 
   } 
  endb=clock();
  time=(int)(endb-startb);
    printf("Time taken to linear Search : %d \n",time);
   
   return -1; 
} 


void main(){
    int size,k,sr;
    int a[100];
    int bin,lea;
    printf("Enter size of array \n");
    scanf("%d",&size);
    printf("Enter %d elements in ascending order\n",size);
    for(k=0;k<size;k++)
        scanf("%d",&a[k]);

    printf("Enter element to search\n");
    scanf("%d",&sr);
    bin=binarySearch(a,0,size-1,sr);
    if(bin==-1)
        printf("Element not found\n");
    else
    {
        printf("Element found at index %d\n",bin);
    }
    lea=linear(0,a,size-1,sr);
    if(lea==-1)
        printf("Element not found\n");
    else
    {
        printf("Element found at %d\n",lea);
    }
    
}
