#include <stdio.h>
#include <iostream>
using namespace std;

int test(int a);  
  
int main(int argc,char* argv[])    
{  
    cout<<test<<endl;  
    typedef int (*fp)(int a);//注意,这里不是生命函数指针,而是定义一个函数指针的类型,这个类型是自己定义的,类型名为fp  
    fp fpi;//这里利用自己定义的类型名fp定义了一个fpi的函数指针!  
    fpi=test;  
    cout<<fpi(5)<<"|"<<(*fpi)(10)<<endl;  
    return 0;  
}  
  
int test(int a)  
{  
    return a;  
} 
