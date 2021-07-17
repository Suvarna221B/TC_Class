#include<iostream>
using namespace std;

void myFunction(string country = "Norway",int i) {
  cout << country <<":"<<i<< "\n";
}

int main() {
  myFunction("Sweden",1);
  myFunction("India",3);
  myFunction(1);
  myFunction("USA",4);
  return 0;
}

// Sweden
// India
// Norway
// USA