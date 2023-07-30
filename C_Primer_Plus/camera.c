#include<iostream>
using namespace std;

#include "opencv.hpp"
using namespace cv;

int main()
{
    VideoCapture capture(0);    //调用摄像头
    while (1)   //循环显示每一帧
    {
        Mat frame;  //储存一帧图像
        capture>>frame; //读取当前帧
        imshow("调用摄像头", frame); //显示当前读入的一帧图像
        waitKey(10);    //延时10ms

    }
    return 0;
}