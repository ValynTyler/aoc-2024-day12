#include <iostream>
#include <fstream>
#include <cstring>
#include "crops.h"

using namespace std;

ifstream fin("input/example1.txt");

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

