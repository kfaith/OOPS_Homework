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
//
//
//#include <iostream>
//#include <deque>
//#include <chrono>
//
//using namespace std;
//
//
//
//
//
//int main()
//{
//   
//   int number = 26;
//   deque <int> KyleAndSam;
//  
//
//   for (int index = 0; index < 10000; index++)
//   {
//      KyleAndSam.push_back(number);
//
//   }
//
//   auto start1 = chrono::high_resolution_clock::now();  //for the pushing to front
//   KyleAndSam.push_front(number);
//   auto finish1 = std::chrono::high_resolution_clock::now();
//
//   std::chrono::duration<double> elapsed1 = finish1 - start1;
//   cout << "The front push time is: " << elapsed1.count() << endl;
//
//   auto start2 = chrono::high_resolution_clock::now();  //for the pushing to back
//   KyleAndSam.push_back(number);
//   auto finish2 = chrono::high_resolution_clock::now();
//      
//   chrono::duration<double> elapsed2 = finish2 - start2;
//   cout << "The back push time is: " << elapsed2.count() << endl;
//
//   auto start3 = chrono::high_resolution_clock::now();   //for the popping from front
//   KyleAndSam.pop_front();
//   auto finish3 = chrono::high_resolution_clock::now();
//      
//   chrono::duration<double> elapsed3 = finish3 - start3;
//   cout << "The pop front time is: " << elapsed3.count() << endl;
//
//   auto start4 = chrono::high_resolution_clock::now();   //for the popping from back
//   KyleAndSam.pop_back();
//   auto finish4 = chrono::high_resolution_clock::now();
//      
//   chrono::duration<double> elapsed4 = finish4 - start4;
//   cout << "The pop back time is: " << elapsed4.count() << endl;
//
//
//   system("pause");
//   return 0;
//
//}