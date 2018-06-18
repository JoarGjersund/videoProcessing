#pragma once

#include <QtWidgets/QWidget>
#include "ui_videoprocessing.h"
#include <opencv2/highgui/highgui.hpp>

#include <qlabel.h>
#include <qgridlayout.h>

#include "videoprocessing.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <qtimer.h>
#include <qdebug.h>
#include <qlabel.h>


class videoProcessing : public QWidget
{
	Q_OBJECT

public:
	videoProcessing(QWidget *parent = Q_NULLPTR);
	void Stream();
	QImage Mat2QImage(cv::Mat const& src);
private:
	Ui::videoProcessingClass ui;
	QLabel* imgDisplayLabel;
	QGridLayout* layout;
	QFrame* ui_videoFrame;

};
