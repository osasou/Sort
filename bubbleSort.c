#include <stdio.h>
void trace(int A[], int N){
   int i;

   for(i = 0;i<N;i++){
      printf("%d ", A[i]);
   }
   printf("\n");
}
void swap(int* a, int* b){
   int tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}

int bubbleSort(int A[], int N){
   int j,cnt = 0,flag = 1;
   while(flag){
      flag = 0;
      for(j = N-1;j>0;j--){
         if(A[j] < A[j-1]){
            swap(&A[j],&A[j-1]);
            cnt++;
            flag = 1;
         }
         //trace(A, N);
      }
      //trace(A, N);
   }
   return cnt;
}

int main(){
   int N;
   scanf("%d", &N);
   int A[N];
   for(int i = 0;i<N;i++){
      scanf("%d", &A[i]);
   }
   int cnt = bubbleSort(A,N);
   trace(A, N);
   printf("%d",cnt);
}
