//Sap xep chen (Insertion Sort)
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
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}
void sapXepChen(int a[], int n){
	for(int i = 1; i < n; i++){ 
		int x = a[i], pos = i - 1;
		while(pos >= 0 && x < a[pos]){//
			a[pos + 1] = a[pos];
			pos--; 
		}
		a[pos + 1] = x;
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
	cout<<"===XUAT MANG==="<<endl;
	xuat(a, n);
	sapXepChen(a, n);
	cout<<endl<<"===MANG SAU KHI SAP XEP==="<<endl;
	xuat(a, n);
	return 0;
}
