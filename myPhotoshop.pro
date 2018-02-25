#-------------------------------------------------
#
# Project created by QtCreator 2017-12-08T14:28:24
#
#-------------------------------------------------

QT       += core gui widgets
qtHaveModule(printsupport): QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myPhotoshop
TEMPLATE = app


SOURCES += main.cpp \
    photoshopgui.cpp \
    log.cpp \
    imageoperations.cpp \
    algebraicdialog.cpp \
    huesaturalightdialog.cpp \
    dualthresholddialog.cpp \
    clipbox.cpp \
    scaledialog.cpp \
    filterdialog.cpp \
    edgedetectiondialog.cpp \
    houghtransformdialog.cpp \
    clipdialog.cpp \
    binarymorphodialog.cpp \
    graymorphodialog.cpp \
    structureelementcanvas.cpp \
    curvecanvas.cpp \
    curvedialog.cpp \
    histogramdialog.cpp \
    histogramview.cpp \
    leveldialog.cpp

HEADERS  += photoshopgui.h \
    log.h \
    imageoperations.h \
    algebraicdialog.h \
    huesaturalightdialog.h \
    dualthresholddialog.h \
    clipbox.h \
    scaledialog.h \
    filterdialog.h \
    edgedetectiondialog.h \
    houghtransformdialog.h \
    clipdialog.h \
    binarymorphodialog.h \
    graymorphodialog.h \
    structureelementcanvas.h \
    curvecanvas.h \
    curvedialog.h \
    histogramdialog.h \
    histogramview.h \
    leveldialog.h

FORMS    +=
