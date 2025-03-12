//Sap xep tron (merge Sort)
#include<iostream>
#include<ctime>
using namespace std;
void Tron(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++){
    	L[i] = a[left + i];
	}
    for (int j = 0; j < n2; j++)
    {
    	R[j] = a[mid + 1 + j];
	}
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void sapXepTron(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        sapXepTron(a, left, mid);
        sapXepTron(a, mid + 1, right);
        Tron(a, left, mid, right);
    }
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
	sapXepTron(a, 0, n - 1);
	cout<<endl<<"===MANG SAU KHI SAP XEP PHAN HOACH==="<<endl;
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}