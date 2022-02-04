//print   nth fibonacci number
#include <iostream>
using namespace std;
void f(int n)
{    
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    
    for(int i=2 ;i<=n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    
     
        cout<<arr[n];
    
    
}
int main() {
    /* f(n) = f(n-1) + f(n-2) 
        0 1 1 2 3 5 8 13 21 34 ..
        0 and 1 are seed elements */
        
        int n;
        cin>>n;
        f(n);
        
      
	// your code goes here
	return 0;
}
