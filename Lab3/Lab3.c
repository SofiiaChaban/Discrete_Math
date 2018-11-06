#include<stdio.h>
#include<math.h>
int main () {
    int n;
    int m;
    int b[100];
    int a[100];
    printf("Enter the amount of elements in array A: \n");
    scanf("%d", &n);
    printf("Enter elements of array A: \n");
    for (int i = 0; i < n; i++) {
        printf("Put element[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("A array:{");
    for (int i = 0; i < n; i++)  {
        printf("%d", a[i]);
        printf("|");
    }
    printf("}\n\n");
    printf("Enter the amount of elements in B array: \n");
    scanf("%d", &m);
    printf("Enter elements of array B: \n");
    for (int i = 0; i < m; i++) {
        printf("Put element[%d]: ", i);
        scanf("%d", &b[i]);
    }
    printf("\n");
    printf("B array:{");
    for (int i = 0; i < m; i++) {
        printf("%d", b[i]);
        printf("|");
    }
    printf("}\n");
    int c[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]<pow(a[i],2)){
                c[i][j]=1;
            }
            else{
                c[i][j]=0;
            }
        }
    }
    printf("Matrix of binary relation: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d |", c[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n-1; i++) {

        if (c[i][i] == 1&&c[i+1][i+1] == 1) {
            if (i == n-2) {
                printf("\n Reflexive");
            }
            continue;

        }
        if (c[i][i] == 0&& c[i+1][i+1] == 0) {
            if (i == n-2) {
                printf("\n Antireflxive");
            }
            continue;

        }
        if ((c[i][i] == 1 && c[i + 1][i + 1] == 0) || (c[i][i] == 0 && c[i + 1][i + 1] == 1))
        {
            printf("\n Not reflexive");
            break;
        }
    }
    for(int i=0; i<n; i++) {

        for (int j = 0; j <m ; j++) {

            if(c[i][j]==c[j][i])
            {
                if(i==n-1) {
                    printf("\nSymetric");
                    i+=100;
                    break;
                }
            }
            if(c[i][j]!=c[j][i]) {
                printf("\nAntysimetric");
                i+=100;
                break;
            }
        }
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=2; j<m-1; j++)
        {
            for(int k=0; k<n-1; k++)
            {
                if(c[i][j]==c[j][k]==1)
                {
                    if(c[k][i]==1)
                    {
                        printf("\nTransitive matrix");
                        i+=10;
                        j+=10;
                        k+=10;

                    }
                }
                if (c[i][j]==c[j][k]==1) {
                    if (c[k][i] == 0) {


                            printf("\nAntitransitive matrix");
                            i += 10;
                            j += 10;
                            k += 10;
                        }
                    else
                    {
                        printf("\nUntransitive matrix");
                        i+=10;
                        j+=10;
                        k+=10;
                    }

                    }
                }

            }
        }




    return 0;
}