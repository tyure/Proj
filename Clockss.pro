QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    budil.cpp \
    frstwind.cpp \
    kalendr.cpp \
    main.cpp \
    mainwindow.cpp \
    secund.cpp \
    sndwind.cpp \
    stst.cpp \
    timers.cpp

HEADERS += \
    budil.h \
    frstwind.h \
    kalendr.h \
    mainwindow.h \
    secund.h \
    sndwind.h \
    stst.h \
    timers.h

FORMS += \
    budil.ui \
    frstwind.ui \
    kalendr.ui \
    mainwindow.ui \
    secund.ui \
    sndwind.ui \
    stst.ui \
    timers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
