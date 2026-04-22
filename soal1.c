// NAMA : Isnaya Zalfa Kamila 
// NIM : 13224028
// DESKRIPSI : Menghitung jumlah, rata-rata, nilai maksimum, dan indeks maksimum dari sebuah array yang diinputkan oleh pengguna.

#include <stdio.h> 
#include <math.h>

void  Jumlah_ARRAY (int *arr, int N, int *sum){
    *sum = 0 ;
    for (int i = 0; i < N; i++){
     *sum = *sum + arr[i];    
    }
}

void  Menghitung_RATAAN (int *arr, int N, float *average){
    int SUM = 0 ;
    for (int i = 0; i < N; i++){
     SUM = SUM+ arr[i];    
    }
    *average = (float)SUM/N;
}


void Nilai_MAX (int *arr, int N, int *MAX, int *IDX){
    *MAX = arr[0];
    *IDX = 0;
    for (int i = 1; i < N; i++){
        if (arr[i] > *MAX){
            *MAX = arr[i];
            *IDX = i ;
        }
    }
}

int main (){
    int N;
    int i;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    int MAX, IDX;
    Nilai_MAX(arr, N, &MAX, &IDX);
    float average;
    int sum;
    Jumlah_ARRAY(arr, N, &sum);
    Menghitung_RATAAN(arr, N, &average);
    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", average);
    printf("MAX %d\n",MAX);
    printf("IDX %d\n ",IDX);
    
    return 0;
}
