#ifndef Soundex_h
#define Soundex_h

class Fibonacci
{
 public:
  int nthFib(int n) {
    int lastTwo[2] = {0, 1};
    int counter = 3;
    while (counter <= n){
      int next = lastTwo[0] + lastTwo[1];
      lastTwo[0] = lastTwo[1];
      lastTwo[1] = next;
      counter += 1;
    }
    if (n > 1) return lastTwo[1];
    return lastTwo[0];
  }
};

#endif
  
