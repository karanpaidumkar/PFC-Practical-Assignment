#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int battery = 100;
    for(int i = 1; i<=n; i++){
        printf("Battery after %d hour: %d%%\n", i, battery-=5);
    }
    return 0;
}