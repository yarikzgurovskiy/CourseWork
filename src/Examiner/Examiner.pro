#-------------------------------------------------
#
# Project created by QtCreator 2017-04-05T19:29:04
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Examiner
TEMPLATE = app
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    mainwindow.cpp \
    trainingform.cpp \
    examform.cpp \
    smtp.cpp \
    client.cpp \
    results.cpp \
    resultsform.cpp \
    testing.cpp \
    postclient.cpp \
    result.cpp \
    message.cpp \
    aboutwindow.cpp
HEADERS  += \
    mainwindow.h \
    trainingform.h \
    examform.h \
    smtp.h \
    client.h \
    results.h \
    resultsform.h \
    testing.h \
    postclient.h \
    result.h \
    message.h \
    aboutwindow.h

FORMS    += \
    mainwindow.ui \
    trainingform.ui \
    examform.ui \
    results.ui \
    resultsform.ui \
    testing.ui \
    result.ui \
    aboutwindow.ui

RESOURCES += \
    resources.qrc

unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lprogbase-cpp

INCLUDEPATH += $$PWD/../../../../../../usr/local/include
DEPENDPATH += $$PWD/../../../../../../usr/local/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/lib/libprogbase-cpp.a

unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lprogbase

INCLUDEPATH += $$PWD/../../../../../../usr/local/include
DEPENDPATH += $$PWD/../../../../../../usr/local/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/lib/libprogbase.a

unix:!macx: LIBS += -lssl


unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lexamdrive

INCLUDEPATH += $$PWD/../../../../../../usr/local/include/examdrive
DEPENDPATH += $$PWD/../../../../../../usr/local/include/examdrive

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/lib/libexamdrive.a

unix:!macx: LIBS += -ljansson
