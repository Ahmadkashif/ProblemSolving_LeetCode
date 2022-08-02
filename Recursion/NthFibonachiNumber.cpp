#include <iostream>

using namespace std;

int main(){
    return 0;
}

int fibonacci(int n) {

  // Base Case
  if (n == 0) {
    return 0;
  } 
  else if (n == 1) {
    return 1;
  }

  // Recursive Case
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
  
}