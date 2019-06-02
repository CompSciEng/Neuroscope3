/****************************************************************************
** Meta object code from reading C++ file 'neuroscopeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/neuroscopeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'neuroscopeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NeuroscopeView_t {
    QByteArrayData data[144];
    char stringdata0[2199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NeuroscopeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NeuroscopeView_t qt_meta_stringdata_NeuroscopeView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NeuroscopeView"
QT_MOC_LITERAL(1, 15, 7), // "stopped"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "changeBackgroundColor"
QT_MOC_LITERAL(4, 46, 5), // "color"
QT_MOC_LITERAL(5, 52, 14), // "updateContents"
QT_MOC_LITERAL(6, 67, 9), // "greyScale"
QT_MOC_LITERAL(7, 77, 8), // "geyScale"
QT_MOC_LITERAL(8, 86, 23), // "clusterWaveformsDisplay"
QT_MOC_LITERAL(9, 110, 9), // "waveforms"
QT_MOC_LITERAL(10, 120, 20), // "clusterRasterDisplay"
QT_MOC_LITERAL(11, 141, 6), // "raster"
QT_MOC_LITERAL(12, 148, 27), // "clusterVerticalLinesDisplay"
QT_MOC_LITERAL(13, 176, 5), // "lines"
QT_MOC_LITERAL(14, 182, 19), // "multiColumnsDisplay"
QT_MOC_LITERAL(15, 202, 5), // "multi"
QT_MOC_LITERAL(16, 208, 16), // "channelsSelected"
QT_MOC_LITERAL(17, 225, 10), // "QList<int>"
QT_MOC_LITERAL(18, 236, 11), // "selectedIds"
QT_MOC_LITERAL(19, 248, 9), // "modeToSet"
QT_MOC_LITERAL(20, 258, 15), // "BaseFrame::Mode"
QT_MOC_LITERAL(21, 274, 12), // "selectedMode"
QT_MOC_LITERAL(22, 287, 6), // "active"
QT_MOC_LITERAL(23, 294, 12), // "showChannels"
QT_MOC_LITERAL(24, 307, 14), // "channelsToShow"
QT_MOC_LITERAL(25, 322, 18), // "channelColorUpdate"
QT_MOC_LITERAL(26, 341, 9), // "channelId"
QT_MOC_LITERAL(27, 351, 16), // "groupColorUpdate"
QT_MOC_LITERAL(28, 368, 7), // "groupId"
QT_MOC_LITERAL(29, 376, 20), // "increaseAllAmplitude"
QT_MOC_LITERAL(30, 397, 20), // "decreaseAllAmplitude"
QT_MOC_LITERAL(31, 418, 17), // "increaseAmplitude"
QT_MOC_LITERAL(32, 436, 17), // "decreaseAmplitude"
QT_MOC_LITERAL(33, 454, 11), // "updateGains"
QT_MOC_LITERAL(34, 466, 4), // "gain"
QT_MOC_LITERAL(35, 471, 15), // "acquisitionGain"
QT_MOC_LITERAL(36, 487, 13), // "updateDrawing"
QT_MOC_LITERAL(37, 501, 22), // "groupsHaveBeenModified"
QT_MOC_LITERAL(38, 524, 20), // "channelsToBeSelected"
QT_MOC_LITERAL(39, 545, 19), // "resetChannelOffsets"
QT_MOC_LITERAL(40, 565, 13), // "QMap<int,int>"
QT_MOC_LITERAL(41, 579, 29), // "selectedChannelDefaultOffsets"
QT_MOC_LITERAL(42, 609, 17), // "resetChannelGains"
QT_MOC_LITERAL(43, 627, 16), // "selectedChannels"
QT_MOC_LITERAL(44, 644, 10), // "drawTraces"
QT_MOC_LITERAL(45, 655, 5), // "reset"
QT_MOC_LITERAL(46, 661, 25), // "autocenterChannelsChanged"
QT_MOC_LITERAL(47, 687, 6), // "status"
QT_MOC_LITERAL(48, 694, 10), // "showLabels"
QT_MOC_LITERAL(49, 705, 4), // "show"
QT_MOC_LITERAL(50, 710, 18), // "displayCalibration"
QT_MOC_LITERAL(51, 729, 18), // "newClusterProvider"
QT_MOC_LITERAL(52, 748, 17), // "ClustersProvider*"
QT_MOC_LITERAL(53, 766, 16), // "clustersProvider"
QT_MOC_LITERAL(54, 783, 4), // "name"
QT_MOC_LITERAL(55, 788, 11), // "ItemColors*"
QT_MOC_LITERAL(56, 800, 13), // "clusterColors"
QT_MOC_LITERAL(57, 814, 11), // "QList<int>&"
QT_MOC_LITERAL(58, 826, 14), // "clustersToShow"
QT_MOC_LITERAL(59, 841, 22), // "QMap<int,QList<int> >*"
QT_MOC_LITERAL(60, 864, 24), // "displayGroupsClusterFile"
QT_MOC_LITERAL(61, 889, 14), // "QMap<int,int>*"
QT_MOC_LITERAL(62, 904, 19), // "channelsSpikeGroups"
QT_MOC_LITERAL(63, 924, 15), // "nbSamplesBefore"
QT_MOC_LITERAL(64, 940, 14), // "nbSamplesAfter"
QT_MOC_LITERAL(65, 955, 14), // "clustersToSkip"
QT_MOC_LITERAL(66, 970, 15), // "newSamplingRate"
QT_MOC_LITERAL(67, 986, 15), // "recordingLength"
QT_MOC_LITERAL(68, 1002, 22), // "clusterProviderRemoved"
QT_MOC_LITERAL(69, 1025, 12), // "showClusters"
QT_MOC_LITERAL(70, 1038, 19), // "clusterColorUpdated"
QT_MOC_LITERAL(71, 1058, 9), // "clusterId"
QT_MOC_LITERAL(72, 1068, 11), // "nextCluster"
QT_MOC_LITERAL(73, 1080, 15), // "previousCluster"
QT_MOC_LITERAL(74, 1096, 5), // "print"
QT_MOC_LITERAL(75, 1102, 9), // "QPainter&"
QT_MOC_LITERAL(76, 1112, 12), // "printPainter"
QT_MOC_LITERAL(77, 1125, 5), // "width"
QT_MOC_LITERAL(78, 1131, 6), // "height"
QT_MOC_LITERAL(79, 1138, 8), // "filePath"
QT_MOC_LITERAL(80, 1147, 15), // "whiteBackground"
QT_MOC_LITERAL(81, 1163, 16), // "newEventProvider"
QT_MOC_LITERAL(82, 1180, 15), // "EventsProvider*"
QT_MOC_LITERAL(83, 1196, 14), // "eventsProvider"
QT_MOC_LITERAL(84, 1211, 11), // "eventColors"
QT_MOC_LITERAL(85, 1223, 12), // "eventsToShow"
QT_MOC_LITERAL(86, 1236, 12), // "eventsToSkip"
QT_MOC_LITERAL(87, 1249, 20), // "eventProviderRemoved"
QT_MOC_LITERAL(88, 1270, 8), // "lastFile"
QT_MOC_LITERAL(89, 1279, 10), // "showEvents"
QT_MOC_LITERAL(90, 1290, 17), // "eventColorUpdated"
QT_MOC_LITERAL(91, 1308, 7), // "eventId"
QT_MOC_LITERAL(92, 1316, 9), // "nextEvent"
QT_MOC_LITERAL(93, 1326, 13), // "previousEvent"
QT_MOC_LITERAL(94, 1340, 13), // "eventModified"
QT_MOC_LITERAL(95, 1354, 12), // "providerName"
QT_MOC_LITERAL(96, 1367, 15), // "selectedEventId"
QT_MOC_LITERAL(97, 1383, 4), // "time"
QT_MOC_LITERAL(98, 1388, 7), // "newTime"
QT_MOC_LITERAL(99, 1396, 12), // "updateEvents"
QT_MOC_LITERAL(100, 1409, 13), // "eventToRemove"
QT_MOC_LITERAL(101, 1423, 12), // "eventRemoved"
QT_MOC_LITERAL(102, 1436, 18), // "newEventProperties"
QT_MOC_LITERAL(103, 1455, 10), // "eventAdded"
QT_MOC_LITERAL(104, 1466, 21), // "addedEventDescription"
QT_MOC_LITERAL(105, 1488, 26), // "waveformInformationUpdated"
QT_MOC_LITERAL(106, 1515, 26), // "positionInformationUpdated"
QT_MOC_LITERAL(107, 1542, 15), // "backgroundImage"
QT_MOC_LITERAL(108, 1558, 14), // "newOrientation"
QT_MOC_LITERAL(109, 1573, 11), // "timeChanged"
QT_MOC_LITERAL(110, 1585, 5), // "start"
QT_MOC_LITERAL(111, 1591, 8), // "duration"
QT_MOC_LITERAL(112, 1600, 18), // "positionViewClosed"
QT_MOC_LITERAL(113, 1619, 22), // "clusterProviderUpdated"
QT_MOC_LITERAL(114, 1642, 30), // "noneBrowsingClusterListUpdated"
QT_MOC_LITERAL(115, 1673, 19), // "clustersToNotBrowse"
QT_MOC_LITERAL(116, 1693, 28), // "noneBrowsingEventListUpdated"
QT_MOC_LITERAL(117, 1722, 17), // "eventsToNotBrowse"
QT_MOC_LITERAL(118, 1740, 17), // "skipStatusChanged"
QT_MOC_LITERAL(119, 1758, 15), // "skippedChannels"
QT_MOC_LITERAL(120, 1774, 23), // "decreaseTheRasterHeight"
QT_MOC_LITERAL(121, 1798, 23), // "increaseTheRasterHeight"
QT_MOC_LITERAL(122, 1822, 18), // "updateEventDisplay"
QT_MOC_LITERAL(123, 1841, 25), // "eventsShownInPositionView"
QT_MOC_LITERAL(124, 1867, 5), // "shown"
QT_MOC_LITERAL(125, 1873, 26), // "traceBackgroundImageUpdate"
QT_MOC_LITERAL(126, 1900, 20), // "traceBackgroundImage"
QT_MOC_LITERAL(127, 1921, 18), // "traceWidgetStopped"
QT_MOC_LITERAL(128, 1940, 4), // "page"
QT_MOC_LITERAL(129, 1945, 4), // "stop"
QT_MOC_LITERAL(130, 1950, 10), // "accelerate"
QT_MOC_LITERAL(131, 1961, 10), // "decelerate"
QT_MOC_LITERAL(132, 1972, 20), // "slotChannelsSelected"
QT_MOC_LITERAL(133, 1993, 19), // "setStartAndDuration"
QT_MOC_LITERAL(134, 2013, 17), // "slotEventModified"
QT_MOC_LITERAL(135, 2031, 16), // "slotEventRemoved"
QT_MOC_LITERAL(136, 2048, 14), // "slotEventAdded"
QT_MOC_LITERAL(137, 2063, 25), // "updateWaveformInformation"
QT_MOC_LITERAL(138, 2089, 25), // "updatePositionInformation"
QT_MOC_LITERAL(139, 2115, 18), // "positionDockClosed"
QT_MOC_LITERAL(140, 2134, 8), // "QWidget*"
QT_MOC_LITERAL(141, 2143, 4), // "view"
QT_MOC_LITERAL(142, 2148, 23), // "setEventsInPositionView"
QT_MOC_LITERAL(143, 2172, 26) // "updateTraceBackgroundImage"

    },
    "NeuroscopeView\0stopped\0\0changeBackgroundColor\0"
    "color\0updateContents\0greyScale\0geyScale\0"
    "clusterWaveformsDisplay\0waveforms\0"
    "clusterRasterDisplay\0raster\0"
    "clusterVerticalLinesDisplay\0lines\0"
    "multiColumnsDisplay\0multi\0channelsSelected\0"
    "QList<int>\0selectedIds\0modeToSet\0"
    "BaseFrame::Mode\0selectedMode\0active\0"
    "showChannels\0channelsToShow\0"
    "channelColorUpdate\0channelId\0"
    "groupColorUpdate\0groupId\0increaseAllAmplitude\0"
    "decreaseAllAmplitude\0increaseAmplitude\0"
    "decreaseAmplitude\0updateGains\0gain\0"
    "acquisitionGain\0updateDrawing\0"
    "groupsHaveBeenModified\0channelsToBeSelected\0"
    "resetChannelOffsets\0QMap<int,int>\0"
    "selectedChannelDefaultOffsets\0"
    "resetChannelGains\0selectedChannels\0"
    "drawTraces\0reset\0autocenterChannelsChanged\0"
    "status\0showLabels\0show\0displayCalibration\0"
    "newClusterProvider\0ClustersProvider*\0"
    "clustersProvider\0name\0ItemColors*\0"
    "clusterColors\0QList<int>&\0clustersToShow\0"
    "QMap<int,QList<int> >*\0displayGroupsClusterFile\0"
    "QMap<int,int>*\0channelsSpikeGroups\0"
    "nbSamplesBefore\0nbSamplesAfter\0"
    "clustersToSkip\0newSamplingRate\0"
    "recordingLength\0clusterProviderRemoved\0"
    "showClusters\0clusterColorUpdated\0"
    "clusterId\0nextCluster\0previousCluster\0"
    "print\0QPainter&\0printPainter\0width\0"
    "height\0filePath\0whiteBackground\0"
    "newEventProvider\0EventsProvider*\0"
    "eventsProvider\0eventColors\0eventsToShow\0"
    "eventsToSkip\0eventProviderRemoved\0"
    "lastFile\0showEvents\0eventColorUpdated\0"
    "eventId\0nextEvent\0previousEvent\0"
    "eventModified\0providerName\0selectedEventId\0"
    "time\0newTime\0updateEvents\0eventToRemove\0"
    "eventRemoved\0newEventProperties\0"
    "eventAdded\0addedEventDescription\0"
    "waveformInformationUpdated\0"
    "positionInformationUpdated\0backgroundImage\0"
    "newOrientation\0timeChanged\0start\0"
    "duration\0positionViewClosed\0"
    "clusterProviderUpdated\0"
    "noneBrowsingClusterListUpdated\0"
    "clustersToNotBrowse\0noneBrowsingEventListUpdated\0"
    "eventsToNotBrowse\0skipStatusChanged\0"
    "skippedChannels\0decreaseTheRasterHeight\0"
    "increaseTheRasterHeight\0updateEventDisplay\0"
    "eventsShownInPositionView\0shown\0"
    "traceBackgroundImageUpdate\0"
    "traceBackgroundImage\0traceWidgetStopped\0"
    "page\0stop\0accelerate\0decelerate\0"
    "slotChannelsSelected\0setStartAndDuration\0"
    "slotEventModified\0slotEventRemoved\0"
    "slotEventAdded\0updateWaveformInformation\0"
    "updatePositionInformation\0positionDockClosed\0"
    "QWidget*\0view\0setEventsInPositionView\0"
    "updateTraceBackgroundImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NeuroscopeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      78,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      63,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  404,    2, 0x06 /* Public */,
       3,    1,  405,    2, 0x06 /* Public */,
       5,    0,  408,    2, 0x06 /* Public */,
       6,    1,  409,    2, 0x06 /* Public */,
       8,    1,  412,    2, 0x06 /* Public */,
      10,    1,  415,    2, 0x06 /* Public */,
      12,    1,  418,    2, 0x06 /* Public */,
      14,    1,  421,    2, 0x06 /* Public */,
      16,    1,  424,    2, 0x06 /* Public */,
      19,    2,  427,    2, 0x06 /* Public */,
      23,    1,  432,    2, 0x06 /* Public */,
      25,    2,  435,    2, 0x06 /* Public */,
      27,    2,  440,    2, 0x06 /* Public */,
      29,    0,  445,    2, 0x06 /* Public */,
      30,    0,  446,    2, 0x06 /* Public */,
      31,    1,  447,    2, 0x06 /* Public */,
      32,    1,  450,    2, 0x06 /* Public */,
      33,    2,  453,    2, 0x06 /* Public */,
      36,    0,  458,    2, 0x06 /* Public */,
      37,    1,  459,    2, 0x06 /* Public */,
      38,    1,  462,    2, 0x06 /* Public */,
      39,    1,  465,    2, 0x06 /* Public */,
      42,    1,  468,    2, 0x06 /* Public */,
      44,    0,  471,    2, 0x06 /* Public */,
      45,    0,  472,    2, 0x06 /* Public */,
      46,    1,  473,    2, 0x06 /* Public */,
      48,    1,  476,    2, 0x06 /* Public */,
      50,    2,  479,    2, 0x06 /* Public */,
      51,   10,  484,    2, 0x06 /* Public */,
      66,    1,  505,    2, 0x06 /* Public */,
      68,    2,  508,    2, 0x06 /* Public */,
      69,    2,  513,    2, 0x06 /* Public */,
      70,    4,  518,    2, 0x06 /* Public */,
      72,    0,  527,    2, 0x06 /* Public */,
      73,    0,  528,    2, 0x06 /* Public */,
      74,    5,  529,    2, 0x06 /* Public */,
      81,    6,  540,    2, 0x06 /* Public */,
      87,    3,  553,    2, 0x06 /* Public */,
      89,    2,  560,    2, 0x06 /* Public */,
      90,    4,  565,    2, 0x06 /* Public */,
      92,    0,  574,    2, 0x06 /* Public */,
      93,    0,  575,    2, 0x06 /* Public */,
      94,    4,  576,    2, 0x06 /* Public */,
      99,    4,  585,    2, 0x06 /* Public */,
     100,    0,  594,    2, 0x06 /* Public */,
     101,    3,  595,    2, 0x06 /* Public */,
      99,    3,  602,    2, 0x06 /* Public */,
     102,    2,  609,    2, 0x06 /* Public */,
     103,    3,  614,    2, 0x06 /* Public */,
      99,    3,  621,    2, 0x06 /* Public */,
     105,    3,  628,    2, 0x06 /* Public */,
     106,    5,  635,    2, 0x06 /* Public */,
     109,    2,  646,    2, 0x06 /* Public */,
     112,    0,  651,    2, 0x06 /* Public */,
     113,    1,  652,    2, 0x06 /* Public */,
     114,    2,  655,    2, 0x06 /* Public */,
     116,    2,  660,    2, 0x06 /* Public */,
     118,    1,  665,    2, 0x06 /* Public */,
     120,    0,  668,    2, 0x06 /* Public */,
     121,    0,  669,    2, 0x06 /* Public */,
     122,    0,  670,    2, 0x06 /* Public */,
     123,    1,  671,    2, 0x06 /* Public */,
     125,    2,  674,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     127,    0,  679,    2, 0x08 /* Private */,
     128,    0,  680,    2, 0x0a /* Public */,
     129,    0,  681,    2, 0x0a /* Public */,
     130,    0,  682,    2, 0x0a /* Public */,
     131,    0,  683,    2, 0x0a /* Public */,
     132,    1,  684,    2, 0x0a /* Public */,
     133,    2,  687,    2, 0x0a /* Public */,
     134,    4,  692,    2, 0x0a /* Public */,
     135,    3,  701,    2, 0x0a /* Public */,
     136,    3,  708,    2, 0x0a /* Public */,
     137,    3,  715,    2, 0x0a /* Public */,
     138,    5,  722,    2, 0x0a /* Public */,
     139,    1,  733,    2, 0x0a /* Public */,
     142,    1,  736,    2, 0x0a /* Public */,
     143,    2,  739,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Bool,   21,   22,
    QMetaType::Void, 0x80000000 | 17,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   26,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   28,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   34,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 17,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   49,   22,
    QMetaType::Void, 0x80000000 | 52, QMetaType::QString, 0x80000000 | 55, QMetaType::Bool, 0x80000000 | 57, 0x80000000 | 59, 0x80000000 | 61, QMetaType::Int, QMetaType::Int, 0x80000000 | 17,   53,   54,   56,   22,   58,   60,   62,   63,   64,   65,
    QMetaType::Void, QMetaType::LongLong,   67,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   54,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   54,   58,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    4,   54,   71,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 75, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   76,   77,   78,   79,   80,
    QMetaType::Void, 0x80000000 | 82, QMetaType::QString, 0x80000000 | 55, QMetaType::Bool, 0x80000000 | 57, 0x80000000 | 17,   83,   54,   84,   22,   85,   86,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   54,   22,   88,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57,   54,   85,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    4,   54,   91,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   95,   96,   97,   98,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Double, QMetaType::Double,   22,   95,   97,   98,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,   95,   96,   97,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Double,   22,   95,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   95,   91,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,   95,  104,   97,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57, QMetaType::Bool,   95,   85,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   63,   64,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QImage, QMetaType::Bool, QMetaType::Bool,   77,   78,  107,  108,   22,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,  110,  111,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   95,  115,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   95,  117,
    QMetaType::Void, 0x80000000 | 17,  119,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  124,
    QMetaType::Void, QMetaType::QImage, QMetaType::Bool,  126,   22,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,  110,  111,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   95,   96,   97,   98,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,   95,   96,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,   95,  104,   97,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   63,   64,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QImage, QMetaType::Bool, QMetaType::Bool,   77,   78,  107,  108,   22,
    QMetaType::Void, 0x80000000 | 140,  141,
    QMetaType::Void, QMetaType::Bool,  124,
    QMetaType::Void, QMetaType::QImage, QMetaType::Bool,  126,   22,

       0        // eod
};

void NeuroscopeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NeuroscopeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->updateContents(); break;
        case 3: _t->greyScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clusterWaveformsDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->clusterRasterDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->clusterVerticalLinesDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->multiColumnsDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->channelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 9: _t->modeToSet((*reinterpret_cast< BaseFrame::Mode(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->showChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 11: _t->channelColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->groupColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->increaseAllAmplitude(); break;
        case 14: _t->decreaseAllAmplitude(); break;
        case 15: _t->increaseAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 16: _t->decreaseAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 17: _t->updateGains((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->updateDrawing(); break;
        case 19: _t->groupsHaveBeenModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->channelsToBeSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 21: _t->resetChannelOffsets((*reinterpret_cast< const QMap<int,int>(*)>(_a[1]))); break;
        case 22: _t->resetChannelGains((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 23: _t->drawTraces(); break;
        case 24: _t->reset(); break;
        case 25: _t->autocenterChannelsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->showLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->displayCalibration((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->newClusterProvider((*reinterpret_cast< ClustersProvider*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< QMap<int,QList<int> >*(*)>(_a[6])),(*reinterpret_cast< QMap<int,int>*(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< const QList<int>(*)>(_a[10]))); break;
        case 29: _t->newSamplingRate((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 30: _t->clusterProviderRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->showClusters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 32: _t->clusterColorUpdated((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 33: _t->nextCluster(); break;
        case 34: _t->previousCluster(); break;
        case 35: _t->print((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 36: _t->newEventProvider((*reinterpret_cast< EventsProvider*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< const QList<int>(*)>(_a[6]))); break;
        case 37: _t->eventProviderRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: _t->showEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 39: _t->eventColorUpdated((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 40: _t->nextEvent(); break;
        case 41: _t->previousEvent(); break;
        case 42: _t->eventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 43: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 44: _t->eventToRemove(); break;
        case 45: _t->eventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 46: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 47: _t->newEventProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 48: _t->eventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 49: _t->updateEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 50: _t->waveformInformationUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 51: _t->positionInformationUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QImage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 52: _t->timeChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 53: _t->positionViewClosed(); break;
        case 54: _t->clusterProviderUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->noneBrowsingClusterListUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 56: _t->noneBrowsingEventListUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 57: _t->skipStatusChanged((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 58: _t->decreaseTheRasterHeight(); break;
        case 59: _t->increaseTheRasterHeight(); break;
        case 60: _t->updateEventDisplay(); break;
        case 61: _t->eventsShownInPositionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->traceBackgroundImageUpdate((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 63: _t->traceWidgetStopped(); break;
        case 64: _t->page(); break;
        case 65: _t->stop(); break;
        case 66: _t->accelerate(); break;
        case 67: _t->decelerate(); break;
        case 68: _t->slotChannelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 69: _t->setStartAndDuration((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 70: _t->slotEventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 71: _t->slotEventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 72: _t->slotEventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 73: _t->updateWaveformInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 74: _t->updatePositionInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 75: _t->positionDockClosed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 76: _t->setEventsInPositionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->updateTraceBackgroundImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 9:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::stopped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::changeBackgroundColor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateContents)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::greyScale)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterWaveformsDisplay)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterRasterDisplay)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterVerticalLinesDisplay)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::multiColumnsDisplay)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::channelsSelected)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(BaseFrame::Mode , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::modeToSet)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::showChannels)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::channelColorUpdate)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::groupColorUpdate)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::increaseAllAmplitude)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::decreaseAllAmplitude)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::increaseAmplitude)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::decreaseAmplitude)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateGains)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateDrawing)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::groupsHaveBeenModified)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::channelsToBeSelected)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QMap<int,int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::resetChannelOffsets)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::resetChannelGains)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::drawTraces)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::reset)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::autocenterChannelsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::showLabels)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::displayCalibration)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(ClustersProvider * , QString , ItemColors * , bool , QList<int> & , QMap<int,QList<int> > * , QMap<int,int> * , int , int , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::newClusterProvider)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::newSamplingRate)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterProviderRemoved)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::showClusters)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QColor & , const QString & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterColorUpdated)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::nextCluster)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::previousCluster)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(QPainter & , int , int , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::print)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(EventsProvider * , QString , ItemColors * , bool , QList<int> & , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::newEventProvider)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventProviderRemoved)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::showEvents)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QColor & , const QString & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventColorUpdated)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::nextEvent)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::previousEvent)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventModified)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool , const QString & , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateEvents)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventToRemove)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventRemoved)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool , const QString & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateEvents)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::newEventProperties)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventAdded)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , QList<int> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateEvents)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(int , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::waveformInformationUpdated)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(int , int , QImage , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::positionInformationUpdated)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::timeChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::positionViewClosed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::clusterProviderUpdated)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::noneBrowsingClusterListUpdated)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QString & , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::noneBrowsingEventListUpdated)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::skipStatusChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::decreaseTheRasterHeight)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::increaseTheRasterHeight)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::updateEventDisplay)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::eventsShownInPositionView)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (NeuroscopeView::*)(const QImage & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuroscopeView::traceBackgroundImageUpdate)) {
                *result = 62;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NeuroscopeView::staticMetaObject = { {
    &DockArea::staticMetaObject,
    qt_meta_stringdata_NeuroscopeView.data,
    qt_meta_data_NeuroscopeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NeuroscopeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NeuroscopeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NeuroscopeView.stringdata0))
        return static_cast<void*>(this);
    return DockArea::qt_metacast(_clname);
}

int NeuroscopeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    }
    return _id;
}

// SIGNAL 0
void NeuroscopeView::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NeuroscopeView::changeBackgroundColor(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NeuroscopeView::updateContents()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NeuroscopeView::greyScale(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NeuroscopeView::clusterWaveformsDisplay(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NeuroscopeView::clusterRasterDisplay(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NeuroscopeView::clusterVerticalLinesDisplay(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NeuroscopeView::multiColumnsDisplay(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NeuroscopeView::channelsSelected(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NeuroscopeView::modeToSet(BaseFrame::Mode _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NeuroscopeView::showChannels(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NeuroscopeView::channelColorUpdate(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NeuroscopeView::groupColorUpdate(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NeuroscopeView::increaseAllAmplitude()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void NeuroscopeView::decreaseAllAmplitude()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void NeuroscopeView::increaseAmplitude(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void NeuroscopeView::decreaseAmplitude(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void NeuroscopeView::updateGains(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void NeuroscopeView::updateDrawing()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void NeuroscopeView::groupsHaveBeenModified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void NeuroscopeView::channelsToBeSelected(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void NeuroscopeView::resetChannelOffsets(const QMap<int,int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void NeuroscopeView::resetChannelGains(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void NeuroscopeView::drawTraces()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void NeuroscopeView::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void NeuroscopeView::autocenterChannelsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void NeuroscopeView::showLabels(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void NeuroscopeView::displayCalibration(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void NeuroscopeView::newClusterProvider(ClustersProvider * _t1, QString _t2, ItemColors * _t3, bool _t4, QList<int> & _t5, QMap<int,QList<int> > * _t6, QMap<int,int> * _t7, int _t8, int _t9, const QList<int> & _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void NeuroscopeView::newSamplingRate(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void NeuroscopeView::clusterProviderRemoved(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void NeuroscopeView::showClusters(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void NeuroscopeView::clusterColorUpdated(const QColor & _t1, const QString & _t2, int _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void NeuroscopeView::nextCluster()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void NeuroscopeView::previousCluster()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void NeuroscopeView::print(QPainter & _t1, int _t2, int _t3, const QString & _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void NeuroscopeView::newEventProvider(EventsProvider * _t1, QString _t2, ItemColors * _t3, bool _t4, QList<int> & _t5, const QList<int> & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void NeuroscopeView::eventProviderRemoved(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void NeuroscopeView::showEvents(const QString & _t1, QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void NeuroscopeView::eventColorUpdated(const QColor & _t1, const QString & _t2, int _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void NeuroscopeView::nextEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void NeuroscopeView::previousEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void NeuroscopeView::eventModified(const QString & _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void NeuroscopeView::updateEvents(bool _t1, const QString & _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void NeuroscopeView::eventToRemove()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void NeuroscopeView::eventRemoved(const QString & _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void NeuroscopeView::updateEvents(bool _t1, const QString & _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void NeuroscopeView::newEventProperties(const QString & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void NeuroscopeView::eventAdded(const QString & _t1, QString _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void NeuroscopeView::updateEvents(const QString & _t1, QList<int> & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void NeuroscopeView::waveformInformationUpdated(int _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void NeuroscopeView::positionInformationUpdated(int _t1, int _t2, QImage _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void NeuroscopeView::timeChanged(long _t1, long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void NeuroscopeView::positionViewClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 53, nullptr);
}

// SIGNAL 54
void NeuroscopeView::clusterProviderUpdated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void NeuroscopeView::noneBrowsingClusterListUpdated(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void NeuroscopeView::noneBrowsingEventListUpdated(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void NeuroscopeView::skipStatusChanged(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void NeuroscopeView::decreaseTheRasterHeight()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void NeuroscopeView::increaseTheRasterHeight()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void NeuroscopeView::updateEventDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 60, nullptr);
}

// SIGNAL 61
void NeuroscopeView::eventsShownInPositionView(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void NeuroscopeView::traceBackgroundImageUpdate(const QImage & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
