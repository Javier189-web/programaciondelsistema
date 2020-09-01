#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
const int n = 10;
int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

for(int i = 0; i < n; i++)
cout << A[n - i -1] << "\t";

return 0;
}