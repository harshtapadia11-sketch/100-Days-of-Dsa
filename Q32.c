
#include <stdio.h> 
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    int j=n-1;
    int sum=0;
    for(int i=0;i<m;i++){
        sum+=arr[i][j];
        j--;
    }
    printf("%d",sum);
}