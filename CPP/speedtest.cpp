#include <ctime>
#include <iostream>
#include <vector>

void iterative(int x) {
  for (int j = 0; j <= x; j++) {
    std::vector<int> stuff(j);
    for (int i = 0; i < j; i++) {
      stuff[i] = i;
    }
  }
}

int main() {
  std::clock_t start;
  double duration;

  start = std::clock();

  iterative(50000);

  duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

  std::cout << "Duration: " << duration << '\n';

  return 0;
}
