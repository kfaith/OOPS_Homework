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

//// C++ implementation of QuickSort 
//#include <iostream> 
//#include <chrono>
//using namespace std;
//
//// A utility function to swap two elements  
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//// This function takes last element as pivot, places
////the pivot element at its correct position in sorted
////array, and places all smaller (smaller than pivot)
////to left of pivot and all greater elements to right
////of pivot
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[high]; // pivot  
//	int i = (low - 1); // Index of smaller element  
//
//	for (int j = low; j <= high - 1; j++)
//	{
//		// If current element is smaller than the pivot  
//		if (arr[j] < pivot)
//		{
//			i++; // increment index of smaller element  
//			swap(&arr[i], &arr[j]);
//		}
//	}
//	swap(&arr[i + 1], &arr[high]);
//	return (i + 1);
//}
//
//// The main function that implements QuickSort
////arr[] --> Array to be sorted,
////low --> Starting index,
////high --> Ending index
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		// pi is partitioning index, arr[p] is now
//		//at right place
//		int pi = partition(arr, low, high);
//
//		// Separately sort elements before  
//		// partition and after partition  
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//// Function to print an array
//void printArray(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//
//// Driver Code 
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
//
//
//
//	int n = sizeof(array) / sizeof(array[0]);
//
//	auto start1 = chrono::high_resolution_clock::now();
//	quickSort(array, 0, n - 1);
//	auto finish1 = std::chrono::high_resolution_clock::now();
//
//
//	std::chrono::duration<double> elapsed1 = finish1 - start1;
//	cout << "The sort time is: " << elapsed1.count() << endl;
//
//	system("pause");
//	return 0;
//}