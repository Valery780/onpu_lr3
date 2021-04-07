//Посчитать объем конуса Македонская Валерия УП-202, работа с массивами
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    float V;
    float h;
    float R;
    float aver;
    int n;
    double * arr;
    void output(double * arr, int n)
    
    {
        int i;
        for (i = 0; i < n; i++)
        {
          print("arr[%d] = %lf \n",i, arr[i]);
        }   
    }
        
   
    printf("Сколько раз необходимо посчитать объем конуса? ");
    scanf("%d", &n);

    arr = malloc(n*sizeof(double));

    for (int i = 0; i < n; i++)
    {
        printf("Введите высоту конуса h: ");
        scanf("%f", &h);

        printf("Введите радиус конуса R: ");
        scanf("%f", &R);

        V = 1.0/3.0*M_PI*pow(R,2)*h;
        printf("Объем конуса равняется %f\n", V);
    }
    printf("История расчетов: \n");
    output(arr, n);
    
    sum = 0;
     for (int i = 0; i < n; i++){
        aver = arr[i];
        sum = sum + aver;
        }
        aver = sum/n;
        printf ("Среднее значение объема: %lf \n", aver);
        free(arr);
    
    int a = 6, i;
    for (i = 0; i < n; i++){
      if (arr[i] <= n) a++;
        printf("Меньшие числа:", arr[i]);
      else if(arr[i] >= n) a++;
        printf("Большие числа: ", arr[i]);
    
  }
  return 0;
}
