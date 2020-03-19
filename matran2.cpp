#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
void Nhap(int a[][100],int m,int n);
void Xuat(int a[][100],int m,int n);
int tinhtong(int a[][100],int m,int n);

int main(int argc, char** argv) {
	int a[100][100];
	int m,n;
	cout<<"Nhap so hang :";
	cin>>m;
	cout<<"Nhap so cot :";
	cin>>n;
	cout<<"Ma tran la : "<<endl;
	Nhap(a,m,n);
	Xuat(a,m,n);
	tinhtong(a,m,n);
	return 0;
}
void Nhap(int a[][100], int m, int n)
{
	int i, j;
    srand(time(NULL));
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
        	int dau = rand()&1 ?  -1 : 1;
            a[i][j]= dau * rand()%19 +1;
            
        }
}
void Xuat(int a[][100], int m, int n)
{
	int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        cout<<a[i][j]<<setw(9);
        cout<<"\n";
    }
}
int tinhtong(int a[][100],int m,int n)
{
	int i,j,indexMinElem = 0, minElem = 0;;
    for (i = 0; i < m; i++)
    {
    	int sum = 0;
    	indexMinElem = 0;  
        minElem = a[i][indexMinElem];
        for (j = 0; j < n; j++)
        {
        	if(a[i][j] > 0)
            {
         	  sum += a[i][j];
		    }
        	if (a[i][j] <= minElem)   
            {
                indexMinElem = j;   
                minElem = a[i][indexMinElem]; 
            }
		}
		cout<<"\nTong cac phan tu duong hang thu "<<i<<" : "<<sum;	   
		a[i][n-1] = sum; 
		a[i][indexMinElem] = sum; 
    }
    cout<<"\nMa tran sau la :\n";
        for (i = 0; i < m; i++)
         {
            for (j = 0; j < n; j++)
            cout<<a[i][j]<<setw(9);
            cout<<"\n";
         }
}

