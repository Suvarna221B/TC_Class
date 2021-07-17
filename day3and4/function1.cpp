#include <iostream>
using namespace std;
 
// function declaration (show without too)
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int ret;
 
   // calling a function to get max value.
   ret = max(10, 20);
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

