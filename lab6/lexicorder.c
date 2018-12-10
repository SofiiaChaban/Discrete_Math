#include <stdio.h>
int fact(int n) {
   int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
void swap(int * arr,int i1,int i2) {
    int temp = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = temp;
}
void reverse(int * arr,int n,int index) {
    for (int i = 1; i <= (n - index)/2;i++) {
        swap(arr,i+index,n-i);
    }
}
void leksorder(int *arr,int n) {
    int t1 = -1;
    for (int i = n - 1; i >= 0;i--) {
        if (i != 0 && arr[i] > arr[i - 1] && t1 == -1) {
            t1 = i - 1;
            i = n - 1;
        }
        if (i == 0 && t1 == -1) {
            i = n - 1;
            t1 = 0;
        }
        if (t1 != -1 && arr[i] > arr[t1]) {
            swap(arr,t1,i);
            reverse(arr,n,t1);
            break;
        }
    }
}
void print_arr(int *arr,int n) {
    for (int i = 0; i < n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main() {
    int n, arr[100];
    printf("Enter n: ");
    scanf("%d",&n,1);
    for (int i = 0; i < n;i++) {
        arr[i] = i + 1;
    }
    printf("\n");
    leksorder(arr,n);
    for (int i = 0; i < n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < fact(n);i++) {
        leksorder(arr,n);
        print_arr(arr,n);
    }

}


