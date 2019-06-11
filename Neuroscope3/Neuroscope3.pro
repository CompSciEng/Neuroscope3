#-------------------------------------------------
#
# Project created by QtCreator 2019-04-05T17:15:25
#
#-------------------------------------------------

# CMAKE_BUILD_TYPE to "Release" or "Debug
CMAKE_BUILD_TYPE =Release

QT       += core gui printsupport xml widgets


TARGET = Neuroscope3
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    ./src/baseframe.cpp \
    ./src/channelgroupview.cpp \
    ./src/channeliconview.cpp \
    ./src/channelmimedata.cpp \
    ./src/channelpalette.cpp \
    ./src/clustercolors.cpp \
    ./src/clusterproperties.cpp \
    ./src/clusterpropertieslayout.cpp \
    ./src/clustersprovider.cpp \
    ./src/configuration.cpp \
    ./src/dataprovider.cpp \
    ./src/eventdata.cpp \
    ./src/eventsprovider.cpp \
    ./src/globaleventsprovider.cpp \
    ./src/imagecreator.cpp \
    ./src/itemgroupview.cpp \
    ./src/itemiconview.cpp \
    ./src/itempalette.cpp \
    ./src/main.cpp \
    ./src/neuroscope.cpp \
    ./src/neuroscopedoc.cpp \
    ./src/neuroscopeview.cpp \
    ./src/neuroscopexmlreader.cpp \
    ./src/parameterxmlcreator.cpp \
    ./src/parameterxmlmodifier.cpp \
    ./src/positionproperties.cpp \
    ./src/positionpropertieslayout.cpp \
    ./src/positionsprovider.cpp \
    ./src/positionview.cpp \
    ./src/prefdefaults.cpp \
    ./src/prefdefaultslayout.cpp \
    ./src/prefdialog.cpp \
    ./src/prefgeneral.cpp \
    ./src/prefgenerallayout.cpp \
    ./src/properties.cpp \
    ./src/propertiesdialog.cpp \
    ./src/propertieslayout.cpp \
    ./src/sessionxmlwriter.cpp \
    ./src/tags.cpp \
    ./src/tracesprovider.cpp \
    ./src/traceview.cpp \
    ./src/tracewidget.cpp \
    ./src/ReadHDF5.cpp \
    src/hdf5utilities.cpp \
    src/nwblocations.cpp \
    src/nwbreader.cpp \
    src/nevclustersprovider.cpp \
    src/neveventsprovider.cpp \
    src/nsxtracesprovider.cpp \
    src/nwbtracesprovider.cpp \
    src/cerebustraceprovider.cpp \
    src/cerebusclustersprovider.cpp \
    src/cerebuseventsprovider.cpp \
    src/nwbeventsprovider.cpp

HEADERS += \
    ./src/baseframe.h \
    ./src/channelgroupview.h \
    ./src/channeliconview.h \
    ./src/channelmimedata.h \
    ./src/channelpalette.h \
    ./src/clustercolors.h \
    ./src/clusterproperties.h \
    ./src/clusterpropertieslayout.h \
    ./src/clustersprovider.h \
    ./src/configuration.h \
    ./src/dataprovider.h \
    ./src/eventdata.h \
    ./src/eventsprovider.h \
    ./src/globaleventsprovider.h \
    ./src/imagecreator.h \
    ./src/itemgroupview.h \
    ./src/itemiconview.h \
    ./src/itempalette.h \
    ./src/neuroscope.h \
    ./src/neuroscopedoc.h \
    ./src/neuroscopeview.h \
    ./src/neuroscopexmlreader.h \
    ./src/parameterxmlcreator.h \
    ./src/parameterxmlmodifier.h \
    ./src/positionproperties.h \
    ./src/positionpropertieslayout.h \
    ./src/positionsprovider.h \
    ./src/positionview.h \
    ./src/prefdefaults.h \
    ./src/prefdefaultslayout.h \
    ./src/prefdialog.h \
    ./src/prefgeneral.h \
    ./src/prefgenerallayout.h \
    ./src/properties.h \
    ./src/propertiesdialog.h \
    ./src/propertieslayout.h \
    ./src/sessionInformation.h \
    ./src/sessionxmlwriter.h \
    ./src/tags.h \
    ./src/timer.h \
    ./src/tracesprovider.h \
    ./src/traceview.h \
    ./src/tracewidget.h \
    ../libklustersshared3/src/shared/array.h \
    ../libklustersshared3/src/shared/channelcolors.h \
    ../libklustersshared3/src/shared/itemcolors.h \
    ../libklustersshared3/src/shared/types.h \
    ../libklustersshared3/src/shared/utilities.h \
    ../libklustersshared3/src/shared/zoomwindow.h \
    src/hdf5utilities.h \
    src/nwblocations.h \
    src/nwbreader.h \
    src/blackrock.h \
    src/cerebusclustersprovider.h \
    src/cerebuseventsprovider.h \
    src/cerebustraceprovider.h \
    src/nevclustersprovider.h \
    src/neveventsprovider.h \
    src/nsxtracesprovider.h \
    src/nwbtracesprovider.h \
    src/alttracesprovider.h \
    src/nwbeventsprovider.h

