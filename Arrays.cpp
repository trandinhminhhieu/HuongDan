//Van Minh Hieu 25211211782
//09/9/2020
#include <iostream>
#include <conio.h>
#define MAX 100
using namespace std;
void Nhap(int a[], int &n)
{
	do {
		cout<<"Nhap so luong phan tu: ";cin>>n;
		if (n>0)
			break;
		else cout<<"NHAP SAI. ";
	}
	while(true);
	for (int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i=0;i<n;i++)
		cout<<a[i]<<"   ";
	cout<<endl;
}
bool KTSnt(int n)
{
	if(n<2)
		return false;
	if (n==2);
		return true;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}
int Max(int a[], int n)
{
    int max=a[0];
    for(int i=1; i<n; i++)
        if(max<a[i])
            max=a[i];
    return max;
}
void Xoa(int a[], int &n, int vt)
{
	for(int i=vt;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}
void XoaSNT(int a[], int &n)
{
	for(int i=0;i<n;i++)
		if(KTSnt(a[i])==true)
		{
			Xoa(a,n,i);
			i++;
		}
}


main()
{
    int mang[100];
    int cd;
    Nhap(mang, cd);
    cout<<"Mang sau khi nhap: ";
    Xuat(mang, cd);
    cout<<"Mang sau khi xoa SNT: ";
    XoaSNT(mang,cd);
    Xuat(mang, cd);
    int vtmax=Max(mang,cd);
    cout<<"Mang sau khi xoa so lon nhat: ";
    Xoa(mang,cd,vtmax);
    Xuat(mang, cd);
    int x;
    cout<<"Nhap vi tri muon xoa: ";
    cin>>x;
    cout<<"Mang sau khi xoa: ";
    Xoa(mang,cd,x);
    Xuat(mang, cd);
}
