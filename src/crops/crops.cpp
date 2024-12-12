#include <iostream>
#include <fstream>
#include <cstring>
#include "crops.h"

using namespace std;

ifstream fin("input/example1.txt");

Crops::Crops() {
  char input[200][200];
  int k = 0;

  while (fin.getline(input[k], 200)) {
    k++;
  }

  height = k * 2 - 1;
  width = strlen(input[0]) * 2 + 1;
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      if (j == 0 || j == height - 1 || i == 0 || i == width - 1){
        crops[j][i] = '+';
      } else if (j % 2 == 0) {
        crops[j][i] = ' ';
      } else if (i % 2 == 0) {
        crops[j][i] = ' ';
      } else {
        crops[j][i] = input[j / 2][i / 2];
      }
    }
  }
}

void Crops::print() {
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      cout << crops[j][i];
    }
    cout << '\n';
  }
}

