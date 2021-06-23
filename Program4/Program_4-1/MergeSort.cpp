//---------------------------------------------------------------------
//
// Name:    Kyle Faith and Sam Dawson
//
// Course:  CS 2630, Section 2, Spring 2020
//
// Purpose: To understand STL algorithms and data structures and their
//          time complexities.
//
// Output:  The only output is the amount of time each file takes.
//---------------------------------------------------------------------

// C program for Merge Sort
//
//#include<stdlib.h> 
//#include<stdio.h> 
//#include<chrono>
//#include<iostream>
//
//using namespace std;
//
//// Merges two subarrays of arr[]. 
//// First subarray is arr[l..m] 
//// Second subarray is arr[m+1..r] 
//void merge(int arr[], int l, int m, int r)
//{
//	int i, j, k;
//	int n1 = m - l + 1;
//	int n2 = r - m;
//
//	// create temp arrays
//	int L[10000], R[10000];
//
//	// Copy data to temp arrays L[] and R[] 
//	for (i = 0; i < n1; i++)
//		L[i] = arr[l + i];
//	for (j = 0; j < n2; j++)
//		R[j] = arr[m + 1 + j];
//
//	// Merge the temp arrays back into arr[l..r]
//	i = 0; // Initial index of first subarray 
//	j = 0; // Initial index of second subarray 
//	k = l; // Initial index of merged subarray 
//	while (i < n1 && j < n2)
//	{
//		if (L[i] <= R[j])
//		{
//			arr[k] = L[i];
//			i++;
//		}
//		else
//		{
//			arr[k] = R[j];
//			j++;
//		}
//		k++;
//	}
//
//	// Copy the remaining elements of L[], if there   are any
//	while (i < n1)
//	{
//		arr[k] = L[i];
//		i++;
//		k++;
//	}
//
//	// Copy the remaining elements of R[], if there  are any 
//	while (j < n2)
//	{
//		arr[k] = R[j];
//		j++;
//		k++;
//	}
//}
//
//// l is for left index and r is right index of thesub-array of arr to be sorted
//void mergeSort(int arr[], int l, int r)
//{
//	if (l < r)
//	{
//		// Same as (l+r)/2, but avoids overflow for 
//		// large l and h 
//		int m = l + (r - l) / 2;
//
//		// Sort first and second halves 
//		mergeSort(arr, l, m);
//		mergeSort(arr, m + 1, r);
//
//		merge(arr, l, m, r);
//	}
//}
//
//// UTILITY FUNCTIONS
//// Function to print an array
//void printArray(int A[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", A[i]);
//	printf("\n");
//}
//
//// Driver program to test above functions
//int main()
//{
//	int array[10000];
//
//	for (int index = 0; index < 10000; index++)
//	{
//		array[index] = rand() % 10000;
//
//	}
//
//	int arr_size = sizeof(array) / sizeof(array[0]);
//
//	   auto start1 = chrono::high_resolution_clock::now();  
//		mergeSort(array, 0, arr_size - 1);
//		auto finish1 = std::chrono::high_resolution_clock::now();
//
//
//
//   std::chrono::duration<double> elapsed1 = finish1 - start1;
//	cout << "The sort time is: " << elapsed1.count() << endl;
//
//
//
//	system("pause");
//	return 0;
//}