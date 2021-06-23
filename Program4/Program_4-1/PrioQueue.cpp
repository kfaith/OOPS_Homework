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

// C++ program to illustrate Priority Queue (MaxHeap)
//#include <iostream>
//#include <queue>
//#include <chrono>
//
//using namespace std;
//
//int main()
//{
//
//   priority_queue <int> KyleAndSam;
//
//   auto start1 = chrono::high_resolution_clock::now();  
//   for (int index = 0; index < 10000; index++)
//   {
//   
//      KyleAndSam.push((rand() % 10000));
//
//   }
//   auto finish1 = std::chrono::high_resolution_clock::now();
//
//
//
//   std::chrono::duration<double> elapsed1 = finish1 - start1;
//   cout << "The sort time is: " << elapsed1.count() << endl;
//
//
//
//   system("pause");
//   return 0;
//
//}