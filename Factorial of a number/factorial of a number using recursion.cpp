#include <iostream>
using namespace std;
int factorial(int n)
{   if(n==0||n==1)
    {
        return 1;
    }
    int result=1;
    result=factorial(n-1)*n;
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
