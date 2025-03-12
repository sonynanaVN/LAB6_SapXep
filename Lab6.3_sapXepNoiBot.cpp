//Sap xep Noi bot (Bubble sort)
#include<iostream>
using namespace std;
void nhap(int a[], int n){
	cout<<"===NHAP MANG==="<<endl;
	for(int i = 0; i < n; i++){
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n ; i++){
		cout<<a[i]<<" ";
	}
}
void sapXepNoiBot(int a[], int n){
	for(int i = 0; i < n - 1 ;i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n < 0);
	int a[n];
	nhap(a, n);
	sapXepNoiBot(a, n);
	cout<<"====SAP XEP NOI BOT===="<<endl;
	xuat(a, n);
}