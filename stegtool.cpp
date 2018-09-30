#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>
#include "util.hpp"

using namespace std;
using namespace cv;


// Prototypes
//
bool isBitSet(char ch, int pos);
char setBit(char ch, int pos, bool bit);
void hide(Mat image, ifstream& file);
void unhide(Mat image, ofstream& file);



// Given a byte (a char), this checks whether the bit is set 
//   or not, at a particular position. The position value specifies
//   the offset within the byte, as follows:
//
//     7 6 5 4 3 2 1 0
//
// Returns true if the bit in postion 'pos' is set, and false otherwise.
//
bool isBitSet(char ch, int pos) {

    return false;
}


// Given a byte (a char), this either sets the bit in position 'pos'
//  to 1 (when 'bit' is true) or to 0 (when 'bit' is false).
//  The position value specifies the offset within the byte, as follows:
//
//     7 6 5 4 3 2 1 0
//
// Returns the byte with the bit in 'pos' either set or unset.
//
char setBit(char ch, int pos, bool bit) {

    return 0;
}


// Hides 'file' into 'image.'
// 
// Takes the 'image' and the input filestream 'file', and
//  repeatedly calls file.get() to fetch the data byte-by-byte to hide it.
//  Each pixel of 'image' has its least significant bit replaced by the
//  the bits of file. When file.eof() is encountered, we encode a final
//  byte (the NULL byte, 0x00) used as a sentinel value that the file has
//  ended, to finish.
//
// If there are not enough bits in 'image' to encode all the bits of 'file',
//  then the function sends a message to stderr and exits with an error code.
//
void hide(Mat image, ifstream & file)
{
    // get pt = the first byte of 'file'
    // for each row, among the the rows of image
        // for each col, among the columns of image
            // for each c = the color of RBG
                // get the pixel at (row, col) from image
                // get ct, the byte of the pixel showing the color c
                
                // get b, the bit from pt to be encoded next
                //   if this is the first bit to be encoded from this byte,
                //     start at position 7 and work backwards to position 0
                
                // encode b into the LSB of ct
                // if the whole 8 bits of ct is encoded:
                //   get the next byte
                //   if we hit EOF: use '\0' for the next byte
                //   if we already processed the null byte: we are done
                // else:
                //  remember which bit we wll encode next somehow


    return;
}


// Takes 'image' and recovers the stegaongraphically hidden bits, writing 
//  these byte-by-byte to 'file'.
// 
// Takes 'image' pixel-by-pixel and recovers the least significant bit from
//  each pixel. Each byte is written to 'file.' When the null byte is 
//  encountered, we use this as a signal that no further data is hidden
//  in 'image' and finish.
//
void unhide(Mat image, ofstream & file)
{
    // for each row, among the the rows of image
        // for each col, among the columns of image
            // for each c = the color of RBG
                // get the pixel at (row, col) from image
                // get ct, the byte of the pixel showing the color c

                // get the LSB of ct, and marshall this bit into a byte
                
                // if 8 bits have been marshalled:
                //   if its a null byte: we are done
                //   otherwise: write the byte to file
                // else:
                //   update state to get ready for the next bit

    return;
}


// This program works in one of two manners:
//
//      To encode:
//        ./stegtool input.png hiddenfile  output.png
//        argv[0] = ./stegtool
//        argv[1] = input.png
//        argv[2] = hiddenfile
//        argv[3] = output.png
//
//      To decode:
//        ./stegtool combined.png outputfile
//        argv[0] = ./stegtool
//        argv[1] = combined.png
//        argv[2] = outputfile
//
int main(int argc, char** argv) {

    // check there are not too many or too few arguments

    // read image using readImage()

    // if hiding mode:
    //    open an ifstream in reading/binary mode
    //    call hide() to insert the data from the ifstream into image
    //    call writeImage() to write the image to the output path

    // if in recovery mode:
    //    open an ofstream in writing/binary mode
    //    call unhide(), to recover bytes from image and write to ofstream

    return 0;
}
