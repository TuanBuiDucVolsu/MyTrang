#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
void Nhap(int a[][100],int m,int n);
void Xuat(int a[][100],int m,int n);
void Chen(int a[][100],int m,int n,int d);
int main(int argc, char** argv) {
	int a[100][100];
	int m,n,d;
	cout<<"Nhap so hang :";
	cin>>m;
	cout<<"Nhap so cot :";
	cin>>n;
	cout<<"Ma tran la : "<<endl;
	Nhap(a,m,n);
	Xuat(a,m,n);
	Chen(a,m,n,d);
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
void Chen(int a[][100],int m,int n,int d)
{
	int i,j;
	cout<<"\nNhap hang can chen:d =";
	cin>>d;
    for(i = m;i>d-2;i--)
    {
    for(j = 0 ;j < n ; j++)
    {
     a[i+1][j]=a[i][j];
    }
    }
cout<<"\nnhap thanh phan cua hang can chen\n";

    for(j = 0;j < n;j++)
   {
    cout<<"a["<<d-1<<"]["<<j<<"]=";
     cin>>a[d-1][j];
   }
    for(i = 0;i<m+1;i++)
    {
     for(j=0;j<n;j++)
     cout<<setw(9)<<a[i][j];
     cout<<endl;
   }
} 
