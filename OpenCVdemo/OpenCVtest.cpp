
#include<iostream>
#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("C:\\Users\\10141\\Downloads\\testimg.jpg");
	imshow("ÏÔÊ¾Í¼Ïñ", img);
	waitKey(0);
	return 0;

	cout << "hello world";
}