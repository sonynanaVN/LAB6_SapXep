//sap xep phan hoach (Quicksort)
#include<iostream>
#include<ctime>
using namespace std;
int partition(int a[], int left, int right){
	int pivot = a[right];
	int i = left - 1;
	for(int j = left; j < right; j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	//dua pivot ve giua
	i++;
	swap(a[i], a[right]);
	return i;
	
}
void sapXepPhanHoach(int a[], int left, int right){
	if(left >= right){
		return;
	}
	int p = partition(a, left, right);
	sapXepPhanHoach(a, left, p - 1);
	sapXepPhanHoach(a, p + 1, right);
}

int main(){
	int a[1000], n;
	cout<<"Nhap n: "; cin>>n;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 100;
	}
	cout<<"===MANG RANDOM==="<<endl;
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	sapXepPhanHoach(a, 0, n - 1);
	cout<<endl<<"===MANG SAU KHI SAP XEP PHAN HOACH==="<<endl;
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}