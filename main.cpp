#include "photoshopgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGuiApplication::setApplicationDisplayName(PhotoshopGUI::tr("My Photoshop"));
    PhotoshopGUI w;
    w.show();

    return a.exec();
}
