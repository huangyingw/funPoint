#include <stdio.h>
#include <iostream>
using namespace std;
int test(int a);
/*
int main(int argc,char* argv[])  {
  return 0;
}
*/
int test(int a) {
  return a;
} 
class A {
  public:
  int fun1(int i) {
  return i;
  };
};
template <class T>
void fun2(int j,T *obp,int (T::*p)(int)) {
  cout<<(obp->*p)(j)<<endl;
}
void fun2(int j,int (*p)(int)) {
  cout<<p(j)<<endl;
}
int fun3(int i) {
  return i;
}
int main() {
  int (A::*fp1)(int);
  fp1=&A::fun1;
  A oba;
  A *obap=&oba;
  int i=1;
  fun2(i,obap,fp1);
  fun2(i,fun3);
  cout<<test<<endl;  
  typedef int (*fp)(int a);
  fp fpi;
  fpi=test;
  cout<<fpi(5)<<"|"<<(*fpi)(10)<<endl;
  int (*myp)(int a);
  myp=test;
  cout<<myp(100)<<endl;
  return 0;
}
