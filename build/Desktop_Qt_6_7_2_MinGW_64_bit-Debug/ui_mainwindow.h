/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *login;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *signup;
    QLabel *label_7;
    QWidget *page_2;
    QFrame *frame_2;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *register_2;
    QLabel *label_8;
    QLabel *label_12;
    QWidget *page_3;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *label_9;
    QLabel *labelWeight_9;
    QLabel *labelHeight_9;
    QPushButton *calculateButton_9;
    QLabel *resultLabel_9;
    QLineEdit *weightEdit_9;
    QLineEdit *heightEdit_9;
    QPushButton *nexttobodytypes;
    QPushButton *backtologin;
    QWidget *page_4;
    QFrame *frame_5;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *ectomorph;
    QPushButton *mesomorph;
    QPushButton *endomorph;
    QPushButton *backtobmi;
    QLabel *label_10;
    QWidget *page_5;
    QFrame *frame_7;
    QLabel *label_28;
    QPushButton *characteristics;
    QLabel *label_29;
    QPushButton *nutritionanddiet;
    QPushButton *exerciseandworkout;
    QPushButton *pushButton_13;
    QLabel *label_30;
    QWidget *page_6;
    QFrame *frame_6;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *hometoectobody;
    QLabel *label_20;
    QLabel *label_21;
    QTextBrowser *textBrowser;
    QWidget *page_7;
    QFrame *frame_8;
    QLabel *label_22;
    QLabel *label_23;
    QTextBrowser *textBrowser_2;
    QLabel *label_24;
    QLabel *label_34;
    QLabel *label_25;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QTextBrowser *textBrowser_3;
    QPushButton *hometoecto_2;
    QWidget *page_8;
    QFrame *frame_9;
    QLabel *label_40;
    QPushButton *characteristicsmeso;
    QLabel *label_41;
    QPushButton *nutritionmeso;
    QLabel *label_42;
    QPushButton *exercisemeso;
    QPushButton *pushButton_19;
    QWidget *page_9;
    QFrame *frame_10;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QPushButton *homemeso;
    QLabel *label_46;
    QLabel *label_47;
    QWidget *page_10;
    QFrame *frame_11;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QPushButton *homenutro;
    QWidget *page_11;
    QFrame *frame_12;
    QLabel *label_53;
    QPushButton *characteristicsendo;
    QLabel *label_54;
    QLabel *label_55;
    QPushButton *nutritionendo;
    QPushButton *exerciseendo;
    QPushButton *backtohomeendo;
    QWidget *page_12;
    QFrame *frame_13;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_59;
    QPushButton *pushButton_24;
    QWidget *page_13;
    QFrame *frame_14;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(822, 587);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-50, -170, 871, 731));
        page = new QWidget();
        page->setObjectName("page");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 170, 871, 591));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 130, 141, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"color: #1A1423;\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 180, 231, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(9);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(124, 124, 124);\n"
"background-color: #F0EDEE;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(442, 220, 301, 41));
        QFont font3;
        font3.setPointSize(12);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(440, 280, 301, 41));
        lineEdit_2->setFont(font3);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        login = new QPushButton(frame);
        login->setObjectName("login");
        login->setGeometry(QRect(460, 350, 251, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka Banner")});
        font4.setPointSize(12);
        font4.setBold(true);
        login->setFont(font4);
        login->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#login{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#login:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#login:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 400, 141, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sitka Banner")});
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 781, 531));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_5->setScaledContents(true);
        signup = new QPushButton(frame);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(550, 420, 83, 31));
        signup->setFont(font4);
        signup->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#signup{\n"
