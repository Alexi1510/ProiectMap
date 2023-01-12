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

int main()
{
    return 0;
}