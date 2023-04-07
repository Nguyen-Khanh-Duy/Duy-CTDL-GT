link tham khảo https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort

#include <iostream>
using namespace std;
void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);//hoán vị a[i] và a[j]
			}
		}
	}
}

