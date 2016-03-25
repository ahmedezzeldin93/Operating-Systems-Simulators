/********************************************************************************
** Form generated from reading UI file 'diagram.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAM_H
#define UI_DIAGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_diagram
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *diagram)
    {
        if (diagram->objectName().isEmpty())
            diagram->setObjectName(QStringLiteral("diagram"));
        diagram->resize(576, 382);
        label = new QLabel(diagram);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 280, 141, 16));
        label_2 = new QLabel(diagram);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 310, 211, 16));
        label_3 = new QLabel(diagram);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 340, 161, 16));
        label_4 = new QLabel(diagram);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 30, 121, 20));

        retranslateUi(diagram);

        QMetaObject::connectSlotsByName(diagram);
    } // setupUi

    void retranslateUi(QDialog *diagram)
    {
        diagram->setWindowTitle(QApplication::translate("diagram", "Dialog", 0));
        label->setText(QApplication::translate("diagram", "Holes in the memory", 0));
        label_2->setText(QApplication::translate("diagram", "Processes allocated in the memory", 0));
        label_3->setText(QApplication::translate("diagram", "Previous allocated spaces", 0));
        label_4->setText(QApplication::translate("diagram", "Memory of 1024 KB", 0));
    } // retranslateUi

};

namespace Ui {
    class diagram: public Ui_diagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAM_H
