QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    source/atank.cpp \
    source/entity.cpp \
    source/main.cpp \
    source/mainwindow.cpp \
    source/player.cpp \
    source/road.cpp \
    source/tillemap.cpp \
    source/wall.cpp

HEADERS += \
    source/atank.h \
    source/entity.h \
    source/mainwindow.h \
    source/player.h \
    source/road.h \
    source/tillemap.h \
    source/wall.h

FORMS += \
    source/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
