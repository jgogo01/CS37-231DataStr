#include <stdio.h>
int main(){
  int x;
  scanf("%d", &x);

  // Input
  int arr[x];
  for (int i = 0; i < x; i++){
    scanf("%d", &arr[i]);
  }

  // Process
  int count = 0;
  int ckPass = 0;

  for (int i = 0; i < x; i++){ // Left
    for (int j = i + 1; j < x; j++){ // Right
        //ถ้าติดกัน
        if(i == j - 1){
          count++;
          continue;
        }
      for (int k = i + 1; k < j; k++){ // Middle 
          if(arr[k] < arr[i] && arr[k] < arr[j]){
            ckPass = 1;
          }else{
            ckPass = 0;
            break;
          }
      }
      //If Check Pass Condition
      if(ckPass == 1){
        count++;
        ckPass = 0;
      }
    }
  }

  // Output
  printf("%d", count);
}