"	background-color: #F0EDEE;\n"
"	color:rgba(85, 98, 112, 255);\n"
"	border-radius:5px;\n"
"}"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(52, 39, 371, 471));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/images/gym);\n"
"border-image: url(:/images/.png);\n"
"border-radius:50px;"));
        label_5->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        login->raise();
        label_3->raise();
        signup->raise();
        label_7->raise();
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 160, 871, 571));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 20, 781, 531));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 60, 141, 41));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"color: #1A1423;\n"
""));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(250, 150, 141, 41));
        lineEdit_4->setFont(font3);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"padding-bottom:7px;\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"border-radius:5px;"));
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(80, 270, 311, 41));
        lineEdit_5->setFont(font3);
        lineEdit_5->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(80, 330, 311, 41));
        lineEdit_6->setFont(font3);
        lineEdit_6->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(80, 150, 141, 41));
        lineEdit_7->setFont(font3);
        lineEdit_7->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        lineEdit_8 = new QLineEdit(frame_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(80, 210, 311, 41));
        lineEdit_8->setFont(font3);
        lineEdit_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;"));
        register_2 = new QPushButton(frame_2);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(110, 410, 251, 31));
        register_2->setFont(font4);
        register_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#register_2{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#register_2:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#register_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(430, 40, 371, 471));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ect.jpg);\n"
"border-radius:50px;"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(140, 110, 191, 20));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color:rgb(163, 163, 163);\n"
"background-color: #F0EDEE;"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 150, 871, 651));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(110, 30, 641, 501));
        frame_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 40, 231, 41));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"color: #1A1423;\n"
""));
        labelWeight_9 = new QLabel(frame_4);
        labelWeight_9->setObjectName("labelWeight_9");
        labelWeight_9->setGeometry(QRect(110, 150, 141, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Sitka Banner")});
        font6.setPointSize(14);
        font6.setBold(false);
        labelWeight_9->setFont(font6);
        labelWeight_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"color: #1A1423;\n"
""));
        labelHeight_9 = new QLabel(frame_4);
        labelHeight_9->setObjectName("labelHeight_9");
        labelHeight_9->setGeometry(QRect(110, 200, 141, 41));
        labelHeight_9->setFont(font6);
        labelHeight_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"color: #1A1423;\n"
""));
        calculateButton_9 = new QPushButton(frame_4);
        calculateButton_9->setObjectName("calculateButton_9");
        calculateButton_9->setGeometry(QRect(190, 290, 241, 31));
        calculateButton_9->setFont(font4);
        calculateButton_9->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#calculateButton_9{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#calculateButton_9:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#calculateButton_9:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        resultLabel_9 = new QLabel(frame_4);
        resultLabel_9->setObjectName("resultLabel_9");
        resultLabel_9->setGeometry(QRect(240, 350, 211, 51));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Sitka Banner")});
        font7.setPointSize(12);
        resultLabel_9->setFont(font7);
        resultLabel_9->setStyleSheet(QString::fromUtf8("color: rgb(150, 150, 150);"));
        weightEdit_9 = new QLineEdit(frame_4);
        weightEdit_9->setObjectName("weightEdit_9");
        weightEdit_9->setGeometry(QRect(250, 150, 171, 41));
        weightEdit_9->setFont(font3);
        weightEdit_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(255, 255, 255);\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;\n"
""));
        heightEdit_9 = new QLineEdit(frame_4);
        heightEdit_9->setObjectName("heightEdit_9");
        heightEdit_9->setGeometry(QRect(250, 200, 171, 41));
        heightEdit_9->setFont(font3);
        heightEdit_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(255, 255, 255);\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"\n"
"border-bottom-color: rgb(26, 20, 35);\n"
"padding-bottom:7px;\n"
"border-radius:5px;\n"
""));
        nexttobodytypes = new QPushButton(frame_4);
        nexttobodytypes->setObjectName("nexttobodytypes");
        nexttobodytypes->setGeometry(QRect(550, 420, 31, 31));
        nexttobodytypes->setFont(font4);
        nexttobodytypes->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#nexttobodytypes{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#nexttobodytypes:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#nexttobodytypes:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        backtologin = new QPushButton(frame_4);
        backtologin->setObjectName("backtologin");
        backtologin->setGeometry(QRect(500, 420, 31, 31));
        backtologin->setFont(font4);
        backtologin->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#backtologin{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#backtologin:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#backtologin:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_5 = new QFrame(page_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(60, 190, 791, 541));
        frame_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frame_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(290, 80, 241, 20));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(158, 158, 158)\n"
