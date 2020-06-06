#ifndef Soundex_h
#define Soundex_h

class Fibonacci
{
 public:
  int nthFib(int n) {
    if (n > 2) {
      return nthFib(n-1) + nthFib(n-2);
    } else if (n == 1){
      return 0;
    } else {
    return 1;
    }
  }
};

#endif
  
