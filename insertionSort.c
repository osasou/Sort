#include <stdio.h>
void trace(int arr[], int N){
   int i;
   for(i = 0;i<N;i++){
      if(i>0)printf(" ");
      printf("%d", arr[i]);
   }
   printf("\n");
}
void insertionSort(int arr[], int N){
   int i,j,v;

   for(i = 1;i<N;i++){
      v = arr[i];
      j = i-1;
      while(j >= 0 && arr[j] > v){
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = v;
      trace(arr, N);
   }

}
int main(){
   int i,N;
   scanf("%d", &N);
   int array[N];
   for(i = 0;i<N;i++){
      scanf("%d",&array[i]);
   }

   insertionSort(array, N);

   for(i = 0;i<N;i++){
      printf("%d",array[i]);
   }
   printf("\n");

   return 0;

}

