/********************************************************************************
** Form generated from reading UI file 'allocator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLOCATOR_H
#define UI_ALLOCATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Allocator
{
public:
    QWidget *centralWidget;
    QPushButton *addHoleBtn;
    QComboBox *comboBox;
    QLabel *label;
    QPlainTextEdit *holeBaseAddrTextEdit;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *processSizeTextEdit;
    QPushButton *addProcessBtn;
    QPlainTextEdit *holeSizeTextEdit;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *showBtn;
    QListWidget *listWidget;
    QPushButton *showDiagram;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Allocator)
    {
        if (Allocator->objectName().isEmpty())
            Allocator->setObjectName(QStringLiteral("Allocator"));
        Allocator->resize(591, 427);
        centralWidget = new QWidget(Allocator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addHoleBtn = new QPushButton(centralWidget);
        addHoleBtn->setObjectName(QStringLiteral("addHoleBtn"));
        addHoleBtn->setGeometry(QRect(260, 110, 87, 27));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 20, 91, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 10, 121, 20));
        holeBaseAddrTextEdit = new QPlainTextEdit(centralWidget);
        holeBaseAddrTextEdit->setObjectName(QStringLiteral("holeBaseAddrTextEdit"));
        holeBaseAddrTextEdit->setGeometry(QRect(160, 110, 81, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 290, 87, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 20, 101, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 80, 59, 15));
        processSizeTextEdit = new QPlainTextEdit(centralWidget);
        processSizeTextEdit->setObjectName(QStringLiteral("processSizeTextEdit"));
        processSizeTextEdit->setGeometry(QRect(40, 200, 81, 21));
        addProcessBtn = new QPushButton(centralWidget);
        addProcessBtn->setObjectName(QStringLiteral("addProcessBtn"));
        addProcessBtn->setGeometry(QRect(150, 200, 87, 27));
        holeSizeTextEdit = new QPlainTextEdit(centralWidget);
        holeSizeTextEdit->setObjectName(QStringLiteral("holeSizeTextEdit"));
        holeSizeTextEdit->setGeometry(QRect(40, 110, 81, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 80, 101, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 81, 16));
        showBtn = new QPushButton(centralWidget);
        showBtn->setObjectName(QStringLiteral("showBtn"));
        showBtn->setGeometry(QRect(260, 200, 87, 27));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(410, 50, 141, 281));
        showDiagram = new QPushButton(centralWidget);
        showDiagram->setObjectName(QStringLiteral("showDiagram"));
        showDiagram->setGeometry(QRect(210, 290, 111, 27));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 350, 371, 16));
        Allocator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Allocator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 591, 23));
        Allocator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Allocator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Allocator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Allocator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Allocator->setStatusBar(statusBar);

        retranslateUi(Allocator);

        QMetaObject::connectSlotsByName(Allocator);
    } // setupUi

    void retranslateUi(QMainWindow *Allocator)
    {
        Allocator->setWindowTitle(QApplication::translate("Allocator", "Allocator", 0));
        addHoleBtn->setText(QApplication::translate("Allocator", "Add", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Allocator", "First Fit", 0)
         << QApplication::translate("Allocator", "Worst Fit", 0)
         << QApplication::translate("Allocator", "Best Fit", 0)
        );
        label->setText(QApplication::translate("Allocator", "Memory of 1024 KB", 0));
        pushButton_3->setText(QApplication::translate("Allocator", "Reset", 0));
        label_2->setText(QApplication::translate("Allocator", "Select Algorithm", 0));
        label_3->setText(QApplication::translate("Allocator", "Hole Size", 0));
        addProcessBtn->setText(QApplication::translate("Allocator", "Add", 0));
        label_4->setText(QApplication::translate("Allocator", "Starting Address", 0));
        label_6->setText(QApplication::translate("Allocator", "Process Size", 0));
        showBtn->setText(QApplication::translate("Allocator", "Allocate", 0));
        showDiagram->setText(QApplication::translate("Allocator", "Show Diagram", 0));
        label_5->setText(QApplication::translate("Allocator", "Note: There is no validation, so please enter correct values !", 0));
    } // retranslateUi

};

namespace Ui {
    class Allocator: public Ui_Allocator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLOCATOR_H
