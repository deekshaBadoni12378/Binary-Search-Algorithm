
#include <iostream>
#include<conio.h>
using namespace std;
int binarySearch(int arr[], int a, int b, int c)
{
	if (b >= a) {
		int mid = a + (b - a) / 2;
        if (arr[mid] == c)
			return mid;
         if (arr[mid] > c)
			return binarySearch(arr, a, mid - 1, c);
           return binarySearch(arr, mid + 1, b, c);
           }
               return -1;
               }
    int main()
{
	int arr[] = { 18, 20, 12, 11, 14 };
	int c = 12;
	int n = sizeof(arr) / sizeof(arr[0]);
	int Ans = binarySearch(arr, 0, n - 1, c);
	(Ans == -1)
		? cout << "Element is not present"
		: cout << "Element is present at index " << Ans;
	return 0;
}
