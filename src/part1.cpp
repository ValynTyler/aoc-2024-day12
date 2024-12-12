#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("input/example1.txt");

struct Crops {
  char crops[200][200];
  int width, height;

  Crops();
  void print();
};

Crops::Crops() {
  char line[200];
  int j = 0;
  while (fin.getline(crops[j], 200)) {
    j++;
  }

  width = strlen(crops[0]);
  height = j;
}

void Crops::print() {
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      cout << crops[j][i];
    }
    cout << '\n';
  }
}

int main () {
  Crops c;
  c.print();

  return 0;
}
