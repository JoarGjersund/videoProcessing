#include "videoprocessing.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <qtimer.h>
#include <qdebug.h>
#include <qlabel.h>

#include <QtUiTools>
cv::VideoCapture stream1(0);

videoProcessing::videoProcessing(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);

	QTimer *timer = new QTimer;
	connect(timer, &QTimer::timeout, this, &videoProcessing::Stream);
	timer->start(20);
	layout = new QGridLayout();
	imgDisplayLabel = new QLabel("");
	//imgDisplayLabel->setScaledContents(true); // enable to make video scale with window. (can slow down app)
	layout->addWidget(imgDisplayLabel);
	
	ui_videoFrame = findChild<QFrame*>("videoFrame");
	ui_videoFrame->setStyleSheet("background-color:black;");
	ui_videoFrame->setLayout(layout);
	//setLayout(layout);
	QLineEdit* ui_lineEdit = findChild<QLineEdit*>("lineEdit");


}

void videoProcessing::Stream()
{

	qDebug() << "Camera successfully connected.";
	cv::Mat cameraFrame;
	stream1.read(cameraFrame);


	QLineEdit* ui_lineEdit = findChild<QLineEdit*>("lineEdit");
	QSpinBox* ui_f1 = findChild<QSpinBox*>("f1");
	QSpinBox* ui_f2 = findChild<QSpinBox*>("f2");
	QSpinBox* ui_f3 = findChild<QSpinBox*>("f3");
	QSpinBox* ui_f4 = findChild<QSpinBox*>("f4");
	QSpinBox* ui_f5 = findChild<QSpinBox*>("f5");
	QSpinBox* ui_f6 = findChild<QSpinBox*>("f6");
	QSpinBox* ui_f7 = findChild<QSpinBox*>("f7");
	QSpinBox* ui_f8 = findChild<QSpinBox*>("f8");
	QSpinBox* ui_f9 = findChild<QSpinBox*>("f9");



	cv::Mat kernel = (cv::Mat_<double>(3, 3) <<
		ui_f1->text().toDouble(), ui_f2->text().toDouble(), ui_f3->text().toDouble(),
		ui_f4->text().toDouble(), ui_f5->text().toDouble(), ui_f6->text().toDouble(),
		ui_f7->text().toDouble(), ui_f8->text().toDouble(), ui_f9->text().toDouble()
			);

	cv::Mat kernel2 = (cv::Mat_<double>(3, 3) <<
		rand() % 50 - 25, rand() % 50 - 25, rand() % 50 - 25,
		rand() % 50 - 25, rand() % 50 - 25, rand() % 50 - 25,
		rand() % 50 - 25, rand() % 50 - 25, rand() % 50 - 25
		);


	//cv::filter2D(cameraFrame, cameraFrame, -1, kernel2, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);
	cv::filter2D(cameraFrame, cameraFrame, -1, kernel, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);

	imgDisplayLabel->setPixmap(QPixmap::fromImage(Mat2QImage(cameraFrame)));

}

QImage videoProcessing::Mat2QImage(cv::Mat const& src)
{
	cv::Mat temp; // make the same cv::Mat
	cv::cvtColor(src, temp, CV_BGR2RGB); // cvtColor Makes a copt, that what i need
	QImage dest((const uchar *)temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
	dest.bits(); // enforce deep copy, see documentation 
				 // of QImage::QImage ( const uchar * data, int width, int height, Format format )
	return dest;
}