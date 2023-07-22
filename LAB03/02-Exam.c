#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int arr[x][4];
    float arrAvg[4] = {0};

    //Cellect in 2D Arrary
    for(int i = 0; i < x; i++){
        int sj1, sj2, sj3;
        scanf("%d %d %d", &sj1, &sj2, &sj3);

        //Collect Varable
        arrAvg[0] += sj1;
        arrAvg[1] += sj2;
        arrAvg[2] += sj3;
        arrAvg[3] += (sj1 + sj2 + sj3);
      
        //Cellect Arrary
        arr[i][0] = sj1;
        arr[i][1] = sj2;
        arr[i][2] = sj3;
        arr[i][3] = (sj1 + sj2 + sj3);
    }

    //Cal Avg
    arrAvg[0] /= x;
    arrAvg[1] /= x;
    arrAvg[2] /= x;
    arrAvg[3] /= x;

    //Loop For Res
    for(int i = 0; i < x; i++){ //Std
      int countSJAvg = 0;
      int ckZero = 0;
      
      for(int j = 0; j < 3; j++){ //SJ
        if(arr[i][j] >= arrAvg[j]){
          countSJAvg++;
        }
        if(arr[i][j] <= 0){
          ckZero = 1;
        }
      }

      //If Pass Condition
      if(countSJAvg >= 2 && arr[i][3] >= arrAvg[3] && ckZero == 0){
        if(i == 0){
          printf("%d", i+1);
        }else{
          printf(" %d", i+1); 
        }
      }
    }
}