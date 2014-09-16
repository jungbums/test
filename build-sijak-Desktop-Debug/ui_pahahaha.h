/********************************************************************************
** Form generated from reading UI file 'pahahaha.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAHAHAHA_H
#define UI_PAHAHAHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pahahaha
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pahahaha)
    {
        if (pahahaha->objectName().isEmpty())
            pahahaha->setObjectName(QStringLiteral("pahahaha"));
        pahahaha->resize(400, 300);
        menuBar = new QMenuBar(pahahaha);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        pahahaha->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pahahaha);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pahahaha->addToolBar(mainToolBar);
        centralWidget = new QWidget(pahahaha);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pahahaha->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(pahahaha);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pahahaha->setStatusBar(statusBar);

        retranslateUi(pahahaha);

        QMetaObject::connectSlotsByName(pahahaha);
    } // setupUi

    void retranslateUi(QMainWindow *pahahaha)
    {
        pahahaha->setWindowTitle(QApplication::translate("pahahaha", "pahahaha", 0));
    } // retranslateUi

};

namespace Ui {
    class pahahaha: public Ui_pahahaha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAHAHAHA_H
