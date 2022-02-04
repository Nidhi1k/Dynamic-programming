 
#include <iostream>
using namespace std;
int factorial(int n)
{   if(n==0)
    {
        return 1;
    }
    int result=1;
    for(int i=1;i<=n;i++)
    {
         result*=i;
    }
return result;
}
int main() {
    /*factorial of a number
    n! = n*(n-1)*.........*3*2*1
    */
        int n;
        cin>>n;
       int result = factorial(n);
       cout<<result;
        
         
	return 0;
}
