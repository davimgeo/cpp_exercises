#include <cmath>
#include <fstream>
#include <iostream>

class CircleFunction {
  public:
  static const int size = 101;
  double theta[size];
  double cartesian_cords_x[size];
  double cartesian_cords_y[size];
  double radius = 1;

  void Linspace(double start, double stop, int step) {
    double increment = (std::abs(start) + std::abs(stop)) / step;
    theta[0] = start;
    for (int i = 1; i <= step; ++i) {
      start += increment;
      theta[i] = start;
    }
  }

  void Polar2Cartesian() {
    for (int i = 0; i < size; ++i) {
      double angle = theta[i];
      cartesian_cords_x[i] = radius * cos(angle);
      cartesian_cords_y[i] = radius * sin(angle);
    }
  }
};

void ExportFile(double file[], std::string file_path) {
  std::ofstream outfile(file_path);
  for (int i = 0; i < CircleFunction::size; ++i) {
    outfile << file[i] << "\n";
  }
}

int main() {
  CircleFunction circle;
  circle.Linspace(0, 2*M_PI, CircleFunction::size - 1);
  circle.Polar2Cartesian(); 

  std::string path = "/home/malum/Desktop/coding_tests/circle_exercise/data/";
  ExportFile(circle.cartesian_cords_x, path + "x_vector.txt");
  ExportFile(circle.cartesian_cords_y, path + "y_vector.txt");

  return 0;
}
