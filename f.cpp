#include <iostream>
using namespace std;
unsigned long long fib(int n){
  if (n <0 ){
    return 0;
  }
  if (n < 3){
    return 1;
  }
  int n1 =  1;
  int n2 =  2;
  int temp = 0;
  for (int i =3 ; i <= n; i++){
temp = n1 +n2;
  n2 = n1; 
    n1 = temp;
    
  }
  return temp;
}
int main (int argc, char *argv[]) {
  cout << fib(5);
  return 0;
}
