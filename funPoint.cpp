#include <stdio.h>
#include <iostream>
using namespace std;

int test(int a);

int main(int argc,char* argv[])    
{
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

int test(int a)
{
	return a;
} 
