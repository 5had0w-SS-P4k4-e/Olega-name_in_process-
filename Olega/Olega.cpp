#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
#include <string> 
#include <ctime> 
#include <fstream> 
#include <conio.h> 
#include <cmath> 
using namespace std;
#define k 3
#define max_num 100 
#define min_num 50

void FormMatr(float Matrix[k][k], int nn, int mm)
{
    int i, j;
    for (i = 0; i < nn; i++) {
        for (j = 0; j < mm; j++)
            Matrix[i][j] = rand() % (max_num - min_num);
    }
}

float SumMatr(float Matrix[k][k], int nn, int mm)
{
    int i, j, sum = 0;
    for (j = 0; j < mm; j++) {
        for (i = 0; i <= j; i++) {
            sum += Matrix[i][j];
        };
    };
    return sum;
}


void PrintMatr(float Matrix[k][k], int nn, int mm)
{
    int i, j;
    for (i = 0; i < nn; i++) {
        for (j = 0; j < mm; j++)
            cout << Matrix[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    float B[k][k];
    srand(time(NULL));
    FormMatr(B, k, k);
    PrintMatr(B, k, k);
    cout << "\t" << endl;
    float Sum;
    Sum = SumMatr(B, k, k);
    cout << "sum of hier triangle =  " << Sum << endl;
    return Sum;
}
