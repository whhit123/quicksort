#include <iostream>


using namespace std;


void Quick(int* A,int start,int end) {
    if (start >= end) return;
    else {
        int i = start,j = end;
        int base = A[i];
        while (i < j) {
            while (i < j && A[j] > base) j--;
            if (i < j) {
                A[i] = A[j];
                i++;
            }
            while (i < j && A[i] < base) i++;
            if (i < j) {
                A[j] = A[i];
                j--;
            }
        }
        A[i] = base;
        Quick(A,start,i - 1);
        Quick(A,i + 1,end);
    }
}

int* quickSort(int* A, int n) {
    // write code here
    Quick(A,0,n-1);
    return A;
}

int main(void)
{
	int a[10] = {1,5,2,3,4,1,3,8,3,2};
	int *b;

	b = quickSort(a,10);
	int c;
	int i = 0;
	while(i<10)
		cout<<b[i++]<<endl;

	return 0;

}

