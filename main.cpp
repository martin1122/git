#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int a[] = {1,2,3,4,5};
do
{
cout << a[0] << " " << a[1] <<  " " <<  a[2] <<  " " <<  a[3] <<  " " <<  a[4] <<  endl;
}while (next_permutation(a,a+5));
return 0;
}