#include<cv.h>
#include<highgui.h>
#include<iostream>

int main(int argc, char ** argv)
{
    using namespace std;
    cout << " test start " << endl;
    CvCapture * capture = cvCreateFileCapture(argv[1]);
//    cvNamedWindow("video", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("video");
    while(1)
    {
        IplImage * image = cvQueryFrame(capture);
        cvShowImage("video", image);
        cvSmooth(image,image, CV_GAUSSIAN,3,3);
        char k = cvWaitKey(33);
        if (k==27)
            break;
    }
//    cvRleaseImage(image);
    //  cvDestoryWindow("video");
    return 0;
}
