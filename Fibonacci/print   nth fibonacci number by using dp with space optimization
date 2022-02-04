//print   nth fibonacci number by using dp with space optimization
#include <iostream>
using namespace std;
int f(int n)
{
    if(n==0)
{
    return 0;
}
if(n==1)
{
    return 1;
}
int c,a=0,b=1;
for(int i=2;i<=n;i++)
{
   c=a+b;
   a=b;
   b=c;
}
return b;

}
int main() {
    /* f(n) = f(n-1) + f(n-2) 
        0 1 1 2 3 5 8 13 21 34 ..
        0 and 1 are seed elements */
        
        int n;
        cin>>n;
        int fib = f(n);
        cout<<fib;
      
	// your code goes here
	return 0;
}
