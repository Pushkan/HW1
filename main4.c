#include <stdio.h>
#include <stdlib.h>

//Размеры доски
int m = 8, n = 8;

void hw4_1();
void hw4_2();

int main(void) {

  hw4_1();
  hw4_2();
  return 0;
}

int routes(int x, int y, int block[m][n]) {
  if (x == 0 || y == 0)
	  return 1;
  else
	  if(block[x][y] == 0) return 0;
      return routes(x - 1, y, block) + routes(x, y - 1, block);
}

void hw4_1(){
  //1.Количество маршрутов с препятствиями. Реализовать чтение массива с препятствием и нахождение количество маршрутов.
  printf("Количество маршрутов с препятствиями\n");

  int i,j;
  printf("Карта препятствий\n");
  int block[m][n];
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      block[i][j] = 1;
    }
  }
  //Препятствия
  block[1][1] = 0;
  block[1][3] = 0;
  block[1][4] = 0;
  block[3][3] = 0;
  block[7][2] = 0;
  block[8][7] = 0;

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%7d", block[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("Карта маршрутов\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%7d", routes(i, j, block));
    }
    printf("\n");
  }
}

void hw4_2(){
  //2.Требуется обойти конем шахматную доску размером NxM, пройдя через все поля доски по одному разу. Здесь алгоритм решения такой же, как в задаче о 8 ферзях. Разница только в проверке положения коня.
  printf("Обход доски конём\n");
  
}