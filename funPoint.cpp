#include <stdio.h>
#include <iostream>
using namespace std;

int test(int a);  
  
int main(int argc,char* argv[])    
{  
    cout<<test<<endl;  
    typedef int (*fp)(int a);//ע��,���ﲻ����������ָ��,���Ƕ���һ������ָ�������,����������Լ������,������Ϊfp  
    fp fpi;//���������Լ������������fp������һ��fpi�ĺ���ָ��!  
    fpi=test;  
    cout<<fpi(5)<<"|"<<(*fpi)(10)<<endl;  
    return 0;  
}  
  
int test(int a)  
{  
    return a;  
} 