FORMS += \
        ./src/clusterpropertieslayout.ui  \
        ./src/prefgenerallayout.ui        \
        ./src/positionpropertieslayout.ui \
        ./src/propertieslayout.ui         \
        ./src/prefdefaultslayout.ui

RESOURCES  = ./src/neuroscope-icons.qrc

INCLUDEPATH += ../libklustersshared3/src
INCLUDEPATH += ../libklustersshared3/src/shared
INCLUDEPATH += ../libklustersshared3/src/gui
INCLUDEPATH += ../libklustersshared3/src/page
INCLUDEPATH += ../libklustersshared3/src/gui/page



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


unix:CONFIG(release, debug|release) {
    LIBS += -L$$PWD/../libklustersshared3/build/release/ -llibklustersshared-3.1.0.0
    INCLUDEPATH += $$PWD/../libklustersshared3/build/release
    DEPENDPATH += $$PWD/../libklustersshared3/build/release
}
else:unix:CONFIG(debug, debug|release) {
    LIBS += -L$$PWD/../libklustersshared3/build/debug/ -llibklustersshared-3.1.0.0
    INCLUDEPATH += $$PWD/../libklustersshared3/build/debug
    DEPENDPATH += $$PWD/../libklustersshared3/build/debug
}

win32:CONFIG(release, debug|release){
    LIBS += -L$$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/release/ -llibklustersshared-3
    INCLUDEPATH += $$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/release
    DEPENDPATH += $$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/release
}
else:win32:CONFIG(debug, debug|release){
    LIBS += -L$$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/debug/ -llibklustersshared-3
    INCLUDEPATH += $$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/debug
    DEPENDPATH += $$PWD/../build-libklustersshared-3-Desktop_Qt_5_12_2_MSVC2017_64bit-Debug/debug
}


unix:CONFIG(release, debug|release) {
    message(Release1)

    PRE_TARGETDEPS += $$PWD/../HDF5/Release/libszip.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Release/libz.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Release/libhdf5.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Release/libhdf5_hl_cpp.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Release/libhdf5_cpp.a

    LIBS += $$PWD/../HDF5/Release/libszip.a
    LIBS += $$PWD/../HDF5/Release/libz.a
    LIBS += $$PWD/../HDF5/Release/libhdf5.a
    LIBS += $$PWD/../HDF5/Release/libhdf5_hl_cpp.a
    LIBS += $$PWD/../HDF5/Release/libhdf5_cpp.a

    INCLUDEPATH += $$PWD/../HDF5/include
    DEPENDPATH += $$PWD/../HDF5/Release
}
else:unix:CONFIG(debug, debug|release) {
    message(debug1)

    PRE_TARGETDEPS += $$PWD/../HDF5/Debug/libszip_debug.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Debug/libz_debug.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Debug/libhdf5_debug.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Debug/libhdf5_hl_cpp_debug.a
    PRE_TARGETDEPS += $$PWD/../HDF5/Debug/libhdf5_cpp_debug.a

    LIBS += $$PWD/../HDF5/Debug/libszip_debug.a
    LIBS += $$PWD/../HDF5/Debug/libz_debug.a
    LIBS += $$PWD/../HDF5/Debug/libhdf5_debug.a
    LIBS += $$PWD/../HDF5/Debug/libhdf5_hl_cpp_debug.a
    LIBS += $$PWD/../HDF5/Debug/libhdf5_cpp_debug.a

    INCLUDEPATH += $$PWD/../HDF5/include
    DEPENDPATH += $$PWD/../HDF5/Debug
}


win32:CONFIG(debug, debug|release){
    HDF5_PATH = $$PWD/../HDF5/Debug/

    LIBS += -L$${HDF5_PATH}/ -llibszip_D -llibzlib_D -llibhdf5_D -llibhdf5_hl_cpp_D -llibhdf5_cpp_D

    INCLUDEPATH += $$PWD/../HDF5/include/
    DEPENDPATH += $$PWD/../HDF5/include/
}


win32:CONFIG(release, debug|release){
  LIBS += -L$$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/x64/release/ -lcbsdk
  INCLUDEPATH += $$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/Release
  DEPENDPATH += $$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/Release
}
else:win32:CONFIG(debug, debug|release){
  LIBS += -L$$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/debug/ -lcbsdk
  #LIBS += $$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/debug/  cbsdk
  INCLUDEPATH += $$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/debug
  DEPENDPATH += $$PWD/../../../NeuroScope/Cerebus/libcbsdk/build/src/debug
}

INCLUDEPATH += D:\Gigs\NeuroScope\Cerebus\libcbsdk\src
INCLUDEPATH += D:\Gigs\NeuroScope\Cerebus\libcbsdk\src\cbhwlib