""));
        label_13 = new QLabel(frame_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(290, 120, 191, 291));
        label_13->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/mesomorph.png);\n"
"border-image: url(:/images/mesomorph.png);\n"
"border-radius:50px;"));
        label_14 = new QLabel(frame_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(60, 120, 181, 291));
        label_14->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ectomorph.jpeg);\n"
"border-radius:50px;"));
        label_15 = new QLabel(frame_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(530, 120, 211, 291));
        label_15->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/endomorph.png);\n"
"border-image: url(:/images/endomorph.png);\n"
"border-radius:50px;"));
        ectomorph = new QPushButton(frame_5);
        ectomorph->setObjectName("ectomorph");
        ectomorph->setGeometry(QRect(70, 440, 161, 31));
        ectomorph->setFont(font4);
        ectomorph->setFocusPolicy(Qt::ClickFocus);
        ectomorph->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#ectomorph{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#ectomorph:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#ectomorph:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        mesomorph = new QPushButton(frame_5);
        mesomorph->setObjectName("mesomorph");
        mesomorph->setGeometry(QRect(310, 440, 161, 31));
        mesomorph->setFont(font4);
        mesomorph->setFocusPolicy(Qt::ClickFocus);
        mesomorph->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#mesomorph{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#mesomorph:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_5:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        endomorph = new QPushButton(frame_5);
        endomorph->setObjectName("endomorph");
        endomorph->setGeometry(QRect(550, 440, 161, 31));
        endomorph->setFont(font4);
        endomorph->setFocusPolicy(Qt::ClickFocus);
        endomorph->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#endomorph{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#endomorph:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#endomorph:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        backtobmi = new QPushButton(frame_5);
        backtobmi->setObjectName("backtobmi");
        backtobmi->setGeometry(QRect(30, 20, 31, 31));
        backtobmi->setFont(font4);
        backtobmi->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#backtobmi{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#backtobmi:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#backtobmi:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_10 = new QLabel(frame_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(280, 20, 211, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Sitka Banner")});
        font8.setPointSize(17);
        font8.setBold(true);
        label_10->setFont(font8);
        label_10->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_10->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_7 = new QFrame(page_5);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(60, 180, 791, 551));
        frame_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 253, 248);\n"
"background-color: rgb(255, 255, 255);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(frame_7);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(40, 70, 221, 321));
        label_28->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/ectomorph);\n"
"border-image: url(:/images/ectomorph.jpeg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        characteristics = new QPushButton(frame_7);
        characteristics->setObjectName("characteristics");
        characteristics->setGeometry(QRect(40, 370, 221, 81));
        QFont font9;
        font9.setPointSize(8);
        font9.setBold(true);
        characteristics->setFont(font9);
        characteristics->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#characteristics{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#characteristics:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        label_29 = new QLabel(frame_7);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(300, 70, 221, 321));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/images/diet.jpg);\n"
"\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        label_29->setScaledContents(false);
        nutritionanddiet = new QPushButton(frame_7);
        nutritionanddiet->setObjectName("nutritionanddiet");
        nutritionanddiet->setGeometry(QRect(300, 370, 221, 81));
        nutritionanddiet->setFont(font9);
        nutritionanddiet->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#nutritionanddiet{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#nutritionanddiet:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        exerciseandworkout = new QPushButton(frame_7);
        exerciseandworkout->setObjectName("exerciseandworkout");
        exerciseandworkout->setGeometry(QRect(550, 370, 221, 81));
        exerciseandworkout->setFont(font9);
        exerciseandworkout->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#exerciseandworkout{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#exerciseandworkout:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        pushButton_13 = new QPushButton(frame_7);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(40, 10, 31, 31));
        pushButton_13->setFont(font4);
        pushButton_13->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_13{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_13:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_13:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_30 = new QLabel(frame_7);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(550, 70, 221, 321));
        label_30->setStyleSheet(QString::fromUtf8("border-image: url(:/images/exer.jpg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        label_30->setScaledContents(false);
        label_30->raise();
        label_28->raise();
        characteristics->raise();
        label_29->raise();
        nutritionanddiet->raise();
        exerciseandworkout->raise();
        pushButton_13->raise();
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame_6 = new QFrame(page_6);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(60, 180, 781, 561));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_16 = new QLabel(frame_6);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 70, 261, 441));
        label_16->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ectomorph.jpeg);\n"
