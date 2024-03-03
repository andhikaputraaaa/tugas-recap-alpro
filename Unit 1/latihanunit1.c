#include <stdio.h>

int main(){
    int v, s, t;

    printf("Masukkan jarak dan waktu : ");
    scanf("%d %d", &s, &t);

    float kecepatan = (float) s / t;

    printf("Masukkan kecepatan dan waktu : ");
    scanf("%d %d", &v, &t);

    float jarak = (float) v * t;

    printf("Masukkan jarak dan kecepatan : ");
    scanf("%d %d", &s, &v);

    float waktu = (float) s / v;

    printf("Kecepatan = %.2f\n", kecepatan);
    printf("Jarak = %.2f\n", jarak);
    printf("Waktu = %.2f\n", waktu);

    return 0;
}