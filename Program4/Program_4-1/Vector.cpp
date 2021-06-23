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

// C++ code to demonstrate the working of iterator
//#include<iostream>
//#include<iterator> // for iterators
//#include<vector> // for vectors
//#include<chrono>
//using namespace std;
//int main()
//{
//	vector<int> KyleAndSam;
//
//	// Declaring iterator to a vector
//	vector<int>::iterator ptr;
//
//
//
//		for (int index = 0; index < 10000; index++)
//	{
//			KyleAndSam.push_back((rand() % 10000));
//
//	}
//		auto start1 = chrono::high_resolution_clock::now();
//
//		// Check if element 420 exists in vector
//		std::vector<int>::iterator it = std::find(KyleAndSam.begin(), KyleAndSam.end(), 420);
//		auto finish1 = std::chrono::high_resolution_clock::now();
//
//		std::chrono::duration<double> elapsed1 = finish1 - start1;
//		cout << "The time to find number is: " << elapsed1.count() << endl;
//
//		if (it != KyleAndSam.end())
//			std::cout << "Element Found" << std::endl;
//		else
//			std::cout << "Element Not Found" << std::endl;
//
//	
//	//Just to hold the output screen from closing
//	system("pause");
//	return 0;
//}