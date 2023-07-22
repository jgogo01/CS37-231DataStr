#include <stdio.h>
#include <time.h>

int main(void) {
  int x;
  scanf("%i", &x);

  int arr[x];
  for(int i = 0; i < x; i++){
    scanf("%i", &arr[i]);
  }

  int min = arr[0];
  int max = arr[0];

  for(int i = 0; i < x; i++){
    if(arr[i] < min){
      min = arr[i];
    }
    if(arr[i] > max){
      max = arr[i];
    }
  }

  printf("%i\n", min);
  printf("%i\n", max);
  return 0;
}
