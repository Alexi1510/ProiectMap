#include<stdio.h>
#include <stdbool.h>

#define N 8

int sol[N];

bool valid(int queen_number) {
  for (int i = 0; i < queen_number; i++) {
    if (sol[i] == sol[queen_number] ||
        abs(sol[i] - sol[queen_number]) == abs(i - queen_number)) {
      return false;
    }
  }
  return true;
}

void print_solution() {
  static int solutions = 0;
  printf("Solution %d:\n", ++solutions);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (sol[i] == j) {
        printf("Q ");
      } else {
        printf(". ");
      }
    }
    printf("\n");
  }
  printf("\n");
}

void place_queen(int queen_number) {
  if (queen_number == N) {
    print_solution();
    return;
  }
  for (int row = 0; row < N; row++) {
    sol[queen_number] = row;
    if (valid(queen_number)) {
      place_queen(queen_number + 1);
    }
  }
}


int main() {
  place_queen(0);
  return 0;
}