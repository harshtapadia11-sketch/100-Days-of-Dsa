// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <stdio.h> 
int main() {
    int m , n ;
    int arr[100][100]; 
    scanf("%d%d", &m , &n ) ;
    for ( int i = 0 ; i<m; i++){
        for ( int j = 0 ; j< n ; j++ ) {
            scanf("%d", &arr[i][j]); 
        }
    }
    int target = 0;
    int a , b;  
    for ( int i = 0 ; i<m; i++){
        for ( int j = 0 ; j< n ; j++ ) {
            if ( arr[i][j] == target) {
                a = i ; 
                b = j ; 
            }
        }
    }
    for ( int i = 0 ; i < m; i++) {
        arr[i][b] = 0 ; 
    }
    for ( int j = 0 ; j< n ; j++) {
        arr[a][j] = 0 ; 
    }
    for ( int i = 0 ; i<m; i++){
        for ( int j = 0 ; j< n ; j++ ) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
}