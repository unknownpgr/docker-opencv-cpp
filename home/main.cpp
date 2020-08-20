#include <stdio.h>
#include <opencv2/opencv.hpp>

int main()
{
    printf("Hello world!\n");
    printf("We will convert color image into gray scale image with opencv.\n");
    printf("\n");

    cv::Mat image;
    image = cv::imread("./img.png");
    cv::cvtColor(image, image, cv::COLOR_BGR2GRAY);
    cv::imwrite("./result.jpg", image);
    return 0;
}