#include<stdio.h>
void nhap_mang(int a[], int n){
    for( int i =0; i<n; i++){
        printf("Nhập vào giá trị của a[%d]:", i+1);
        scanf("%d", &a[i]);
    }
}
int check( int a[], int n){
    int cout =0;
    for (int i=0; i<n; i++){
        int cout_2=5;
        if( a[i]<2) cout_2 =1;
        else{
            for( int c=2; c<a[i];c++){
                if(a[i]%c==0){
                    cout_2=2;
                    break;
                }
            }
        }
        if(cout_2==5) cout++;
    }
    return cout;
}

int main(void){
    int n;
    printf("Nhập vào số phần tử trong mảng");
    scanf("%d", &n);
    int a[n];
    nhap_mang(a, n);
    printf("trong mảng có %d số là số nguyên tố ", check(a,n));
    return 0;
}