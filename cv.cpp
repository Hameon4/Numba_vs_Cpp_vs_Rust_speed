#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
using namespace std;
using namespace cv;


int main() {
	VideoCapture cap(0);
	Mat img;
	cap.set(3, 640);
	cap.set(4, 480);

	CascadeClassifier faceCascade, eyeCascade;
	faceCascade.load("Resources/haarcascade_frontalface_default.xml");

	if (faceCascade.empty())
		cout << "XML file not loaded" << endl;

	vector<Rect> faces;
	Mat imgGray;
	while (true) {
		cap.read(img);
		cvtColor(img, imgGray, COLOR_BGR2GRAY);
		faceCascade.detectMultiScale(imgGray, faces, 1.1, 10);
		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 0, 255, 2));
		}
		imshow("Webcam", img);
		waitKey(10);
	}
	return 0;
}
