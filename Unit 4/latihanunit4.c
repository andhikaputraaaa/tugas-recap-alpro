#include<stdio.h>

int KelilingPersegi(int sisi){
    return 4 * sisi;
}

int LuasPersegi(int sisi){
    return sisi * sisi;
}

int VolumeKubus(int sisi){
    return sisi * sisi * sisi;
}

int main(){

    int sisi;
    printf("Masukkan nilai sisi : ");
    scanf("%d", &sisi);

    printf("Keliling = %d\n", KelilingPersegi(sisi));
    printf("Luas = %d\n", LuasPersegi(sisi));
    printf("Volume = %d", VolumeKubus(sisi));

    return 0;
}