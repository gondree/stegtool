#pragma once
#include <opencv2/opencv.hpp>

using namespace cv;


// Prints the byte 'ch' in binary form, to stdout
//
void printByte(char c);


// Opens path in read mode and returns the image.
//
// The image 'image' holds n x m pixels, where
//    n = image.rows
//    m = image.cols
//
// You can retrieve pixel (i, j) using:
//    px = getPixel(image, i, j);
//
// You can check that the image is non-empty by checking
//    the bool value image.empty().
//
Mat readImage(const char* path);


// Opens path in write mode and writes the data there.
//
void writeImage(const char* path, const Mat image);


// Gets the pixel at (row, col) and returns it.
//
// Each pixel 'px' is three bytes of data:
//    px.value[0] is the red byte
//    px.value[1] is the blue byte
//    px.value[2] is the green byte
//
Vec3b getPixel(const Mat image, int row, int col);


// Sets the pixel at (row, col) in the existing image.
//
void setPixel(Mat image, int row, int col, const Vec3b pixel);
