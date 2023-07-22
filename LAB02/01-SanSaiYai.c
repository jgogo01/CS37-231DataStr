#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    scanf("%d", &x);
    int arr[x][2];

    for(int i = 0; i < x; i++){
       int l, r;
       scanf("%d %d", &l, &r);
        //Left
        arr[i][0] = l;
        //Right
        arr[i][1] = r;
    }

    // //Row
    int max = 0;
    for(int i = 1; i <= x; i++){//คนที่ในโจทย์ ไม่ใช้ index
        int count = 1;
        //Left
        int left = i;
        while(arr[left-1][0] != 0){
            int temp = arr[left-1][0];
            arr[left-1][0] = 0;
            left = temp;
            count++;
        }

        // //Right
        int right = i;
        while(arr[right-1][1] != 0){
            int temp = arr[right-1][1];
            arr[right-1][1] = 0;
            right = temp;
            count++;
        }

        if(count > max){
            max = count;
        }
    }
    printf("%d", max);
}