#-------------------------------------------------
#
# Project created by QtCreator 2017-05-30T18:16:25
#
#-------------------------------------------------

QT       += gui

TARGET = examdrive
TEMPLATE = lib
CONFIG += staticlib
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

SOURCES += task.cpp \
    student.cpp \
    jsonconverter.cpp \
    topic.cpp \
    request.cpp \
    response.cpp

HEADERS += task.h \
    student.h \
    jsonconverter.h \
    topic.h \
    request.h \
    response.h

unix:!macx: LIBS += -ljansson

unix {
    target.path = /usr/local/lib
    INSTALLS += target
    headers.path    = /usr/local/include/examdrive
    headers.files   += $$HEADERS
    INSTALLS       += headers
}


