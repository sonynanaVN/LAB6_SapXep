//Sap xep chon (selection sort)
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
int sapXepChon(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a, n);
	cout<<"===XUAT MANG==="<<endl;
	xuat(a, n);
	sapXepChon(a, n);
	cout<<endl<<"===SAP XEP CHON (SELECTION SORT)==="<<endl;
	xuat(a, n);
	return 0;
}