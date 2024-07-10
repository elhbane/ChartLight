/***************************************************************************************
*    Title: qtwidgets-widgets-calculator-example
*    Author: The Qt Company
*    Date: 2016
*    Code version: 5.15
*    Availability: https://code.qt.io/cgit/qt/qtbase.git/tree/examples/widgets/widgets/calculator/button.h?h=5.15
*
***************************************************************************************/

#ifndef BUTTON_H
#define BUTTON_H

#include <QToolButton>

class Button : public QToolButton
{
    Q_OBJECT

public:
    explicit Button(const QString &text, QWidget *parent = nullptr);

    static Button *createButton(QWidget *parentWidget, const QString &text, const char *member);

    QSize sizeHint() const override;
};
#endif // BUTTON_H