"border-radius:50px;"));
        label_17 = new QLabel(frame_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(310, 10, 441, 61));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Sitka Banner")});
        font10.setPointSize(19);
        font10.setBold(true);
        label_17->setFont(font10);
        label_17->setStyleSheet(QString::fromUtf8("\n"
"border-radius:150px;\n"
"color: #1A1423;\n"
"\n"
"background-color: #F0EDEE;\n"
""));
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(frame_6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(290, 100, 471, 401));
        label_18->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_19 = new QLabel(frame_6);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(300, 70, 451, 31));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Sitka Banner")});
        font11.setPointSize(8);
        label_19->setFont(font11);
        label_19->setStyleSheet(QString::fromUtf8("color:rgb(158, 158, 158)\n"
""));
        hometoectobody = new QPushButton(frame_6);
        hometoectobody->setObjectName("hometoectobody");
        hometoectobody->setGeometry(QRect(40, 20, 61, 31));
        hometoectobody->setFont(font4);
        hometoectobody->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_8{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_8:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_8:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_20 = new QLabel(frame_6);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(200, 30, 91, 21));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Sitka Banner")});
        font12.setPointSize(9);
        font12.setBold(true);
        label_20->setFont(font12);
        label_20->setStyleSheet(QString::fromUtf8("color:rgb(132, 111, 89);\n"
"\n"
"\n"
"\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(frame_6);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(410, 110, 211, 21));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Sitka Banner")});
        font13.setPointSize(15);
        font13.setBold(true);
        label_21->setFont(font13);
        label_21->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_21->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(frame_6);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(295, 141, 451, 341));
        textBrowser->setFont(font5);
        textBrowser->setStyleSheet(QString::fromUtf8("color: #1A1423;\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        frame_8 = new QFrame(page_7);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(60, 180, 801, 581));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_8);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(110, 20, 331, 41));
        label_22->setFont(font10);
        label_22->setStyleSheet(QString::fromUtf8("\n"
"border-radius:150px;\n"
"color: #1A1423;\n"
"\n"
"background-color: #F0EDEE;\n"
""));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(frame_8);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 80, 321, 181));
        label_23->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        textBrowser_2 = new QTextBrowser(frame_8);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(50, 90, 271, 151));
        textBrowser_2->setFont(font2);
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: #1A1423;\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_24 = new QLabel(frame_8);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(470, 40, 251, 21));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Sitka Banner")});
        font14.setPointSize(14);
        font14.setBold(true);
        label_24->setFont(font14);
        label_24->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_24->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(frame_8);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(390, 110, 171, 111));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/images/meats.jpg);\n"
"border-radius:50px;"));
        label_25 = new QLabel(frame_8);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(370, 80, 421, 461));
        label_25->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_35 = new QLabel(frame_8);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(590, 110, 171, 111));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/images/diet.jpg);\n"
"border-radius:50px;"));
        label_36 = new QLabel(frame_8);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(390, 260, 171, 111));
        label_36->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/ectomorph);\n"
"border-image: url(:/images/broc.jpg);\n"
"border-radius:50px;"));
        label_37 = new QLabel(frame_8);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(590, 260, 171, 111));
        label_37->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/ectomorph);\n"
"border-image: url(:/images/yogurt.jpg);\n"
"border-radius:50px;"));
        label_38 = new QLabel(frame_8);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(400, 410, 171, 111));
        label_38->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/ectomorph);\n"
