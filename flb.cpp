#include<vector>
using namespace std;
    int fib(int n) {
    
vector<unsigned long long> f;
  f.push_back(0);
  f.push_back(1);
if (n == 0){
    return 0;
  }
  if (n ==1 || n ==2 ){
    return 1;
  }
   unsigned long long a ;
for(unsigned long long i = 1; i < n; i++ ){
   a = f[i] + f[i-1];
   f.push_back(a);
  }
  n = a;
  return n;
}

