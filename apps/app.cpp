#include <termdraw/graphics.hpp>
#include <termdraw/shapes.hpp>

#include <fmt/format.h>
#include <iostream>
#include <vector>
#include <tuple>

void setup() {
  display_size(32,32);
  frameRate(0.2);
  circle(WIDTH/2, HEIGHT/2, HEIGHT/4);
}

void update() {
  // printf("Buffer: %d\n", BUFFER[WIDTH/2][HEIGHT/2]);
}

// int main() {
//     printf("Hello world!\n");

//     auto vec = as_vec<int, 5>(5);
//     vec_print(vec, "test");

//     std::cout << "⠂" << std::endl;

//     return 0;
// }