"border-image: url(:/images/oranges.jpg);\n"
"border-radius:50px;"));
        label_39 = new QLabel(frame_8);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(590, 410, 171, 111));
        label_39->setStyleSheet(QString::fromUtf8("border-image:url(:/images/C:/Users/DELL/Downloads/ectomorph);\n"
"border-image: url(:/images/bananas.jpg);\n"
"border-radius:50px;"));
        label_26 = new QLabel(frame_8);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(530, 90, 101, 20));
        label_26->setFont(font4);
        label_26->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(frame_8);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(510, 230, 151, 20));
        label_27->setFont(font4);
        label_27->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_27->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(frame_8);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(530, 370, 101, 20));
        label_31->setFont(font4);
        label_31->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(frame_8);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(30, 270, 321, 261));
        label_32->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_33 = new QLabel(frame_8);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(50, 280, 101, 20));
        label_33->setFont(font4);
        label_33->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_33->setAlignment(Qt::AlignCenter);
        textBrowser_3 = new QTextBrowser(frame_8);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(50, 310, 281, 191));
        textBrowser_3->setFont(font2);
        textBrowser_3->setStyleSheet(QString::fromUtf8("color: #1A1423;\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        hometoecto_2 = new QPushButton(frame_8);
        hometoecto_2->setObjectName("hometoecto_2");
        hometoecto_2->setGeometry(QRect(60, 30, 31, 31));
        hometoecto_2->setFont(font4);
        hometoecto_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_14{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_14:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_14:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_25->raise();
        label_22->raise();
        label_23->raise();
        textBrowser_2->raise();
        label_24->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_26->raise();
        label_27->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        textBrowser_3->raise();
        hometoecto_2->raise();
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        frame_9 = new QFrame(page_8);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(50, 170, 821, 581));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_40 = new QLabel(frame_9);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(50, 80, 221, 321));
        label_40->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mesomorph.png);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        characteristicsmeso = new QPushButton(frame_9);
        characteristicsmeso->setObjectName("characteristicsmeso");
        characteristicsmeso->setGeometry(QRect(50, 390, 221, 81));
        characteristicsmeso->setFont(font9);
        characteristicsmeso->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#characteristicsmeso{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#characteristicsmeso:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        label_41 = new QLabel(frame_9);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(310, 80, 221, 321));
        label_41->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ecto diet.jpg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        nutritionmeso = new QPushButton(frame_9);
        nutritionmeso->setObjectName("nutritionmeso");
        nutritionmeso->setGeometry(QRect(310, 390, 221, 81));
        nutritionmeso->setFont(font9);
        nutritionmeso->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#nutritionmeso{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#nutritionmeso:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        label_42 = new QLabel(frame_9);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(570, 80, 221, 321));
        label_42->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ect.jpg);\n"
"border-image: url(:/images/try.jpg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        exercisemeso = new QPushButton(frame_9);
        exercisemeso->setObjectName("exercisemeso");
        exercisemeso->setGeometry(QRect(570, 390, 221, 81));
        exercisemeso->setFont(font9);
        exercisemeso->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#exercisemeso{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#exercisemeso:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        pushButton_19 = new QPushButton(frame_9);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(60, 20, 31, 31));
        pushButton_19->setFont(font4);
        pushButton_19->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_19{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_19:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_19:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        frame_10 = new QFrame(page_9);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(50, 170, 821, 581));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_43 = new QLabel(frame_10);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(20, 70, 261, 441));
        label_43->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mesomorph.png);\n"
