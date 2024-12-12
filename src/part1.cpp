#include <iostream>
#include "crops/crops.h"

using namespace std;

void backtrack(Crops &c, int x, int y) {
  char crop = c.crops[y][x];
  if (crop == 'A') {
    /* cout << '(' << x << ',' << y << ')'; */
    if (c.crops[y][x + 2] != 'A') {
      c.crops[y][x + 1] = '+';
      c.crops[y - 1][x + 1] = '+';
    } else {
      backtrack(c, x + 2, y);
    }

    if (c.crops[y + 2][x] != 'A') {
      c.crops[y + 1][x] = '+';
      c.crops[y + 1][x + 1] = '+';
    } else {
      backtrack(c, x, y + 2);
    }
  }
  else { return; }
}

int main () {
  Crops c;
  c.print();
  cout << endl;

  int x = 1;
  int y = 1;
  backtrack(c, x, y);
  c.print();

  return 0;
}
