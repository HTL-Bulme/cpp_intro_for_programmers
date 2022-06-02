#include <ctime>
#include <iostream>
#include <stdlib.h>

double simulate_pi(int iterations);
bool shoot();


// implement the missing functions


/**
 * Simulate the given number of iterations to retrieve a good approximation
 * of pi.
 */
double simulate_pi(int iterations) {
}


/**
 * Shoot a dart at a 2x2 square and return true iif the dart hit inside the
 * inscribed circle.
 */
bool shoot() {
}


int main(int argc, char** argv) {
  srand48(time((time_t*) NULL));  // initialize random number generator

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " iterations\n";
    return 1;
  }
  int iterations(std::atoi(argv[1]));
  std::cout << "approximation of pi: " << simulate_pi(iterations) << "\n";
  return 0;
}
