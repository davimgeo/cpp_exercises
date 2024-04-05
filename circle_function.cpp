#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

std::vector<double> linspace(double start, double stop, int step) {
    std::vector<double> result;
    double dum = (std::abs(start) + std::abs(stop)) / step;
    result.push_back(start);
    for (int i = 0; i < step; i++) {
        start += dum;
        result.push_back(start);
    }
    return result;
}

std::vector<double> x_square_vector(std::vector<double> x){
    for(int i = 0; i < x.size(); i++){
        x[i] = x[i]*x[i];
    }
    return x;
}

std::vector<double> circle_function(std::vector<double> x, double radius){
    std::vector<double> y;
    std::vector<double> x_square = x_square_vector(x);
    for(int i = 0; i < x.size(); i++){
        double dum = sqrt(radius - x_square[i]);
        y.push_back(dum);
    }
    y[y.size() - 1] = 0;
    return y;	
}

int main() {
    std::vector<double> result = linspace(-2, 2, 1001);
    std::vector<double> x_square = x_square_vector(result);

    std::vector<double> y = circle_function(result, 4);
    
    std::ofstream outfile_y("/home/malum/Desktop/coding_tests/data/y_vector.txt");
    for (const auto &e : y) outfile_y << e << "\n";

    std::ofstream outfile_x("/home/malum/Desktop/coding_tests/data/x_vector.txt");
    for (const auto &e : result) outfile_x << e << "\n";

    std::cout << std::endl;
    return 0;
}
