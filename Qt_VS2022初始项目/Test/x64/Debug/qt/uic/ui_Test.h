/********************************************************************************
** Form generated from reading UI file 'Test.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestClass
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;

    void setupUi(QWidget *TestClass)
    {
        if (TestClass->objectName().isEmpty())
            TestClass->setObjectName("TestClass");
        TestClass->resize(600, 400);
        pushButton = new QPushButton(TestClass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 80, 80, 24));
        toolButton = new QToolButton(TestClass);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(60, 80, 25, 23));
        checkBox = new QCheckBox(TestClass);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(260, 80, 81, 22));

        retranslateUi(TestClass);

        QMetaObject::connectSlotsByName(TestClass);
    } // setupUi

    void retranslateUi(QWidget *TestClass)
    {
        TestClass->setWindowTitle(QCoreApplication::translate("TestClass", "Test", nullptr));
        pushButton->setText(QCoreApplication::translate("TestClass", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("TestClass", "...", nullptr));
        checkBox->setText(QCoreApplication::translate("TestClass", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestClass: public Ui_TestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
