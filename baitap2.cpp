#include <iostream>
#include <math.h>
using namespace std;

void Input(int a[][10], int n, int m);
void Output(int a[][10], int n,int m);
void TongHang(int a[][10], int n,int m);
void TongCot(int a[][10], int n,int m);

int main(){
	int n; cin>>n;
	int m; cin>>m;
	int arr[m][10];
	Input(arr,n,m);
	Output(arr,n,m);
	TongHang(arr,n,m);
	TongCot(arr,n,m);
	return 0;
}
void Input(int a[][10], int n,int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"Vui long nhap phan tu thu ["<<i<<";"<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void Output(int a[][10], int n,int m){
	cout<<"Ma tran: "<<endl;
	for(int i=0;i<m;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
}
void TongHang(int a[][10], int n,int m){
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=a[i][j];
		}
		cout<<"Tong hang "<<i<<" la : "<<sum<<endl;
	}
}
void TongCot(int a[][10], int n,int m){
	for(int j=0;j<n;j++){
		int sum=0;
		for(int i=0;i<m;i++){
			sum+=a[i][j];
		}
		cout<<"Tong cot "<<j<<" la : "<<sum<<endl;
	}
}
