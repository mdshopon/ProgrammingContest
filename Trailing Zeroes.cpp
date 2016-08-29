#include <iostream>
using namespace std;

// Function to return trailing 0s in factorial of n
long long  findTrailingZeros(long long   n)
{
    // Initialize result
    long long count = 0;

    // Keep dividing n by powers of 5 and update count
    for (long long int i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}

// Driver program to test above function
int main()
{
    long long  n ;
    while(cin>>n){
    cout << "Count of trailing 0s in " << n
         << "! is " << findTrailingZeros(n);
    cout<<endl;
    }
    return 0;
}
