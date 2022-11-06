#include <stdlib.h>
#include <stdio.h>


int main(){

    int n;

    printf("Enter amount of data: ");
    scanf("%d", &n);

    float x[n];
    float fx[n];

    printf("Enter data:\n");
    for (int i = 0; i<n; i++){
        printf("Enter with x[%d]", i);
        scanf("%f", &x[i]);
        printf("Enter with fx[%d]", i);
        scanf("%f", &fx[i]);
    }


    return 0;
}