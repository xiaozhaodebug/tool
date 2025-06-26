/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *StartDevice;
    QPushButton *CloseDevice;
    QPushButton *uds_ota;
    QProgressBar *progressBar;
    QPushButton *open_ota_file;
    QTextBrowser *path_name;
    QLabel *label_2;
    QPushButton *pushButtonSendData;
    QLineEdit *lineEditID;
    QLineEdit *lineEditData;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *open_ota_file_2;
    QTextBrowser *path_name_2;
    QPushButton *open_ota_file_3;
    QTextBrowser *path_name_3;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *line_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_UdsReqID;
    QLineEdit *lineEdit_UdsResID;
    QLabel *label_12;
    QTextBrowser *path_name_4;
    QPushButton *open_ota_file_4;
    QTextBrowser *showLog;
    QLabel *label_13;
    QTextBrowser *FlashDriverPath;
    QPushButton *OpenFlashDriver;
    QPushButton *ButtonTransferFlash;
    QLabel *label_14;
    QProgressBar *progressBarFlash;
    QComboBox *comboBox;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_15;
    QFrame *line_5;
    QTextBrowser *ExcelPath;
    QPushButton *OpenExcelPath;
    QTextBrowser *FlashDriverPath_3;
    QPushButton *ButtonGenDBC;
    QTextBrowser *FlashDriverPath_4;
    QLabel *label_16;
    QTextBrowser *OutputPath;
    QPushButton *OpenExcelPath_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(804, 558);
        StartDevice = new QPushButton(Widget);
        StartDevice->setObjectName(QString::fromUtf8("StartDevice"));
        StartDevice->setGeometry(QRect(30, 40, 91, 41));
        CloseDevice = new QPushButton(Widget);
        CloseDevice->setObjectName(QString::fromUtf8("CloseDevice"));
        CloseDevice->setGeometry(QRect(160, 40, 101, 41));
        uds_ota = new QPushButton(Widget);
        uds_ota->setObjectName(QString::fromUtf8("uds_ota"));
        uds_ota->setGeometry(QRect(240, 250, 71, 31));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 293, 271, 20));
        progressBar->setValue(0);
        open_ota_file = new QPushButton(Widget);
        open_ota_file->setObjectName(QString::fromUtf8("open_ota_file"));
        open_ota_file->setGeometry(QRect(180, 250, 51, 31));
        path_name = new QTextBrowser(Widget);
        path_name->setObjectName(QString::fromUtf8("path_name"));
        path_name->setGeometry(QRect(30, 250, 141, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 141, 21));
        pushButtonSendData = new QPushButton(Widget);
        pushButtonSendData->setObjectName(QString::fromUtf8("pushButtonSendData"));
        pushButtonSendData->setGeometry(QRect(640, 130, 93, 28));
        lineEditID = new QLineEdit(Widget);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setGeometry(QRect(410, 140, 81, 21));
        lineEditData = new QLineEdit(Widget);
        lineEditData->setObjectName(QString::fromUtf8("lineEditData"));
        lineEditData->setGeometry(QRect(410, 180, 291, 21));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 140, 68, 15));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 180, 68, 15));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 90, 101, 16));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 120, 101, 16));
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(320, 0, 20, 321));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 320, 331, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 120, 31, 16));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 10, 101, 16));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 330, 68, 15));
        open_ota_file_2 = new QPushButton(Widget);
        open_ota_file_2->setObjectName(QString::fromUtf8("open_ota_file_2"));
        open_ota_file_2->setGeometry(QRect(270, 350, 51, 31));
        path_name_2 = new QTextBrowser(Widget);
        path_name_2->setObjectName(QString::fromUtf8("path_name_2"));
        path_name_2->setGeometry(QRect(60, 350, 171, 31));
        open_ota_file_3 = new QPushButton(Widget);
        open_ota_file_3->setObjectName(QString::fromUtf8("open_ota_file_3"));
        open_ota_file_3->setGeometry(QRect(270, 400, 51, 31));
        path_name_3 = new QTextBrowser(Widget);
        path_name_3->setObjectName(QString::fromUtf8("path_name_3"));
        path_name_3->setGeometry(QRect(60, 400, 171, 31));
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 360, 81, 16));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 410, 68, 15));
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(310, 320, 41, 161));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 450, 93, 28));
        lineEdit_UdsReqID = new QLineEdit(Widget);
        lineEdit_UdsReqID->setObjectName(QString::fromUtf8("lineEdit_UdsReqID"));
        lineEdit_UdsReqID->setGeometry(QRect(150, 90, 113, 21));
        lineEdit_UdsResID = new QLineEdit(Widget);
        lineEdit_UdsResID->setObjectName(QString::fromUtf8("lineEdit_UdsResID"));
        lineEdit_UdsResID->setGeometry(QRect(150, 120, 113, 21));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(350, 50, 81, 20));
        path_name_4 = new QTextBrowser(Widget);
        path_name_4->setObjectName(QString::fromUtf8("path_name_4"));
        path_name_4->setGeometry(QRect(420, 40, 171, 31));
        open_ota_file_4 = new QPushButton(Widget);
        open_ota_file_4->setObjectName(QString::fromUtf8("open_ota_file_4"));
        open_ota_file_4->setGeometry(QRect(610, 40, 51, 31));
        showLog = new QTextBrowser(Widget);
        showLog->setObjectName(QString::fromUtf8("showLog"));
        showLog->setGeometry(QRect(360, 220, 381, 251));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(340, 200, 68, 15));
        FlashDriverPath = new QTextBrowser(Widget);
        FlashDriverPath->setObjectName(QString::fromUtf8("FlashDriverPath"));
        FlashDriverPath->setGeometry(QRect(30, 180, 141, 31));
        OpenFlashDriver = new QPushButton(Widget);
        OpenFlashDriver->setObjectName(QString::fromUtf8("OpenFlashDriver"));
        OpenFlashDriver->setGeometry(QRect(180, 180, 51, 31));
        ButtonTransferFlash = new QPushButton(Widget);
        ButtonTransferFlash->setObjectName(QString::fromUtf8("ButtonTransferFlash"));
        ButtonTransferFlash->setGeometry(QRect(240, 180, 71, 31));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 150, 121, 16));
        progressBarFlash = new QProgressBar(Widget);
        progressBarFlash->setObjectName(QString::fromUtf8("progressBarFlash"));
        progressBarFlash->setGeometry(QRect(30, 220, 271, 20));
        progressBarFlash->setValue(0);
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 150, 111, 22));
        line_4 = new QFrame(Widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(330, 110, 471, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(690, 10, 101, 101));
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(167, 0, 101, 20));
        line_5 = new QFrame(Widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 470, 801, 21));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        ExcelPath = new QTextBrowser(Widget);
        ExcelPath->setObjectName(QString::fromUtf8("ExcelPath"));
        ExcelPath->setGeometry(QRect(120, 490, 141, 31));
        OpenExcelPath = new QPushButton(Widget);
        OpenExcelPath->setObjectName(QString::fromUtf8("OpenExcelPath"));
        OpenExcelPath->setGeometry(QRect(290, 490, 61, 31));
        FlashDriverPath_3 = new QTextBrowser(Widget);
        FlashDriverPath_3->setObjectName(QString::fromUtf8("FlashDriverPath_3"));
        FlashDriverPath_3->setGeometry(QRect(-10, 800, 141, 31));
        ButtonGenDBC = new QPushButton(Widget);
        ButtonGenDBC->setObjectName(QString::fromUtf8("ButtonGenDBC"));
        ButtonGenDBC->setGeometry(QRect(680, 490, 71, 31));
        FlashDriverPath_4 = new QTextBrowser(Widget);
        FlashDriverPath_4->setObjectName(QString::fromUtf8("FlashDriverPath_4"));
        FlashDriverPath_4->setGeometry(QRect(-10, 1110, 141, 31));
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 500, 101, 16));
        OutputPath = new QTextBrowser(Widget);
        OutputPath->setObjectName(QString::fromUtf8("OutputPath"));
        OutputPath->setGeometry(QRect(380, 490, 141, 31));
        OpenExcelPath_2 = new QPushButton(Widget);
        OpenExcelPath_2->setObjectName(QString::fromUtf8("OpenExcelPath_2"));
        OpenExcelPath_2->setGeometry(QRect(550, 490, 61, 31));
        open_ota_file->raise();
        StartDevice->raise();
        CloseDevice->raise();
        uds_ota->raise();
        progressBar->raise();
        path_name->raise();
        label_2->raise();
        pushButtonSendData->raise();
        lineEditID->raise();
        lineEditData->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        line->raise();
        line_2->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        open_ota_file_2->raise();
        path_name_2->raise();
        open_ota_file_3->raise();
        path_name_3->raise();
        label_10->raise();
        label_11->raise();
        line_3->raise();
        pushButton->raise();
        lineEdit_UdsReqID->raise();
        lineEdit_UdsResID->raise();
        label_12->raise();
        path_name_4->raise();
        open_ota_file_4->raise();
        showLog->raise();
        label_13->raise();
        FlashDriverPath->raise();
        OpenFlashDriver->raise();
        ButtonTransferFlash->raise();
        label_14->raise();
        progressBarFlash->raise();
        comboBox->raise();
        line_4->raise();
        label->raise();
        label_15->raise();
        line_5->raise();
        ExcelPath->raise();
        OpenExcelPath->raise();
        FlashDriverPath_3->raise();
        ButtonGenDBC->raise();
        FlashDriverPath_4->raise();
        label_16->raise();
        OutputPath->raise();
        OpenExcelPath_2->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\201\224\347\263\273\346\210\221:\345\260\217\346\230\255debug", nullptr));
        StartDevice->setText(QCoreApplication::translate("Widget", "OPEN_CANII", nullptr));
        CloseDevice->setText(QCoreApplication::translate("Widget", "CLOSE_CANII", nullptr));
        uds_ota->setText(QCoreApplication::translate("Widget", "UPDATE", nullptr));
        open_ota_file->setText(QCoreApplication::translate("Widget", "..", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\201\224\347\263\273\346\210\221\357\274\232\345\260\217\346\230\255debug", nullptr));
        pushButtonSendData->setText(QCoreApplication::translate("Widget", "SEND", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "ID_Hex:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "DATA_Hex:", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "UDS_REQ_ID:", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "UDS_RES_ID:", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "CANTP", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Encryption", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Pack", nullptr));
        open_ota_file_2->setText(QCoreApplication::translate("Widget", "..", nullptr));
        open_ota_file_3->setText(QCoreApplication::translate("Widget", "..", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "BOOT:", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "APP:", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PACK", nullptr));
        lineEdit_UdsReqID->setText(QCoreApplication::translate("Widget", "7CA", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "ENCRY_APP:", nullptr));
        open_ota_file_4->setText(QCoreApplication::translate("Widget", "..", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "LOG:", nullptr));
        OpenFlashDriver->setText(QCoreApplication::translate("Widget", "..", nullptr));
        ButtonTransferFlash->setText(QCoreApplication::translate("Widget", "FLASH", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "UPDATE_ADDRESS:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "NXP", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "ST 0x801 0000", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "ST 0x802 0000", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "Tricore", nullptr));

        label->setText(QCoreApplication::translate("Widget", "vx", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "\347\211\210\346\234\254\357\274\2322.2.0", nullptr));
        ExcelPath->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        OpenExcelPath->setText(QCoreApplication::translate("Widget", "EXCEL", nullptr));
        ButtonGenDBC->setText(QCoreApplication::translate("Widget", "GEN_DBC", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "Excel_To_DBC", nullptr));
        OutputPath->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        OpenExcelPath_2->setText(QCoreApplication::translate("Widget", "DBC_PATH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
