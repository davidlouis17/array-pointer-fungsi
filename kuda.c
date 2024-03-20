#include <stdio.h>

void koboImaginaryChess(int i, int j, int size, int *chessBoard) {
  int possibleMoves[8][2] = {
      {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
      {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
  };

  for (int k = 0; k < 8; k++) {
    int newI = i + possibleMoves[k][0];
    int newJ = j + possibleMoves[k][1];

    if (0 <= newI && newI < size && 0 <= newJ && newJ < size) {
      chessBoard[newI * size + newJ] = 1;
    }
  }
}

int main() {
  int size = 8;
  int chessBoard[size * size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      chessBoard[i * size + j] = 0;
    }
  }

  int i, j;
  printf("Enter the knight's starting position (i j): ");
  scanf("%d %d", &i, &j);

  koboImaginaryChess(i, j, size, chessBoard);

  printf("\n");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", chessBoard[i * size + j]);
    }
    printf("\n");
  }

  return 0;
}
