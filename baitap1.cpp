#include <iostream>
#include <math.h>

using namespace std;

void Input(int a[][10], int n);
void Output(int a[][10], int n);
void DuongCheoChinh( int a[][10], int n);
void DuongCheoPhu( int a[][10], int n);


int main(){
	int n;
	cin>>n;
	int a[n][10];
	Input(a,n);
	Output(a,n);
	cout<<endl<<endl;
	DuongCheoChinh(a,n);
	cout<<endl<<endl;
	DuongCheoPhu(a,n);
	return 0;
}

void Input(int a[][10], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Nhap phan tu thu"<<"["<<i<<";"<<j<<"] : ";
			cin>>a[i][j];
		}
	}
} 
void Output(int a[][10], int n){
	cout<<"Ma tran la"<<endl;
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
	}
}

void DuongCheoChinh( int a[][10], int n){
	cout<<"Ma tran co duong cheo chinh la: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
			cout<<a[i][j]<<" ";}
		}
	}
}
void DuongCheoPhu( int a[][10], int n){
	cout<<"Ma tran co duong cheo phu la: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j==(n-1)){
			cout<<a[i][j]<<" ";}
		}
	}
}

