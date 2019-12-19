#include <stdio.h>
#include <stdlib.h>

void hw3_1();
void hw3_2();
void hw3_3();
void hw3_4();
void hw3_5();

void fillArray(int* a, int len) {
  int i;
  for (i = 0; i < len; i++) {
	a[i] = rand() % 100;
  }
}

void printArray(int* a, int len) {
  int i;
  for (i = 0; i < len; i++) {
	printf("%d ", a[i]);
  }
  printf("\n");
  printf("\n");
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void bubbleSort(int* a, int len) {
  int i;
  int j;
  int count = 0;
  for (i = 0; i < len; i++) {
    for (j = 0; j < len - 1; j++) {
      count++;
      if (a[j] > a[j + 1]) {
      swap(&a[j], &a[j + 1]);
      }
    }
  }
  printf("Обычная сортировка пузырьком прошла за %d итераций\n", count);
}

int main(void) {

  hw3_2();
  hw3_1();
  hw3_3();
  hw3_4();
  hw3_5();
  return 0;
}

void bubbleSortOpt(int* a, int len) {
  int i, j, wasChange = 0, count = 0;
  for (i = 0; i < len; i++) {
    wasChange = 0;
    for (j = 0; j < len - i - 1; j++) {
      count++;
      if (a[j] > a[j + 1]) {
      swap(&a[j], &a[j + 1]);
      wasChange = 1;
      }
    }
    if(wasChange == 0){
      break;
    }
  }
  printf("Оптимизированная пузырьковая сортировка прошла за %d итераций\n", count);
}

void hw3_1(){
  //1. Попробовать оптимизировать пузырьковую сортировку.  
  printf("Оптимизированная пузырьковая сортировка\n");

  printf("Исходный массив\n");
  int length = 256;
  int array[length];
  fillArray(array, length);
  printArray(array, length);
  bubbleSortOpt(array, length);
  printArray(array, length);
}

void hw3_2(){
  //2. Написать функции сортировки, которые возвращают количество операций.
  //Вывел количество итераций в каждой функции, вызываю обычную сортировку пузырьком для сравнения
  printf("Исходный массив\n");
  int length = 256;
  int array[length];
  fillArray(array, length);
  printArray(array, length);
  bubbleSort(array, length);
  printArray(array, length);
}

void shakerSort(int* arr, int len) {
  int count = 0, first = 1, last;
  last = len - 1;

  while (first <= last)
	{
	  for (int i = last; i >= first; i--) {
      count++;
      if (arr[i - 1] > arr[i])
        swap(&arr[i], &arr[i - 1]);
      }
      first++;
      for (int i = first; i <= last; i++) {
        count++;
        if (arr[i - 1] > arr[i])
          swap(&arr[i], &arr[i - 1]);
        }
      last--;
	}
  printf("Шейкерная сортировка прошла за %d итераций\n", count);
}

void hw3_3(){
  //3. *Реализовать шейкерную сортировку.
  printf("Шейкерная сортировка\n");

  printf("Исходный массив\n");
  int length = 256;
  int array[length];
  fillArray(array, length);
  printArray(array, length);
  shakerSort(array, length);
  printArray(array, length);
}

int lineSearch(int* a, int len, int value) {
  if (len >= 1){
    if(a[len - 1] == value){
      return len;
    }
    return lineSearch(a, len - 1, value);
  }
  return 0;
}

void hw3_4(){
  //4. Реализовать линейный алгоритм поиска рекурсивной функцией
  printf("Линейный алгоритм поиска рекурсией\n");

  printf("Исходный массив\n");
  int length = 256;
  int array[length];
  fillArray(array, length);
  printArray(array, length);
  printf("Элемент найден на %d месте (поиск с конца)\n", lineSearch(array, length, 73));
}

void hw3_5(){
  //5. Реализовать сортировку подсчётом (Алгоритм со списком)
  printf("Сортировка подсчетом\n");

  //
}