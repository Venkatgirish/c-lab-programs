#include <bits/stdc++.h>
using namespace std;
 
// Function to print all the perfect
// squares from the given range
void perfectSquares(float l, float r)
{
 
    // For every element from the range
    for (int i = l; i <= r; i++) {
 
        // If current element is
        // a perfect square
        if (sqrt(i) == (int)sqrt(i))
            cout << i << " ";
    }
}
 
// Driver code
int main()
{
    int l , r ;
    cout<<"enter the lower range";
    cin>>l;
    cout<<"enter the upper range";
    cin>>r;
 
    perfectSquares(l, r);
 
    return 0;
}
