#include <iostream>
#include <time.h>
using namespace std;

int main() {
  int i,j,n;
  double sum,add;
  
  clock_t start = clock();
  
  n=100000;
  sum=0;
  add=1;
  
  for (i=1; i<=n; i++){
    for (j=1; j<=n; j++) {  
      sum+=add;    
    }    
  }    
  
  clock_t end = clock();
  
  double elapsed = double(end - start)/CLOCKS_PER_SEC;
  
  cout << sum << endl;
  cout << "CPU TIME (IN SECONDS): " << elapsed << endl;
    
return 0;
}
