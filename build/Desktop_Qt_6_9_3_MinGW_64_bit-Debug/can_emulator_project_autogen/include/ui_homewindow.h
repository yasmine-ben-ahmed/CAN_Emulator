/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *sidebarFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *toggleSidebarButton;
    QPushButton *navHomeButton;
    QPushButton *navMonitorButton;
    QPushButton *navTransmitButton;
    QPushButton *navDashboardButton;
    QPushButton *navSettingsButton;
    QPushButton *navHelpButton;
    QLabel *statusLabel;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *titleWelcome;
    QLabel *subtitleWelcome;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *navMonitorButton_2;
    QPushButton *navTransmitButton_2;
    QPushButton *navDashboardButton_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *labelComPort;
    QComboBox *labelBaud;
    QWidget *monitorPage;
    QWidget *transmitPage;
    QWidget *dashboardPage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeWindow)
    {
        if (HomeWindow->objectName().isEmpty())
            HomeWindow->setObjectName("HomeWindow");
        HomeWindow->resize(1425, 618);
        centralwidget = new QWidget(HomeWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        sidebarFrame = new QFrame(centralwidget);
        sidebarFrame->setObjectName("sidebarFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebarFrame->sizePolicy().hasHeightForWidth());
        sidebarFrame->setSizePolicy(sizePolicy);
        sidebarFrame->setFrameShape(QFrame::Shape::StyledPanel);
        sidebarFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(sidebarFrame);
        verticalLayout->setObjectName("verticalLayout");
        toggleSidebarButton = new QPushButton(sidebarFrame);
        toggleSidebarButton->setObjectName("toggleSidebarButton");
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        toggleSidebarButton->setFont(font);

        verticalLayout->addWidget(toggleSidebarButton);

        navHomeButton = new QPushButton(sidebarFrame);
        navHomeButton->setObjectName("navHomeButton");

        verticalLayout->addWidget(navHomeButton);

        navMonitorButton = new QPushButton(sidebarFrame);
        navMonitorButton->setObjectName("navMonitorButton");

        verticalLayout->addWidget(navMonitorButton);

        navTransmitButton = new QPushButton(sidebarFrame);
        navTransmitButton->setObjectName("navTransmitButton");

        verticalLayout->addWidget(navTransmitButton);

        navDashboardButton = new QPushButton(sidebarFrame);
        navDashboardButton->setObjectName("navDashboardButton");

        verticalLayout->addWidget(navDashboardButton);

        navSettingsButton = new QPushButton(sidebarFrame);
        navSettingsButton->setObjectName("navSettingsButton");

        verticalLayout->addWidget(navSettingsButton);

        navHelpButton = new QPushButton(sidebarFrame);
        navHelpButton->setObjectName("navHelpButton");
        navHelpButton->setFont(font);

        verticalLayout->addWidget(navHelpButton);

        statusLabel = new QLabel(sidebarFrame);
        statusLabel->setObjectName("statusLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        statusLabel->setFont(font1);

        verticalLayout->addWidget(statusLabel);


        horizontalLayout->addWidget(sidebarFrame);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        titleWelcome = new QLabel(homePage);
        titleWelcome->setObjectName("titleWelcome");
        titleWelcome->setGeometry(QRect(180, 60, 501, 91));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        titleWelcome->setFont(font2);
        titleWelcome->setAlignment(Qt::AlignmentFlag::AlignCenter);
        subtitleWelcome = new QLabel(homePage);
        subtitleWelcome->setObjectName("subtitleWelcome");
        subtitleWelcome->setGeometry(QRect(230, 140, 431, 61));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        subtitleWelcome->setFont(font3);
        subtitleWelcome->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(homePage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(560, 250, 91, 67));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        connectButton = new QPushButton(widget);
        connectButton->setObjectName("connectButton");

        verticalLayout_2->addWidget(connectButton);

        disconnectButton = new QPushButton(widget);
        disconnectButton->setObjectName("disconnectButton");

        verticalLayout_2->addWidget(disconnectButton);

        widget1 = new QWidget(homePage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(210, 470, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        navMonitorButton_2 = new QPushButton(widget1);
        navMonitorButton_2->setObjectName("navMonitorButton_2");

        horizontalLayout_2->addWidget(navMonitorButton_2);

        navTransmitButton_2 = new QPushButton(widget1);
        navTransmitButton_2->setObjectName("navTransmitButton_2");

        horizontalLayout_2->addWidget(navTransmitButton_2);

        navDashboardButton_2 = new QPushButton(widget1);
        navDashboardButton_2->setObjectName("navDashboardButton_2");

        horizontalLayout_2->addWidget(navDashboardButton_2);

        widget2 = new QWidget(homePage);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(280, 280, 251, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelComPort = new QComboBox(widget2);
        labelComPort->setObjectName("labelComPort");

        horizontalLayout_3->addWidget(labelComPort);

        labelBaud = new QComboBox(widget2);
        labelBaud->setObjectName("labelBaud");
        labelBaud->setEditable(false);

        horizontalLayout_3->addWidget(labelBaud);

        stackedWidget->addWidget(homePage);
        monitorPage = new QWidget();
        monitorPage->setObjectName("monitorPage");
        stackedWidget->addWidget(monitorPage);
        transmitPage = new QWidget();
        transmitPage->setObjectName("transmitPage");
        stackedWidget->addWidget(transmitPage);
        dashboardPage = new QWidget();
        dashboardPage->setObjectName("dashboardPage");
        stackedWidget->addWidget(dashboardPage);

        horizontalLayout->addWidget(stackedWidget);

        HomeWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HomeWindow);
        statusbar->setObjectName("statusbar");
        HomeWindow->setStatusBar(statusbar);

        retranslateUi(HomeWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(HomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HomeWindow)
    {
        HomeWindow->setWindowTitle(QCoreApplication::translate("HomeWindow", "HomeWindow", nullptr));
        toggleSidebarButton->setText(QString());
        navHomeButton->setText(QCoreApplication::translate("HomeWindow", "Home", nullptr));
        navMonitorButton->setText(QCoreApplication::translate("HomeWindow", "Monitor", nullptr));
        navTransmitButton->setText(QCoreApplication::translate("HomeWindow", "Transmit", nullptr));
        navDashboardButton->setText(QCoreApplication::translate("HomeWindow", "Dashboard", nullptr));
        navSettingsButton->setText(QCoreApplication::translate("HomeWindow", "Settings", nullptr));
        navHelpButton->setText(QCoreApplication::translate("HomeWindow", "Help", nullptr));
        statusLabel->setText(QCoreApplication::translate("HomeWindow", "Status", nullptr));
        titleWelcome->setText(QCoreApplication::translate("HomeWindow", "Welcome to CAN Emulator Tool", nullptr));
        subtitleWelcome->setText(QCoreApplication::translate("HomeWindow", "Monitor \342\200\242 Send \342\200\242 Visualize CAN frames", nullptr));
        connectButton->setText(QCoreApplication::translate("HomeWindow", "Connect", nullptr));
        disconnectButton->setText(QCoreApplication::translate("HomeWindow", "Disconnect", nullptr));
        navMonitorButton_2->setText(QCoreApplication::translate("HomeWindow", "Start monitor", nullptr));
        navTransmitButton_2->setText(QCoreApplication::translate("HomeWindow", "Send test frame", nullptr));
        navDashboardButton_2->setText(QCoreApplication::translate("HomeWindow", "View dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWindow: public Ui_HomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
