
#include <math.h> 
#include <stdio.h> 
#include<time.h>  

void insertionSort(int arr[], int n) 
{ 
    int time;
    clock_t startl,endl;
    startl=clock();
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
        endl=clock();
    time=(int)(endl-startl);
    printf("Time taken to Insertion sort : %d \n",time);
} 
  

void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  

int main() 
{ 
    int arr[100],n,i;
    printf("Enter Size of array \n");
    scanf("%d",&n);
    printf("Enter elements of the array \n");
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 
