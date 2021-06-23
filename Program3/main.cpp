//---------------------------------------------------------------------
// Name:    Kyle Faith
//
// Course : CS 2630, Section 02, 2020
//
// Purpose: Usage of recursive functions to summate the fibonacci sequence.
//
// Input:   Amount of 'n' Fibonacci numbers
//
// Output:  Sum of every fibonacci number starting from 0, until the nth
//          number.
//---------------------------------------------------------------------
#include <iostream>
using namespace std;

//---------------------------------------------------------------------
// This function returns the x value of the fibonacci sequence, and every
// value prior to it as well.(Only because it prints out every x value
// along the way due to recursion)
//---------------------------------------------------------------------
int fibonacciSeq(int x)
{
      if ((x == 1) || (x == 0)) 
      {
         return(x);
      }
      else 
      {
        return(fibonacciSeq(x - 1) + fibonacciSeq(x - 2));
      }
}

//---------------------------------------------------------------------
// This function recieves the values from the previous function, and 
// summates them into one value called "sum"
//---------------------------------------------------------------------
int calcSum(int x)
{
   int sum = 0;
   for (int index = 0; index <= x; index++)
      sum += fibonacciSeq(index);

   return sum;
}

//---------------------------------------------------------------------
// The main function asks for the number of terms, and once given, 
// calls the calcSum() function. The main runs until the user gives "-1"
// as the number of terms.
//---------------------------------------------------------------------
int main()
{
   int x = 0;
   while (x != -1)
   {
      cout << "Enter the number of terms: ";
      cin >> x;
      cout << "\nSum: ";
      cout << calcSum(x) << "\n\n";
   }
}