#ifndef CLIPDIALOG_H
#define CLIPDIALOG_H

#include <QWidget>
#include <QDialog>
#include <QJsonObject>
#include "clipbox.h"
QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

class ClipDialog : public QDialog
{
    Q_OBJECT

public:
    ClipDialog(QPixmap pixmap);

signals:
    void sendApplyClip(QJsonObject);

private slots:
    void setEdit(QRect);
    void apply();
    void receiveEnable();

private:
    int w, h;
    int maxWidth;
    ClipBox *clipBox;
    QLabel *leftMarginLabel;
    QLabel *rightMarginLabel;
    QLabel *topMarginLabel;
    QLabel *bottomMarginLabel;
    QPushButton *applyButton;
};

#endif // CLIPDIALOG_H
