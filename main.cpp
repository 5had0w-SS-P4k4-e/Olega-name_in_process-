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
#define maxm 100 
#define minm 50
//ПОМЕНЯЙ НАЗВАНИЯ ПЕРЕМЕННЫХ!!!
void FormMatr (float AA[k][k], int nn, int mm) 
{ int i, j; 
for (i=0; i<nn; i++){ 
    for(j=0; j<mm; j++) 
    AA[i][j]=rand()%(maxm-minm);} 
} 

float SumMatr(float AA[k][k], int nn, int mm)
{ int i, j, sum = 0;
for(j=0;j<mm;j++){
    for (i = 0; i <= j; i++){
        sum += AA[i][j];
    };
    };
    return sum;
}


void PrintMatr(float AA[k][k],int nn,int mm) 
{ int i,j; 
for( i=0; i<nn; i++){ 
    for( j=0; j<mm; j++) 
    cout<<AA[i][j]<<"\t"; 
    cout<<endl;}
}

int main()
{
    float B[k][k];
    srand(time(NULL));
    FormMatr(B,k,k);
    PrintMatr(B,k,k);
    cout<<"\t"<<endl;
    float Sum;
    Sum=SumMatr(B,k,k);
    cout<<"Сумма чисел в верхнем треугольнике= "<<Sum<<endl;
    return Sum;
}
