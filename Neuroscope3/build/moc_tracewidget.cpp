/****************************************************************************
** Meta object code from reading C++ file 'tracewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tracewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceWidget_t {
    QByteArrayData data[155];
    char stringdata0[2391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceWidget_t qt_meta_stringdata_TraceWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TraceWidget"
QT_MOC_LITERAL(1, 12, 7), // "stopped"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "channelsSelected"
QT_MOC_LITERAL(4, 38, 10), // "QList<int>"
QT_MOC_LITERAL(5, 49, 11), // "selectedIds"
QT_MOC_LITERAL(6, 61, 22), // "updateStartAndDuration"
QT_MOC_LITERAL(7, 84, 9), // "startTime"
QT_MOC_LITERAL(8, 94, 10), // "timeWindow"
QT_MOC_LITERAL(9, 105, 13), // "eventModified"
QT_MOC_LITERAL(10, 119, 12), // "providerName"
QT_MOC_LITERAL(11, 132, 15), // "selectedEventId"
QT_MOC_LITERAL(12, 148, 4), // "time"
QT_MOC_LITERAL(13, 153, 7), // "newTime"
QT_MOC_LITERAL(14, 161, 12), // "eventRemoved"
QT_MOC_LITERAL(15, 174, 10), // "eventAdded"
QT_MOC_LITERAL(16, 185, 21), // "addedEventDescription"
QT_MOC_LITERAL(17, 207, 21), // "parentDockBeingClosed"
QT_MOC_LITERAL(18, 229, 8), // "QWidget*"
QT_MOC_LITERAL(19, 238, 10), // "viewWidget"
QT_MOC_LITERAL(20, 249, 15), // "eventsAvailable"
QT_MOC_LITERAL(21, 265, 26), // "QHash<QString,EventData*>&"
QT_MOC_LITERAL(22, 292, 10), // "eventsData"
QT_MOC_LITERAL(23, 303, 26), // "QMap<QString,QList<int> >&"
QT_MOC_LITERAL(24, 330, 14), // "selectedEvents"
QT_MOC_LITERAL(25, 345, 27), // "QHash<QString,ItemColors*>&"
QT_MOC_LITERAL(26, 373, 18), // "providerItemColors"
QT_MOC_LITERAL(27, 392, 9), // "initiator"
QT_MOC_LITERAL(28, 402, 12), // "samplingRate"
QT_MOC_LITERAL(29, 415, 4), // "page"
QT_MOC_LITERAL(30, 420, 10), // "accelerate"
QT_MOC_LITERAL(31, 431, 10), // "decelerate"
QT_MOC_LITERAL(32, 442, 7), // "advance"
QT_MOC_LITERAL(33, 450, 4), // "stop"
QT_MOC_LITERAL(34, 455, 21), // "changeBackgroundColor"
QT_MOC_LITERAL(35, 477, 5), // "color"
QT_MOC_LITERAL(36, 483, 12), // "setGreyScale"
QT_MOC_LITERAL(37, 496, 4), // "grey"
QT_MOC_LITERAL(38, 501, 10), // "moveToTime"
QT_MOC_LITERAL(39, 512, 15), // "setMultiColumns"
QT_MOC_LITERAL(40, 528, 8), // "multiple"
QT_MOC_LITERAL(41, 537, 23), // "setClusterVerticalLines"
QT_MOC_LITERAL(42, 561, 5), // "lines"
QT_MOC_LITERAL(43, 567, 16), // "setClusterRaster"
QT_MOC_LITERAL(44, 584, 6), // "raster"
QT_MOC_LITERAL(45, 591, 19), // "setClusterWaveforms"
QT_MOC_LITERAL(46, 611, 9), // "waveforms"
QT_MOC_LITERAL(47, 621, 20), // "slotChannelsSelected"
QT_MOC_LITERAL(48, 642, 7), // "setMode"
QT_MOC_LITERAL(49, 650, 15), // "BaseFrame::Mode"
QT_MOC_LITERAL(50, 666, 12), // "selectedMode"
QT_MOC_LITERAL(51, 679, 6), // "active"
QT_MOC_LITERAL(52, 686, 12), // "showChannels"
QT_MOC_LITERAL(53, 699, 14), // "channelsToShow"
QT_MOC_LITERAL(54, 714, 12), // "showClusters"
QT_MOC_LITERAL(55, 727, 4), // "name"
QT_MOC_LITERAL(56, 732, 14), // "clustersToShow"
QT_MOC_LITERAL(57, 747, 10), // "showEvents"
QT_MOC_LITERAL(58, 758, 11), // "QList<int>&"
QT_MOC_LITERAL(59, 770, 12), // "eventsToShow"
QT_MOC_LITERAL(60, 783, 18), // "channelColorUpdate"
QT_MOC_LITERAL(61, 802, 9), // "channelId"
QT_MOC_LITERAL(62, 812, 18), // "clusterColorUpdate"
QT_MOC_LITERAL(63, 831, 9), // "clusterId"
QT_MOC_LITERAL(64, 841, 16), // "eventColorUpdate"
QT_MOC_LITERAL(65, 858, 7), // "eventId"
QT_MOC_LITERAL(66, 866, 16), // "groupColorUpdate"
QT_MOC_LITERAL(67, 883, 7), // "groupId"
QT_MOC_LITERAL(68, 891, 28), // "increaseAllChannelsAmplitude"
QT_MOC_LITERAL(69, 920, 28), // "decreaseAllChannelsAmplitude"
QT_MOC_LITERAL(70, 949, 33), // "increaseSelectedChannelsAmpli..."
QT_MOC_LITERAL(71, 983, 10), // "channelIds"
QT_MOC_LITERAL(72, 994, 33), // "decreaseSelectedChannelsAmpli..."
QT_MOC_LITERAL(73, 1028, 8), // "setGains"
QT_MOC_LITERAL(74, 1037, 4), // "gain"
QT_MOC_LITERAL(75, 1042, 15), // "acquisitionGain"
QT_MOC_LITERAL(76, 1058, 13), // "updateDrawing"
QT_MOC_LITERAL(77, 1072, 14), // "updateContents"
QT_MOC_LITERAL(78, 1087, 14), // "groupsModified"
QT_MOC_LITERAL(79, 1102, 14), // "selectChannels"
QT_MOC_LITERAL(80, 1117, 12), // "resetOffsets"
QT_MOC_LITERAL(81, 1130, 13), // "QMap<int,int>"
QT_MOC_LITERAL(82, 1144, 29), // "selectedChannelDefaultOffsets"
QT_MOC_LITERAL(83, 1174, 10), // "resetGains"
QT_MOC_LITERAL(84, 1185, 16), // "selectedChannels"
QT_MOC_LITERAL(85, 1202, 10), // "drawTraces"
QT_MOC_LITERAL(86, 1213, 5), // "reset"
QT_MOC_LITERAL(87, 1219, 21), // "setAutocenterChannels"
QT_MOC_LITERAL(88, 1241, 6), // "status"
QT_MOC_LITERAL(89, 1248, 10), // "showLabels"
QT_MOC_LITERAL(90, 1259, 4), // "show"
QT_MOC_LITERAL(91, 1264, 23), // "slotSetStartAndDuration"
QT_MOC_LITERAL(92, 1288, 8), // "duration"
QT_MOC_LITERAL(93, 1297, 15), // "showCalibration"
QT_MOC_LITERAL(94, 1313, 20), // "samplingRateModified"
QT_MOC_LITERAL(95, 1334, 6), // "length"
QT_MOC_LITERAL(96, 1341, 18), // "addClusterProvider"
QT_MOC_LITERAL(97, 1360, 17), // "ClustersProvider*"
QT_MOC_LITERAL(98, 1378, 16), // "clustersProvider"
QT_MOC_LITERAL(99, 1395, 11), // "ItemColors*"
QT_MOC_LITERAL(100, 1407, 13), // "clusterColors"
QT_MOC_LITERAL(101, 1421, 22), // "QMap<int,QList<int> >*"
QT_MOC_LITERAL(102, 1444, 24), // "displayGroupsClusterFile"
QT_MOC_LITERAL(103, 1469, 14), // "QMap<int,int>*"
QT_MOC_LITERAL(104, 1484, 19), // "channelsSpikeGroups"
QT_MOC_LITERAL(105, 1504, 15), // "nbSamplesBefore"
QT_MOC_LITERAL(106, 1520, 14), // "nbSamplesAfter"
QT_MOC_LITERAL(107, 1535, 14), // "clustersToSkip"
QT_MOC_LITERAL(108, 1550, 21), // "removeClusterProvider"
QT_MOC_LITERAL(109, 1572, 16), // "addEventProvider"
QT_MOC_LITERAL(110, 1589, 15), // "EventsProvider*"
QT_MOC_LITERAL(111, 1605, 14), // "eventsProvider"
QT_MOC_LITERAL(112, 1620, 11), // "eventColors"
QT_MOC_LITERAL(113, 1632, 17), // "eventsToNotBrowse"
QT_MOC_LITERAL(114, 1650, 19), // "removeEventProvider"
QT_MOC_LITERAL(115, 1670, 5), // "print"
QT_MOC_LITERAL(116, 1676, 9), // "QPainter&"
QT_MOC_LITERAL(117, 1686, 12), // "printPainter"
QT_MOC_LITERAL(118, 1699, 5), // "width"
QT_MOC_LITERAL(119, 1705, 6), // "height"
QT_MOC_LITERAL(120, 1712, 8), // "filePath"
QT_MOC_LITERAL(121, 1721, 15), // "whiteBackground"
QT_MOC_LITERAL(122, 1737, 15), // "showNextCluster"
QT_MOC_LITERAL(123, 1753, 19), // "showPreviousCluster"
QT_MOC_LITERAL(124, 1773, 13), // "showNextEvent"
QT_MOC_LITERAL(125, 1787, 17), // "showPreviousEvent"
QT_MOC_LITERAL(126, 1805, 17), // "slotEventModified"
QT_MOC_LITERAL(127, 1823, 16), // "slotEventRemoved"
QT_MOC_LITERAL(128, 1840, 12), // "updateEvents"
QT_MOC_LITERAL(129, 1853, 11), // "removeEvent"
QT_MOC_LITERAL(130, 1865, 20), // "eventToAddProperties"
QT_MOC_LITERAL(131, 1886, 16), // "eventDescription"
QT_MOC_LITERAL(132, 1903, 14), // "slotEventAdded"
QT_MOC_LITERAL(133, 1918, 25), // "updateWaveformInformation"
QT_MOC_LITERAL(134, 1944, 17), // "updateClusterData"
QT_MOC_LITERAL(135, 1962, 27), // "updateNoneBrowsingEventList"
QT_MOC_LITERAL(136, 1990, 29), // "updateNoneBrowsingClusterList"
QT_MOC_LITERAL(137, 2020, 19), // "clustersToNotBrowse"
QT_MOC_LITERAL(138, 2040, 15), // "dockBeingClosed"
QT_MOC_LITERAL(139, 2056, 14), // "updateClusters"
QT_MOC_LITERAL(140, 2071, 16), // "updateSkipStatus"
QT_MOC_LITERAL(141, 2088, 15), // "skippedChannels"
QT_MOC_LITERAL(142, 2104, 20), // "increaseRasterHeight"
QT_MOC_LITERAL(143, 2125, 20), // "decreaseRasterHeight"
QT_MOC_LITERAL(144, 2146, 15), // "getRasterHeight"
QT_MOC_LITERAL(145, 2162, 19), // "slotEventsAvailable"
QT_MOC_LITERAL(146, 2182, 26), // "getCurrentEventInformation"
QT_MOC_LITERAL(147, 2209, 7), // "endTime"
QT_MOC_LITERAL(148, 2217, 26), // "traceBackgroundImageUpdate"
QT_MOC_LITERAL(149, 2244, 20), // "traceBackgroundImage"
QT_MOC_LITERAL(150, 2265, 26), // "slotStartMinuteTimeUpdated"
QT_MOC_LITERAL(151, 2292, 26), // "slotStartSecondTimeUpdated"
QT_MOC_LITERAL(152, 2319, 30), // "slotStartMilisecondTimeUpdated"
QT_MOC_LITERAL(153, 2350, 19), // "slotDurationUpdated"
QT_MOC_LITERAL(154, 2370, 20) // "slotScrollBarUpdated"

    },
    "TraceWidget\0stopped\0\0channelsSelected\0"
    "QList<int>\0selectedIds\0updateStartAndDuration\0"
    "startTime\0timeWindow\0eventModified\0"
    "providerName\0selectedEventId\0time\0"
    "newTime\0eventRemoved\0eventAdded\0"
    "addedEventDescription\0parentDockBeingClosed\0"
    "QWidget*\0viewWidget\0eventsAvailable\0"
    "QHash<QString,EventData*>&\0eventsData\0"
    "QMap<QString,QList<int> >&\0selectedEvents\0"
    "QHash<QString,ItemColors*>&\0"
    "providerItemColors\0initiator\0samplingRate\0"
    "page\0accelerate\0decelerate\0advance\0"
    "stop\0changeBackgroundColor\0color\0"
    "setGreyScale\0grey\0moveToTime\0"
    "setMultiColumns\0multiple\0"
    "setClusterVerticalLines\0lines\0"
    "setClusterRaster\0raster\0setClusterWaveforms\0"
    "waveforms\0slotChannelsSelected\0setMode\0"
    "BaseFrame::Mode\0selectedMode\0active\0"
    "showChannels\0channelsToShow\0showClusters\0"
    "name\0clustersToShow\0showEvents\0"
    "QList<int>&\0eventsToShow\0channelColorUpdate\0"
    "channelId\0clusterColorUpdate\0clusterId\0"
    "eventColorUpdate\0eventId\0groupColorUpdate\0"
    "groupId\0increaseAllChannelsAmplitude\0"
    "decreaseAllChannelsAmplitude\0"
    "increaseSelectedChannelsAmplitude\0"
    "channelIds\0decreaseSelectedChannelsAmplitude\0"
    "setGains\0gain\0acquisitionGain\0"
    "updateDrawing\0updateContents\0"
    "groupsModified\0selectChannels\0"
    "resetOffsets\0QMap<int,int>\0"
    "selectedChannelDefaultOffsets\0resetGains\0"
    "selectedChannels\0drawTraces\0reset\0"
    "setAutocenterChannels\0status\0showLabels\0"
    "show\0slotSetStartAndDuration\0duration\0"
    "showCalibration\0samplingRateModified\0"
    "length\0addClusterProvider\0ClustersProvider*\0"
    "clustersProvider\0ItemColors*\0clusterColors\0"
    "QMap<int,QList<int> >*\0displayGroupsClusterFile\0"
    "QMap<int,int>*\0channelsSpikeGroups\0"
    "nbSamplesBefore\0nbSamplesAfter\0"
    "clustersToSkip\0removeClusterProvider\0"
    "addEventProvider\0EventsProvider*\0"
    "eventsProvider\0eventColors\0eventsToNotBrowse\0"
    "removeEventProvider\0print\0QPainter&\0"
    "printPainter\0width\0height\0filePath\0"
    "whiteBackground\0showNextCluster\0"
    "showPreviousCluster\0showNextEvent\0"
    "showPreviousEvent\0slotEventModified\0"
    "slotEventRemoved\0updateEvents\0removeEvent\0"
    "eventToAddProperties\0eventDescription\0"
    "slotEventAdded\0updateWaveformInformation\0"
    "updateClusterData\0updateNoneBrowsingEventList\0"
    "updateNoneBrowsingClusterList\0"
    "clustersToNotBrowse\0dockBeingClosed\0"
    "updateClusters\0updateSkipStatus\0"
    "skippedChannels\0increaseRasterHeight\0"
    "decreaseRasterHeight\0getRasterHeight\0"
    "slotEventsAvailable\0getCurrentEventInformation\0"
    "endTime\0traceBackgroundImageUpdate\0"
    "traceBackgroundImage\0slotStartMinuteTimeUpdated\0"
    "slotStartSecondTimeUpdated\0"
    "slotStartMilisecondTimeUpdated\0"
    "slotDurationUpdated\0slotScrollBarUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  424,    2, 0x06 /* Public */,
       3,    1,  425,    2, 0x06 /* Public */,
       6,    2,  428,    2, 0x06 /* Public */,
       9,    4,  433,    2, 0x06 /* Public */,
      14,    3,  442,    2, 0x06 /* Public */,
      15,    3,  449,    2, 0x06 /* Public */,
      17,    1,  456,    2, 0x06 /* Public */,
      20,    5,  459,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    0,  470,    2, 0x0a /* Public */,
      30,    0,  471,    2, 0x0a /* Public */,
      31,    0,  472,    2, 0x0a /* Public */,
      32,    0,  473,    2, 0x0a /* Public */,
      33,    0,  474,    2, 0x0a /* Public */,
      34,    1,  475,    2, 0x0a /* Public */,
      36,    1,  478,    2, 0x0a /* Public */,
      38,    1,  481,    2, 0x0a /* Public */,
      39,    1,  484,    2, 0x0a /* Public */,
      41,    1,  487,    2, 0x0a /* Public */,
      43,    1,  490,    2, 0x0a /* Public */,
      45,    1,  493,    2, 0x0a /* Public */,
      47,    1,  496,    2, 0x0a /* Public */,
      48,    2,  499,    2, 0x0a /* Public */,
      52,    1,  504,    2, 0x0a /* Public */,
      54,    2,  507,    2, 0x0a /* Public */,
      57,    2,  512,    2, 0x0a /* Public */,
      60,    2,  517,    2, 0x0a /* Public */,
      62,    4,  522,    2, 0x0a /* Public */,
      64,    4,  531,    2, 0x0a /* Public */,
      66,    2,  540,    2, 0x0a /* Public */,
      68,    0,  545,    2, 0x0a /* Public */,
      69,    0,  546,    2, 0x0a /* Public */,
      70,    1,  547,    2, 0x0a /* Public */,
      72,    1,  550,    2, 0x0a /* Public */,
      73,    2,  553,    2, 0x0a /* Public */,
      76,    0,  558,    2, 0x0a /* Public */,
      77,    0,  559,    2, 0x0a /* Public */,
      78,    1,  560,    2, 0x0a /* Public */,
      79,    1,  563,    2, 0x0a /* Public */,
      80,    1,  566,    2, 0x0a /* Public */,
      83,    1,  569,    2, 0x0a /* Public */,
      85,    0,  572,    2, 0x0a /* Public */,
      86,    0,  573,    2, 0x0a /* Public */,
      87,    1,  574,    2, 0x0a /* Public */,
      89,    1,  577,    2, 0x0a /* Public */,
      91,    2,  580,    2, 0x0a /* Public */,
      93,    2,  585,    2, 0x0a /* Public */,
      94,    1,  590,    2, 0x0a /* Public */,
      96,   10,  593,    2, 0x0a /* Public */,
     108,    2,  614,    2, 0x0a /* Public */,
     109,    6,  619,    2, 0x0a /* Public */,
     114,    2,  632,    2, 0x0a /* Public */,
     115,    5,  637,    2, 0x0a /* Public */,
     122,    0,  648,    2, 0x0a /* Public */,
     123,    0,  649,    2, 0x0a /* Public */,
     124,    0,  650,    2, 0x0a /* Public */,
     125,    0,  651,    2, 0x0a /* Public */,
     126,    4,  652,    2, 0x0a /* Public */,
     127,    3,  661,    2, 0x0a /* Public */,
     128,    4,  668,    2, 0x0a /* Public */,
     129,    0,  677,    2, 0x0a /* Public */,
     128,    3,  678,    2, 0x0a /* Public */,
     130,    2,  685,    2, 0x0a /* Public */,
     132,    3,  690,    2, 0x0a /* Public */,
     128,    3,  697,    2, 0x0a /* Public */,
     133,    3,  704,    2, 0x0a /* Public */,
     134,    1,  711,    2, 0x0a /* Public */,
     135,    2,  714,    2, 0x0a /* Public */,
     136,    2,  719,    2, 0x0a /* Public */,
     138,    0,  724,    2, 0x0a /* Public */,
     139,    4,  725,    2, 0x0a /* Public */,
     140,    1,  734,    2, 0x0a /* Public */,
     142,    0,  737,    2, 0x0a /* Public */,
     143,    0,  738,    2, 0x0a /* Public */,
     144,    0,  739,    2, 0x0a /* Public */,
     145,    5,  740,    2, 0x0a /* Public */,
     146,    3,  751,    2, 0x0a /* Public */,
     148,    2,  758,    2, 0x0a /* Public */,
     150,    0,  763,    2, 0x08 /* Private */,
     151,    0,  764,    2, 0x08 /* Private */,
     152,    0,  765,    2, 0x08 /* Private */,
     153,    0,  766,    2, 0x08 /* Private */,
     154,    0,  767,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,   10,   16,   12,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23, 0x80000000 | 25, QMetaType::QObjectStar, QMetaType::Double,   22,   24,   26,   27,   28,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Long,   12,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Bool,   50,   51,
    QMetaType::Void, 0x80000000 | 4,   53,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,   55,   56,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 58,   55,   59,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   61,   51,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   35,   55,   63,   51,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   35,   55,   65,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   67,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   71,
    QMetaType::Void, 0x80000000 | 4,   71,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   74,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, 0x80000000 | 4,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,   12,   92,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   90,   51,
    QMetaType::Void, QMetaType::LongLong,   95,
    QMetaType::Void, 0x80000000 | 97, QMetaType::QString, 0x80000000 | 99, QMetaType::Bool, 0x80000000 | 58, 0x80000000 | 101, 0x80000000 | 103, QMetaType::Int, QMetaType::Int, 0x80000000 | 4,   98,   55,  100,   51,   56,  102,  104,  105,  106,  107,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   55,   51,
    QMetaType::Void, 0x80000000 | 110, QMetaType::QString, 0x80000000 | 99, QMetaType::Bool, 0x80000000 | 58, 0x80000000 | 4,  111,   55,  112,   51,   59,  113,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   55,   51,
    QMetaType::Void, 0x80000000 | 116, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,  117,  118,  119,  120,  121,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,   10,   11,   12,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Double, QMetaType::Double,   51,   10,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Double,   51,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,  131,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,   10,   16,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 58, QMetaType::Bool,   10,   59,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  105,  106,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,   10,  113,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,   10,  137,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 58, 0x80000000 | 99, QMetaType::Bool,   55,   56,  100,   51,
    QMetaType::Void, 0x80000000 | 4,  141,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23, 0x80000000 | 25, QMetaType::QObjectStar, QMetaType::Double,   22,   24,   26,   27,   28,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::QObjectStar,    7,  147,   27,
    QMetaType::Void, QMetaType::QImage, QMetaType::Bool,  149,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TraceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->channelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 2: _t->updateStartAndDuration((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 3: _t->eventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 4: _t->eventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->eventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->parentDockBeingClosed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->eventsAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 8: _t->page(); break;
        case 9: _t->accelerate(); break;
        case 10: _t->decelerate(); break;
        case 11: _t->advance(); break;
        case 12: _t->stop(); break;
        case 13: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->setGreyScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->moveToTime((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 16: _t->setMultiColumns((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setClusterVerticalLines((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setClusterRaster((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setClusterWaveforms((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slotChannelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 21: _t->setMode((*reinterpret_cast< BaseFrame::Mode(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->showChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 23: _t->showClusters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 24: _t->showEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 25: _t->channelColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->clusterColorUpdate((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 27: _t->eventColorUpdate((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 28: _t->groupColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->increaseAllChannelsAmplitude(); break;
        case 30: _t->decreaseAllChannelsAmplitude(); break;
        case 31: _t->increaseSelectedChannelsAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 32: _t->decreaseSelectedChannelsAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 33: _t->setGains((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->updateDrawing(); break;
        case 35: _t->updateContents(); break;
        case 36: _t->groupsModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->selectChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 38: _t->resetOffsets((*reinterpret_cast< const QMap<int,int>(*)>(_a[1]))); break;
        case 39: _t->resetGains((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 40: _t->drawTraces(); break;
        case 41: _t->reset(); break;
        case 42: _t->setAutocenterChannels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->showLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->slotSetStartAndDuration((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 45: _t->showCalibration((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->samplingRateModified((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 47: _t->addClusterProvider((*reinterpret_cast< ClustersProvider*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< QMap<int,QList<int> >*(*)>(_a[6])),(*reinterpret_cast< QMap<int,int>*(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< const QList<int>(*)>(_a[10]))); break;
        case 48: _t->removeClusterProvider((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->addEventProvider((*reinterpret_cast< EventsProvider*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< const QList<int>(*)>(_a[6]))); break;
        case 50: _t->removeEventProvider((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->print((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 52: _t->showNextCluster(); break;
        case 53: _t->showPreviousCluster(); break;
        case 54: _t->showNextEvent(); break;
        case 55: _t->showPreviousEvent(); break;
        case 56: _t->slotEventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 57: _t->slotEventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 58: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 59: _t->removeEvent(); break;
        case 60: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 61: _t->eventToAddProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 62: _t->slotEventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 63: _t->updateEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 64: _t->updateWaveformInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 65: _t->updateClusterData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->updateNoneBrowsingEventList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 67: _t->updateNoneBrowsingClusterList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 68: _t->dockBeingClosed(); break;
        case 69: _t->updateClusters((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 70: _t->updateSkipStatus((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 71: _t->increaseRasterHeight(); break;
        case 72: _t->decreaseRasterHeight(); break;
        case 73: { int _r = _t->getRasterHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->slotEventsAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 75: _t->getCurrentEventInformation((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 76: _t->traceBackgroundImageUpdate((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 77: _t->slotStartMinuteTimeUpdated(); break;
        case 78: _t->slotStartSecondTimeUpdated(); break;
        case 79: _t->slotStartMilisecondTimeUpdated(); break;
        case 80: _t->slotDurationUpdated(); break;
        case 81: _t->slotScrollBarUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
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
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 9:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::stopped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::channelsSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::updateStartAndDuration)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(const QString & , int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::eventModified)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(const QString & , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::eventRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(const QString & , const QString & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::eventAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::parentDockBeingClosed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)(QHash<QString,EventData*> & , QMap<QString,QList<int> > & , QHash<QString,ItemColors*> & , QObject * , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::eventsAvailable)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TraceWidget.data,
    qt_meta_data_TraceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TraceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    return _id;
}

// SIGNAL 0
void TraceWidget::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TraceWidget::channelsSelected(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TraceWidget::updateStartAndDuration(long _t1, long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TraceWidget::eventModified(const QString & _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TraceWidget::eventRemoved(const QString & _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TraceWidget::eventAdded(const QString & _t1, const QString & _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TraceWidget::parentDockBeingClosed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TraceWidget::eventsAvailable(QHash<QString,EventData*> & _t1, QMap<QString,QList<int> > & _t2, QHash<QString,ItemColors*> & _t3, QObject * _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
