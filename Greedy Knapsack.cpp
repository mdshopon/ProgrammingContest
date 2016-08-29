#include<bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity) {

   float tp = 0;
   int X,i, j, u;
   u = capacity;
   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }
   if (i < n)
      X = u / weight[i];

   tp = tp + (X * profit[i]);
   printf("\nMaximum profit is:- %f\n", tp);

}

int main() {
   float weight[20], profit[20], capacity;
   int num, i, j;
   float ratio[20], temp;

   printf("Item: \n");
   scanf("%d", &num);

   printf("Weight And Profit: \n");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("KnapSack Size: \n");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            swap(ratio[j],ratio[i]);
            swap(weight[j],weight[i]);
            swap(profit[j],profit[i]);
         }
      }
   }

   knapsack(num, weight, profit, capacity);
   return(0);
}
