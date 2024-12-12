#include <iostream>
#include "crops/crops.h"

using namespace std;

void backtrack(Crops c, int x, int y) {
  char crop = c.crops[y][x];
  if (crop == 'B') {
    cout << '(' << x << ',' << y << ')';
    backtrack(c, x + 1, y);
    backtrack(c, x, y + 1);
  }
  else { return; }
}

int main () {
  Crops c;
  c.print();

  backtrack(c, 0, 1);
  return 0;
}
