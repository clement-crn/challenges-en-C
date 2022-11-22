#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n;
    scanf("%d", &n);
    ft_loop(n);
    return 0;
}


void ft_loop(int n){
    
    int arr[5];
    int i = 0;
    int m = 10;
    while (i < 4)
    {
        if(arr[i] < 10)
        {
            arr[i] = n%m;
            ft_loop(arr[i]);
        }
        if(arr[i] >= 10)
        {
            arr[i] = n/10;
            m = m * 10;
            i++;
            printf("%d\n", arr[i]);
        }
    }
    int r = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    printf("%d", r);
    
}
