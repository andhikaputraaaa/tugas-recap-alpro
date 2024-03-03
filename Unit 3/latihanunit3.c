#include <stdio.h>

int main() {
    
    int n;
    int jumlah = 0;
    
    printf("Masukkan jumlah elemen pada array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Masukkan angka : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        jumlah+=arr[i];
    }
    
    printf("Jumlah semua angka yang dimasukkan adalah %d", jumlah);

    return 0;
}