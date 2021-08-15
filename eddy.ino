// Adafruit_NeoMatrix example for single NeoPixel Shield.
// Scrolls 'Howdy' across the matrix in a portrait (vertical) orientation.

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_GRBW    Pixels are wired for GRBW bitstream (RGB+W NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(32, 8, PIN,
                                               NEO_MATRIX_TOP + NEO_MATRIX_RIGHT +
                                               NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
                                               NEO_GRB + NEO_KHZ800);


void setup() {
    matrix.begin();
    matrix.setTextWrap(false);
    matrix.setBrightness(5);
}

void printString(int r, int g, int b) {
    matrix.setPixelColor(169, r, g, b);
    matrix.setPixelColor(179, r, g, b);
    matrix.setPixelColor(182, r, g, b);
    matrix.setPixelColor(185, r, g, b);
    matrix.setPixelColor(187, r, g, b);
    matrix.setPixelColor(191, r, g, b);
    matrix.setPixelColor(193, r, g, b);
    matrix.setPixelColor(195, r, g, b);
    matrix.setPixelColor(197, r, g, b);
    matrix.setPixelColor(198, r, g, b);
    matrix.setPixelColor(200, r, g, b);
    matrix.setPixelColor(201, r, g, b);
    matrix.setPixelColor(204, r, g, b);
    matrix.setPixelColor(205, r, g, b);
    matrix.setPixelColor(209, r, g, b);
    matrix.setPixelColor(212, r, g, b);
    matrix.setPixelColor(213, r, g, b);
    matrix.setPixelColor(214, r, g, b);
    matrix.setPixelColor(217, r, g, b);
    matrix.setPixelColor(219, r, g, b);
    matrix.setPixelColor(223, r, g, b);
    matrix.setPixelColor(227, r, g, b);
    matrix.setPixelColor(230, r, g, b);
}

void printImage(int r, int g, int b) {
    matrix.setPixelColor(96, r, g, b);
    matrix.setPixelColor(97, r, g, b);
    matrix.setPixelColor(98, r, g, b);
    matrix.setPixelColor(99, r, g, b);
    matrix.setPixelColor(100, r, g, b);
    matrix.setPixelColor(101, r, g, b);
    matrix.setPixelColor(102, r, g, b);
    matrix.setPixelColor(103, r, g, b);
    matrix.setPixelColor(104, r, g, b);
    matrix.setPixelColor(106, r, g, b);
    matrix.setPixelColor(108, r, g, b);
    matrix.setPixelColor(111, r, g, b);
    matrix.setPixelColor(112, r, g, b);
    matrix.setPixelColor(115, r, g, b);
    matrix.setPixelColor(117, r, g, b);
    matrix.setPixelColor(119, r, g, b);
    matrix.setPixelColor(120, r, g, b);
    matrix.setPixelColor(121, r, g, b);
    matrix.setPixelColor(122, r, g, b);
    matrix.setPixelColor(123, r, g, b);
    matrix.setPixelColor(124, r, g, b);
    matrix.setPixelColor(125, r, g, b);
    matrix.setPixelColor(126, r, g, b);
    matrix.setPixelColor(127, r, g, b);
    matrix.setPixelColor(137, r, g, b);
    matrix.setPixelColor(140, r, g, b);
    matrix.setPixelColor(144, r, g, b);
    matrix.setPixelColor(145, r, g, b);
    matrix.setPixelColor(146, r, g, b);
    matrix.setPixelColor(147, r, g, b);
    matrix.setPixelColor(148, r, g, b);
    matrix.setPixelColor(149, r, g, b);
    matrix.setPixelColor(150, r, g, b);
    matrix.setPixelColor(151, r, g, b);
    matrix.setPixelColor(153, r, g, b);
    matrix.setPixelColor(156, r, g, b);
}

void printEddy(int r, int g, int b) {
    matrix.setPixelColor(1, r, g, b);
    matrix.setPixelColor(2, r, g, b);
    matrix.setPixelColor(15, r, g, b);
    matrix.setPixelColor(16, r, g, b);
    matrix.setPixelColor(17, r, g, b);
    matrix.setPixelColor(19, r, g, b);
    matrix.setPixelColor(20, r, g, b);
    matrix.setPixelColor(21, r, g, b);
    matrix.setPixelColor(22, r, g, b);
    matrix.setPixelColor(23, r, g, b);
    matrix.setPixelColor(27, r, g, b);
    matrix.setPixelColor(28, r, g, b);
    matrix.setPixelColor(31, r, g, b);
    matrix.setPixelColor(32, r, g, b);
    matrix.setPixelColor(40, r, g, b);
    matrix.setPixelColor(41, r, g, b);
    matrix.setPixelColor(42, r, g, b);
    matrix.setPixelColor(43, r, g, b);
    matrix.setPixelColor(44, r, g, b);
    matrix.setPixelColor(47, r, g, b);
    matrix.setPixelColor(48, r, g, b);
    matrix.setPixelColor(51, r, g, b);
    matrix.setPixelColor(52, r, g, b);
    matrix.setPixelColor(63, r, g, b);
    matrix.setPixelColor(64, r, g, b);
    matrix.setPixelColor(67, r, g, b);
    matrix.setPixelColor(69, r, g, b);
    matrix.setPixelColor(71, r, g, b);
    matrix.setPixelColor(72, r, g, b);
    matrix.setPixelColor(74, r, g, b);
    matrix.setPixelColor(76, r, g, b);
    matrix.setPixelColor(79, r, g, b);
    matrix.setPixelColor(80, r, g, b);
    matrix.setPixelColor(83, r, g, b);
    matrix.setPixelColor(84, r, g, b);
    matrix.setPixelColor(85, r, g, b);
    matrix.setPixelColor(86, r, g, b);
    matrix.setPixelColor(8, r, g, b);
}


void printC1(int r, int g, int b) {
    matrix.setPixelColor(0, r, g, b);
    matrix.setPixelColor(1, r, g, b);
    matrix.setPixelColor(2, r, g, b);
    matrix.setPixelColor(3, r, g, b);
    matrix.setPixelColor(4, r, g, b);
    matrix.setPixelColor(5, r, g, b);
    matrix.setPixelColor(6, r, g, b);
    matrix.setPixelColor(7, r, g, b);
    matrix.setPixelColor(8, r, g, b);
    matrix.setPixelColor(23, r, g, b);
    matrix.setPixelColor(24, r, g, b);
    matrix.setPixelColor(39, r, g, b);
    matrix.setPixelColor(40, r, g, b);
    matrix.setPixelColor(55, r, g, b);
    matrix.setPixelColor(56, r, g, b);
    matrix.setPixelColor(71, r, g, b);
    matrix.setPixelColor(72, r, g, b);
    matrix.setPixelColor(87, r, g, b);

    matrix.setPixelColor(247, r, g, b);
    matrix.setPixelColor(248, r, g, b);
}

void printC2(int r, int g, int b) {
    matrix.setPixelColor(9, r, g, b);
    matrix.setPixelColor(10, r, g, b);
    matrix.setPixelColor(11, r, g, b);
    matrix.setPixelColor(12, r, g, b);
    matrix.setPixelColor(13, r, g, b);
    matrix.setPixelColor(14, r, g, b);
    matrix.setPixelColor(15, r, g, b);

    matrix.setPixelColor(22, r, g, b);
    matrix.setPixelColor(25, r, g, b);
    matrix.setPixelColor(38, r, g, b);
    matrix.setPixelColor(41, r, g, b);
    matrix.setPixelColor(54, r, g, b);
    matrix.setPixelColor(57, r, g, b);
    matrix.setPixelColor(70, r, g, b);
    matrix.setPixelColor(73, r, g, b);
    matrix.setPixelColor(86, r, g, b);

    matrix.setPixelColor(246, r, g, b);
    matrix.setPixelColor(249, r, g, b);

}

void printC3(int r, int g, int b) {
    matrix.setPixelColor(16, r, g, b);
    matrix.setPixelColor(17, r, g, b);
    matrix.setPixelColor(18, r, g, b);
    matrix.setPixelColor(19, r, g, b);
    matrix.setPixelColor(20, r, g, b);
    matrix.setPixelColor(21, r, g, b);

    matrix.setPixelColor(26, r, g, b);
    matrix.setPixelColor(37, r, g, b);
    matrix.setPixelColor(42, r, g, b);
    matrix.setPixelColor(53, r, g, b);
    matrix.setPixelColor(58, r, g, b);
    matrix.setPixelColor(69, r, g, b);
    matrix.setPixelColor(74, r, g, b);
    matrix.setPixelColor(85, r, g, b);

    matrix.setPixelColor(245, r, g, b);
    matrix.setPixelColor(250, r, g, b);
}

void printC4(int r, int g, int b) {
    matrix.setPixelColor(31, r, g, b);
    matrix.setPixelColor(30, r, g, b);
    matrix.setPixelColor(29, r, g, b);
    matrix.setPixelColor(28, r, g, b);
    matrix.setPixelColor(27, r, g, b);

    matrix.setPixelColor(36, r, g, b);
    matrix.setPixelColor(43, r, g, b);
    matrix.setPixelColor(52, r, g, b);
    matrix.setPixelColor(59, r, g, b);
    matrix.setPixelColor(68, r, g, b);
    matrix.setPixelColor(75, r, g, b);
    matrix.setPixelColor(84, r, g, b);

    matrix.setPixelColor(244, r, g, b);
    matrix.setPixelColor(251, r, g, b);
}

void printC5(int r, int g, int b) {
    matrix.setPixelColor(32, r, g, b);
    matrix.setPixelColor(33, r, g, b);
    matrix.setPixelColor(34, r, g, b);
    matrix.setPixelColor(35, r, g, b);

    matrix.setPixelColor(44, r, g, b);
    matrix.setPixelColor(51, r, g, b);
    matrix.setPixelColor(60, r, g, b);
    matrix.setPixelColor(67, r, g, b);
    matrix.setPixelColor(76, r, g, b);
    matrix.setPixelColor(83, r, g, b);

    matrix.setPixelColor(243, r, g, b);
    matrix.setPixelColor(252, r, g, b);
}

void printC6(int r, int g, int b) {
    matrix.setPixelColor(47, r, g, b);
    matrix.setPixelColor(46, r, g, b);
    matrix.setPixelColor(45, r, g, b);

    matrix.setPixelColor(50, r, g, b);
    matrix.setPixelColor(61, r, g, b);
    matrix.setPixelColor(66, r, g, b);
    matrix.setPixelColor(77, r, g, b);
    matrix.setPixelColor(82, r, g, b);

    matrix.setPixelColor(242, r, g, b);
    matrix.setPixelColor(253, r, g, b);
}

void printC7(int r, int g, int b) {
    matrix.setPixelColor(48, r, g, b);
    matrix.setPixelColor(49, r, g, b);
    matrix.setPixelColor(63, r, g, b);

    matrix.setPixelColor(62, r, g, b);
    matrix.setPixelColor(64, r, g, b);
    matrix.setPixelColor(65, r, g, b);
    matrix.setPixelColor(79, r, g, b);
    matrix.setPixelColor(78, r, g, b);
    matrix.setPixelColor(80, r, g, b);
    matrix.setPixelColor(81, r, g, b);

    matrix.setPixelColor(240, r, g, b);
    matrix.setPixelColor(241, r, g, b);
    matrix.setPixelColor(254, r, g, b);
    matrix.setPixelColor(255, r, g, b);
}

void printColor() {
    printC1(240, 0, 0);
    printC2(160, 80, 0);
    printC3(120, 120, 0);
    printC4(0, 240, 0);
    printC5(0, 0, 240);
    printC6(0, 120, 120);
    printC7(120, 0, 120);
}

int x = matrix.width();
int pass = 0;

int colors[7][3] = {{240, 0,   0},
                    {160, 80,  0},
                    {120, 120, 0},
                    {0,   240, 0},
                    {0,   0,   240},
                    {0,   120, 120},
                    {120, 0,   120}
};

void loop() {
    if (pass > 6) pass = 0;
    matrix.fillScreen(0);
    printString(colors[pass][0], colors[pass][1], colors[pass][2]);
    printImage(colors[pass][0], colors[pass][1], colors[pass][2]);
    printColor();
    matrix.show();
    delay(1000);

    matrix.fillScreen(matrix.Color(colors[pass][0], colors[pass][1], colors[pass][2]));
    printColor();
    matrix.show();
    pass++;
    delay(100);

}