"border-radius:50px;"));
        label_44 = new QLabel(frame_10);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(300, 110, 471, 401));
        label_44->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_45 = new QLabel(frame_10);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(310, 10, 441, 61));
        label_45->setFont(font10);
        label_45->setStyleSheet(QString::fromUtf8("\n"
"border-radius:150px;\n"
"color: #1A1423;\n"
"\n"
"background-color: #F0EDEE;\n"
""));
        label_45->setAlignment(Qt::AlignCenter);
        homemeso = new QPushButton(frame_10);
        homemeso->setObjectName("homemeso");
        homemeso->setGeometry(QRect(40, 10, 61, 31));
        homemeso->setFont(font4);
        homemeso->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_9{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_9:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_9:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        label_46 = new QLabel(frame_10);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(200, 30, 91, 21));
        label_46->setFont(font12);
        label_46->setStyleSheet(QString::fromUtf8("color:rgb(132, 111, 89);\n"
"\n"
"\n"
"\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_46->setAlignment(Qt::AlignCenter);
        label_47 = new QLabel(frame_10);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(310, 70, 451, 31));
        label_47->setFont(font11);
        label_47->setStyleSheet(QString::fromUtf8("color:rgb(158, 158, 158)\n"
""));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        frame_11 = new QFrame(page_10);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(50, 170, 821, 581));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_48 = new QLabel(frame_11);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(110, 20, 331, 41));
        label_48->setFont(font10);
        label_48->setStyleSheet(QString::fromUtf8("\n"
"border-radius:150px;\n"
"color: #1A1423;\n"
"\n"
"background-color: #F0EDEE;\n"
""));
        label_48->setAlignment(Qt::AlignCenter);
        label_49 = new QLabel(frame_11);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(40, 90, 321, 181));
        label_49->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_50 = new QLabel(frame_11);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(40, 290, 321, 261));
        label_50->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_51 = new QLabel(frame_11);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(380, 90, 421, 461));
        label_51->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_52 = new QLabel(frame_11);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(470, 60, 251, 21));
        label_52->setFont(font14);
        label_52->setStyleSheet(QString::fromUtf8("background-color: #F0EDEE;\n"
"border-radius:50px;\n"
"\n"
"color: #1A1423;\n"
""));
        label_52->setAlignment(Qt::AlignCenter);
        homenutro = new QPushButton(frame_11);
        homenutro->setObjectName("homenutro");
        homenutro->setGeometry(QRect(30, 20, 31, 31));
        homenutro->setFont(font4);
        homenutro->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#homenutro{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#homenutro:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#homenutro:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        frame_12 = new QFrame(page_11);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(50, 170, 821, 581));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_53 = new QLabel(frame_12);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(30, 80, 231, 321));
        label_53->setStyleSheet(QString::fromUtf8("border-image: url(:/images/endomorph.png);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        characteristicsendo = new QPushButton(frame_12);
        characteristicsendo->setObjectName("characteristicsendo");
        characteristicsendo->setGeometry(QRect(30, 380, 231, 81));
        characteristicsendo->setFont(font9);
        characteristicsendo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#characteristicsendo{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#characteristicsendo:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        label_54 = new QLabel(frame_12);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(310, 80, 221, 321));
        label_54->setStyleSheet(QString::fromUtf8("border-image: url(:/images/endodiet.jpg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        label_55 = new QLabel(frame_12);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(560, 80, 221, 321));
        label_55->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mesomorph.png);\n"
"border-image: url(:/images/register.jpg);\n"
"border-radius:10px;\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"    /* Initial style for QLabel */\n"
"    border: 1px solid transparent; /* No border initially */\n"
"    padding: 0px; /* No padding initially */\n"
"}\n"
"\n"
"/* Style when QLabel is hovered over */\n"
"QLabel_28:hover {\n"
"    border: 2px solid blue; /* Blue border when hovered */\n"
"    padding: 5px; /* 5px padding inside the border */\n"
"    border-style: solid;\n"
"}"));
        nutritionendo = new QPushButton(frame_12);
        nutritionendo->setObjectName("nutritionendo");
        nutritionendo->setGeometry(QRect(310, 380, 221, 81));
        nutritionendo->setFont(font9);
        nutritionendo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#nutritionendo{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#nutritionendo:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        exerciseendo = new QPushButton(frame_12);
        exerciseendo->setObjectName("exerciseendo");
        exerciseendo->setGeometry(QRect(560, 380, 221, 81));
        exerciseendo->setFont(font9);
        exerciseendo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#exerciseendo{\n"
"color:grey;\n"
"}\n"
"\n"
"QPushButton#exerciseendo:hover{\n"
"	padding-left:5px;\n"
"	padding-top:5px;}\n"
"\n"
"\n"
""));
        backtohomeendo = new QPushButton(frame_12);
        backtohomeendo->setObjectName("backtohomeendo");
        backtohomeendo->setGeometry(QRect(40, 20, 31, 31));
        backtohomeendo->setFont(font4);
        backtohomeendo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#backtohomeendo{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#backtohomeendo:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#backtohomeendo:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        frame_13 = new QFrame(page_12);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(50, 170, 821, 581));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_56 = new QLabel(frame_13);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(10, 80, 281, 441));
        label_56->setStyleSheet(QString::fromUtf8("border-image: url(:/images/endomorph.png);\n"
"border-radius:50px;"));
        label_57 = new QLabel(frame_13);
        label_57->setObjectName("label_57");
        label_57->setGeometry(QRect(300, 120, 471, 401));
        label_57->setStyleSheet(QString::fromUtf8("\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_58 = new QLabel(frame_13);
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(320, 10, 441, 61));
        label_58->setFont(font10);
        label_58->setStyleSheet(QString::fromUtf8("\n"
"border-radius:150px;\n"
"color: #1A1423;\n"
"\n"
"background-color: #F0EDEE;\n"
""));
        label_58->setAlignment(Qt::AlignCenter);
        label_59 = new QLabel(frame_13);
        label_59->setObjectName("label_59");
        label_59->setGeometry(QRect(210, 30, 91, 21));
        label_59->setFont(font12);
        label_59->setStyleSheet(QString::fromUtf8("color:rgb(132, 111, 89);\n"
"\n"
"\n"
"\n"
"background-color: #F0EDEE;\n"
"border-radius:50px;"));
        label_59->setAlignment(Qt::AlignCenter);
        pushButton_24 = new QPushButton(frame_13);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(40, 20, 31, 31));
        pushButton_24->setFont(font4);
        pushButton_24->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#pushButton_24{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_24:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton_24:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        frame_14 = new QFrame(page_13);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(50, 170, 821, 581));
        frame_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_13);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Please enter your login details to sign in", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Don't have and account?", nullptr));
        label_5->setText(QString());
        signup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "REGISTER", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        lineEdit_8->setText(QString());
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email address", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "R e g i s t er", nullptr));
        label_8->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Please enter correct information", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "BMI CALCULATOR", nullptr));
        labelWeight_9->setText(QCoreApplication::translate("MainWindow", "WEIGHT(KG):", nullptr));
        labelHeight_9->setText(QCoreApplication::translate("MainWindow", "HEIGHT(M):", nullptr));
        calculateButton_9->setText(QCoreApplication::translate("MainWindow", "CALCULATE BMI", nullptr));
        resultLabel_9->setText(QCoreApplication::translate("MainWindow", "BMI will be displayed here", nullptr));
        weightEdit_9->setText(QString());
        weightEdit_9->setPlaceholderText(QString());
        heightEdit_9->setText(QString());
        heightEdit_9->setPlaceholderText(QString());
        nexttobodytypes->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        backtologin->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Please choose your appropriate body type.", nullptr));
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        ectomorph->setText(QCoreApplication::translate("MainWindow", "Ectomorph", nullptr));
        mesomorph->setText(QCoreApplication::translate("MainWindow", "Mesomorph", nullptr));
        endomorph->setText(QCoreApplication::translate("MainWindow", "Endomorph", nullptr));
        backtobmi->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "THE BODY TYPES", nullptr));
        label_28->setText(QString());
        characteristics->setText(QCoreApplication::translate("MainWindow", "CHARACTERISTICS", nullptr));
        label_29->setText(QString());
        nutritionanddiet->setText(QCoreApplication::translate("MainWindow", " NUTRITION AND DIET", nullptr));
        exerciseandworkout->setText(QCoreApplication::translate("MainWindow", "EXERCISE AND WORKOUT PLAN", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_30->setText(QString());
        label_16->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "ENDOMORPH BODY TYPE", nullptr));
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "A guide to the endomorph body type and how to personalize your workout, and diet plans.", nullptr));
        hometoectobody->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "BODY TYPE", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "CHARACTERISTICS", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sitka Banner'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Build</span><span style=\" font-size:11pt;\">: Endomorphs tend to have a rounder, softer physique with wider hips and a broader waist.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><b"
                        "r /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Muscle Development</span><span style=\" font-size:12pt;\">:</span><span style=\" font-size:11pt;\"> They can gain muscle, but they also tend to store more fat.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Fat Storage:</span><span style=\" font-size:11pt;\"> They have a slower metabolism, which means they gain weight easily, particularly around the midsection.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Metabolism</span><span style=\" font-size:12pt;\">:</span><span style=\" font-size:11pt;\"> Their metabolism is slower, which can make it harder to lose fat and requires careful management of caloric intake.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Building lean muscle can be a challenge due to their body\342\200\231s propensity to store fat.</span></p>\n"
