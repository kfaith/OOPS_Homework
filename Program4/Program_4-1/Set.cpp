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

//#include <iostream> 
//#include <set> 
//#include <iterator> 
//#include <chrono>
//
//using namespace std;
//
//int main()
//{
//   // empty set container 
//   set <int, greater <int> > KyleAndSam;
//
//   		for (int i = 0 ;KyleAndSam.size() < 10000; i++)
//   	{
//   			KyleAndSam.insert((rand() % 10000));
//   
//   	}
//
//   // printing set gquiz1 
//   set <int, greater <int> > ::iterator itr;
//
//   auto start1 = chrono::high_resolution_clock::now();  //for the pushing to front
//   KyleAndSam.find(420);
//   auto finish1 = std::chrono::high_resolution_clock::now();
//
//   std::chrono::duration<double> elapsed1 = finish1 - start1;
//   cout << "The search time is: " << elapsed1.count() << endl;
//
//
//
//   system("pause");
//   return 0;
//
//}