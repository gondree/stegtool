#include <iostream>
#include <fstream>
#include <bitset>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


void printByte(char c) {
    std::bitset<8> y(c);
    cout << y;
}

Mat readImage(const char* path) {
    return imread(path);
}

void writeImage(const char* path, const Mat image) {
    imwrite(path, image);
}

Vec3b getPixel(const Mat image, int row, int col) {
    return image.at<Vec3b>(Point(col,row));
}

void setPixel(Mat image, int row, int col, const Vec3b pixel) {
    image.at<Vec3b>(Point(col,row)) = pixel;
}