"<p align=\"justify\" style=\"-qt"
                        "-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">They may appear stockier and more solid.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Managing fat requires more effort and discipline.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p></body></htm"
                        "l>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "NUTRITION AND DIET", nullptr));
        label_23->setText(QString());
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sitka Banner'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">    </span><span style=\" font-size:12pt; font-weight:700;\">  NUTRIONAL GOALS:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-&gt; Increase caloric intake to gain muscle </span></p>\n"
"<p align=\"justify\""
                        " style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">      mass.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-&gt; Higher protein intake to support muscle  </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">     growth.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-&gt; Consume nutrient-dense, high-calorie </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">     foo"
                        "ds.</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "RECOMMENDED DIET", nullptr));
        label_34->setText(QString());
        label_25->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "Proteins:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Dairy/vegetables:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Fruits:", nullptr));
        label_32->setText(QString());
        label_33->setText(QCoreApplication::translate("MainWindow", "Tips:", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sitka Banner'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-&gt; Eat multiple small meals throughout the day to meet caloric needs</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\">-&gt; Consider using mass gainer supplements to easily increase calorie       intake.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-&gt; Ensure protein intake is at least 1 gram per pound of bodyweight.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-&gt; Focus on slow-digesting protein shakes at night to promote muscle  growth during sleep.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-&gt; Aim for a diet with an energy surplus to support weight gain.</p></body></html>", nullptr));
        hometoecto_2->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_40->setText(QString());
        characteristicsmeso->setText(QCoreApplication::translate("MainWindow", "CHARACTERISTICS", nullptr));
        label_41->setText(QString());
        nutritionmeso->setText(QCoreApplication::translate("MainWindow", "NUTRITION AND DIET", nullptr));
        label_42->setText(QString());
        exercisemeso->setText(QCoreApplication::translate("MainWindow", "EXERCISE AND WORKOUT PLAN", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_43->setText(QString());
        label_44->setText(QString());
        label_45->setText(QCoreApplication::translate("MainWindow", "MESOMORPH BODY TYPE", nullptr));
        homemeso->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "BODY TYPE", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "A guide to the mesomorph body type and how to personalize your workout, and diet plans.", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "NUTRITION AND DIET", nullptr));
        label_49->setText(QString());
        label_50->setText(QString());
        label_51->setText(QString());
        label_52->setText(QCoreApplication::translate("MainWindow", "RECOMMENDED DIET", nullptr));
        homenutro->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_53->setText(QString());
        characteristicsendo->setText(QCoreApplication::translate("MainWindow", "CHARACTERISTICS", nullptr));
        label_54->setText(QString());
        label_55->setText(QString());
        nutritionendo->setText(QCoreApplication::translate("MainWindow", "NUTRITION AND DIET", nullptr));
        exerciseendo->setText(QCoreApplication::translate("MainWindow", "EXERCISE AND  WORKOUT PLAN", nullptr));
        backtohomeendo->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_56->setText(QString());
        label_57->setText(QString());
        label_58->setText(QCoreApplication::translate("MainWindow", "ENDOMORPH BODY TYPE", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "BODY TYPE", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
