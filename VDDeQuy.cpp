#include <iostream>
//de quy
int Tong(int s)
{
	if(s==1)
		return 1;
	return s+Tong(s-1);
}
//giai thua
int GiaiThua(int n)
{
	if(n==1)
		return 1;
	return n*GiaiThua(n-1);
}
//1^2+2^2+3^2+⋯+𝑛^2
int TongBinhPhuong(int s)
{
	if(s==1)
		return 1;
	return (s*s)+TongBinhPhuong(s-1);
}
//1+1/2+1/3+⋯+1/𝑛
float TongChia(int s)
{
	if(s==1)
		return 1;
	return (float)1/s+TongChia(s-1);
}
int USCLN(int a,int b)
{
	
	if(a*b==0)
		return a+b;
	else
		return(b,a%b);
}
int USCLN_ko_de_quy(int a,int b)
{
/*	if(a==0||b==0)
		return a+b;
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;*/
	
	while(a*b!=0)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a+b;
}
//Tính S(n)=1+3+5+…+(2.n+1) với n>=0
int TongLe(int n)
{
	if(n==0)
		return 1;
	return (2*n+1)+TongLe(n-1);
}
int TongLe_khong_ko_de_quy(int n)
{
	int s=0;
	for(int i=0;i<=n;i++)
		s=s + (2*i+1);
	return s;
}
void XuatChan(int a[],int n)
{
	if(n==0)
		return;
	XuatChan(a,n-1);
	if(a[n-1]%2==0)
		printf("%5d",a[n-1]);
}
/*void XuatDayLe(int a[],int n)
{
	if(n==0)
		return;
	if(a[n-1]%2!=0)
		printf("%5d",a[n-1]);
	XuatDayLe(a,n-1);
}*/
/*void XuatDayLe(int a[],int n)
{
	if(n==0)
		return;
	XuatDayLe(a,n-1);
	if(a[n-1]%2!=0)
		printf("%5d",a[n-1]);
	
}*/
void XuatDayLe(int a[],int n)
{
	if(n>0)
	{
		XuatDayLe(a,n-1);
		if(a[n-1]%2!=0)
			printf("%5d",a[n-1]);		
	}
}
int TongMangLe(int a[],int n)
{
	if(n==0)
		return 0;
	if( a[n-1]%2 != 0)
		return a[n-1]+TongMangLe(a,n-1);
	return 0+TongMangLe(a,n-1);
}
int TongDay(int a[],int n)
{
	if(n==1)
		return a[0];
	return a[n-1]+TongDay(a,n-1);
}
//Viết hàm nhập mảng
void NhapMang(int a[],int n)
{
	/*if(n>0)
	{
		NhapMang(a,n-1);
		printf("Nhap phan tu thu %d: ",n);
		scanf("%d",&a[n-1]);	
	}*/
	if(n==0)
		return;
	NhapMang(a,n-1);
	printf("Nhap phan tu thu %d: ",n);
	scanf("%d",&a[n-1]);	
}
//Viết hàm tìm vị trí xuất hiện cuối cùng của phần tử có giá trị x (nếu có) 
int TimXCuoi(int a[],int n,int x)
{
	if(n<=0)
		return -1;
	if(a[n-1]==x)
		return n-1;
	else
		return TimXCuoi(a,n-1,x);
}
//Viết hàm tìm vị trí phần tử có giá trị lớn nhất
int TimMax(int a[],int n)
{
	if(n==1)
		return a[0];
	int temp=TimMax(a,n-1);
	if(a[n-1]>temp)
		return a[n-1];
	else
		return temp;
}
int TimMin(int a[],int n)
{
	if(n==1)
		return a[0];
	int temp=TimMin(a,n-1);
	if(a[n-1]<temp)
		return a[n-1];
	else
		return temp;
}
int TimvtMax(int a[],int n)
{
	if(n==1)
		return 0;
	int temp=TimMax(a,n-1);
	if(a[n-1]>temp)
		return n-1;
	else
		return temp;
}

//Viết hàm tìm vị trí xuất hiện đầu tiên của phần tử có giá trị x (nếu có)

int FiBoNaCi(int n)
{
	if(n<2)
		return 1;
	return FiBoNaCi(n-1)+FiBoNaCi(n-2);
}
//de quy phi tuyen
//S(1)=1
//S(n)=S(1)+S(2)+S(3)+...+S(n-1)
int s(int n)
{
	if(n==1)
		return 1;
	int temp=0;
	for(int i=1;i<n;i++)
		temp=temp+s(i);
	return temp;
	 
}
//X0 = 1.
//Xn = n2X0 +(n-1)2X1+..+22Xn-2 +12Xn-1

int TinhX(int n)
{
	if(n==1)
		return 1;
	else
	{
		int tong =0;
		for(int i=0;i<n;i++ )
			tong=tong+(n-1)*(n-1)+TinhX(i);
		return tong;
	}
	
}
int main()
{
/*	int n,a,b;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("\nTong %d",Tong(n));
	printf("\nGiai thua %d",GiaiThua(n));
	printf("\nTong binh phuong %d",TongBinhPhuong(n));
	printf("\nTong Chia %.5f",TongChia(n));
	printf("\nTong le %d",TongLe_khong_ko_de_quy(n));
	printf("\nTong le %d",TongLe(n));
	printf("Fibinaci %d",FiBoNaCi(n));
/*	printf("Nhap a va b");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nUSCLN %d",USCLN_ko_de_quy(a,b));
	*/
/*	int aa[100],m,x;
	printf("nhap n:  ");
	scanf("%d",&m);
	NhapMang(aa,m);
	for(int i=0;i<m;i++)
		printf("%5d",aa[i]);
		
	XuatDayLe(aa,m);
	
	printf("\nTong cac phan tu trong mang %d",TongMangLe(aa,m));
	/*printf("Nhap x can tim: ");
	scanf("%d",&x);
	//int kq=TimXCuoi(aa,m,x);
	
	int kq=TimXDau(aa,m,x);
	if(kq==-1)
		printf("\nKhong tim thay");
	else
		printf("tim thay %d tai vi tri %d",x,kq);*/
	//printf("Gia tri lon nhat trong mang %d",TimMin(aa,m));
	printf("%d",s(5));
	return 0;
}