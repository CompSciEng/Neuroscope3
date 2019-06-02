/****************************************************************************
** Meta object code from reading C++ file 'neuroscope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/neuroscope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'neuroscope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NeuroscopeApp_t {
    QByteArrayData data[161];
    char stringdata0[2705];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NeuroscopeApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NeuroscopeApp_t qt_meta_stringdata_NeuroscopeApp = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NeuroscopeApp"
QT_MOC_LITERAL(1, 14, 21), // "neuroscopeViewStopped"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "page"
QT_MOC_LITERAL(4, 42, 4), // "stop"
QT_MOC_LITERAL(5, 47, 10), // "accelerate"
QT_MOC_LITERAL(6, 58, 10), // "decelerate"
QT_MOC_LITERAL(7, 69, 17), // "slotEventModified"
QT_MOC_LITERAL(8, 87, 12), // "providerName"
QT_MOC_LITERAL(9, 100, 15), // "selectedEventId"
QT_MOC_LITERAL(10, 116, 4), // "time"
QT_MOC_LITERAL(11, 121, 7), // "newTime"
QT_MOC_LITERAL(12, 129, 11), // "removeEvent"
QT_MOC_LITERAL(13, 141, 16), // "slotEventRemoved"
QT_MOC_LITERAL(14, 158, 8), // "addEvent"
QT_MOC_LITERAL(15, 167, 22), // "slotEventGroupSelected"
QT_MOC_LITERAL(16, 190, 14), // "eventGroupName"
QT_MOC_LITERAL(17, 205, 14), // "slotEventAdded"
QT_MOC_LITERAL(18, 220, 21), // "addedEventDescription"
QT_MOC_LITERAL(19, 242, 18), // "positionViewClosed"
QT_MOC_LITERAL(20, 261, 22), // "slotNoClustersToBrowse"
QT_MOC_LITERAL(21, 284, 20), // "slotClustersToBrowse"
QT_MOC_LITERAL(22, 305, 20), // "slotNoEventsToBrowse"
QT_MOC_LITERAL(23, 326, 18), // "slotEventsToBrowse"
QT_MOC_LITERAL(24, 345, 16), // "slotStateChanged"
QT_MOC_LITERAL(25, 362, 5), // "state"
QT_MOC_LITERAL(26, 368, 9), // "slotAbout"
QT_MOC_LITERAL(27, 378, 12), // "slotFileOpen"
QT_MOC_LITERAL(28, 391, 20), // "slotLoadClusterFiles"
QT_MOC_LITERAL(29, 412, 20), // "slotCloseClusterFile"
QT_MOC_LITERAL(30, 433, 18), // "slotLoadEventFiles"
QT_MOC_LITERAL(31, 452, 19), // "slotCreateEventFile"
QT_MOC_LITERAL(32, 472, 18), // "slotCloseEventFile"
QT_MOC_LITERAL(33, 491, 20), // "slotLoadPositionFile"
QT_MOC_LITERAL(34, 512, 21), // "slotClosePositionFile"
QT_MOC_LITERAL(35, 534, 18), // "slotFileOpenRecent"
QT_MOC_LITERAL(36, 553, 3), // "url"
QT_MOC_LITERAL(37, 557, 18), // "slotFileProperties"
QT_MOC_LITERAL(38, 576, 13), // "slotFileClose"
QT_MOC_LITERAL(39, 590, 13), // "slotFilePrint"
QT_MOC_LITERAL(40, 604, 12), // "slotFileQuit"
QT_MOC_LITERAL(41, 617, 19), // "slotViewMainToolBar"
QT_MOC_LITERAL(42, 637, 15), // "slotViewToolBar"
QT_MOC_LITERAL(43, 653, 17), // "slotViewStatusBar"
QT_MOC_LITERAL(44, 671, 19), // "slotShowCalibration"
QT_MOC_LITERAL(45, 691, 13), // "slotStatusMsg"
QT_MOC_LITERAL(46, 705, 4), // "text"
QT_MOC_LITERAL(47, 710, 10), // "slotSelect"
QT_MOC_LITERAL(48, 721, 8), // "slotZoom"
QT_MOC_LITERAL(49, 730, 11), // "slotMeasure"
QT_MOC_LITERAL(50, 742, 14), // "slotSelectTime"
QT_MOC_LITERAL(51, 757, 15), // "slotSelectEvent"
QT_MOC_LITERAL(52, 773, 21), // "executePreferencesDlg"
QT_MOC_LITERAL(53, 795, 16), // "applyPreferences"
QT_MOC_LITERAL(54, 812, 21), // "initializePreferences"
QT_MOC_LITERAL(55, 834, 28), // "slotSingleChannelColorUpdate"
QT_MOC_LITERAL(56, 863, 9), // "channelId"
QT_MOC_LITERAL(57, 873, 27), // "slotChannelGroupColorUpdate"
QT_MOC_LITERAL(58, 901, 7), // "groupId"
QT_MOC_LITERAL(59, 909, 21), // "slotApplyDisplayColor"
QT_MOC_LITERAL(60, 931, 19), // "slotApplySpikeColor"
QT_MOC_LITERAL(61, 951, 23), // "slotUpdateShownChannels"
QT_MOC_LITERAL(62, 975, 10), // "QList<int>"
QT_MOC_LITERAL(63, 986, 16), // "selectedChannels"
QT_MOC_LITERAL(64, 1003, 24), // "slotUpdateHiddenChannels"
QT_MOC_LITERAL(65, 1028, 14), // "hiddenChannels"
QT_MOC_LITERAL(66, 1043, 16), // "slotDefaultSetUp"
QT_MOC_LITERAL(67, 1060, 14), // "QMap<int,int>&"
QT_MOC_LITERAL(68, 1075, 21), // "channelDefaultOffsets"
QT_MOC_LITERAL(69, 1097, 15), // "QMap<int,bool>&"
QT_MOC_LITERAL(70, 1113, 10), // "skipStatus"
QT_MOC_LITERAL(71, 1124, 9), // "slotSetUp"
QT_MOC_LITERAL(72, 1134, 11), // "QList<int>*"
QT_MOC_LITERAL(73, 1146, 17), // "channelsToDisplay"
QT_MOC_LITERAL(74, 1164, 13), // "verticalLines"
QT_MOC_LITERAL(75, 1178, 6), // "raster"
QT_MOC_LITERAL(76, 1185, 9), // "waveforms"
QT_MOC_LITERAL(77, 1195, 10), // "showLabels"
QT_MOC_LITERAL(78, 1206, 15), // "multipleColumns"
QT_MOC_LITERAL(79, 1222, 8), // "greyMode"
QT_MOC_LITERAL(80, 1231, 18), // "autocenterChannels"
QT_MOC_LITERAL(81, 1250, 7), // "offsets"
QT_MOC_LITERAL(82, 1258, 12), // "channelGains"
QT_MOC_LITERAL(83, 1271, 9), // "startTime"
QT_MOC_LITERAL(84, 1281, 8), // "duration"
QT_MOC_LITERAL(85, 1290, 8), // "tabLabel"
QT_MOC_LITERAL(86, 1299, 12), // "positionView"
QT_MOC_LITERAL(87, 1312, 12), // "rasterHeight"
QT_MOC_LITERAL(88, 1325, 24), // "showEventsInPositionView"
QT_MOC_LITERAL(89, 1350, 16), // "slotSetGreyScale"
QT_MOC_LITERAL(90, 1367, 15), // "slotCreateGroup"
QT_MOC_LITERAL(91, 1383, 13), // "slotSelectAll"
QT_MOC_LITERAL(92, 1397, 15), // "slotDeselectAll"
QT_MOC_LITERAL(93, 1413, 17), // "slotSelectAllWO01"
QT_MOC_LITERAL(94, 1431, 15), // "slotDisplayMode"
QT_MOC_LITERAL(95, 1447, 25), // "slotClustersVerticalLines"
QT_MOC_LITERAL(96, 1473, 18), // "slotClustersRaster"
QT_MOC_LITERAL(97, 1492, 21), // "slotClustersWaveforms"
QT_MOC_LITERAL(98, 1514, 19), // "slotDiscardChannels"
QT_MOC_LITERAL(99, 1534, 24), // "slotDiscardSpikeChannels"
QT_MOC_LITERAL(100, 1559, 21), // "slotChannelsDiscarded"
QT_MOC_LITERAL(101, 1581, 9), // "discarded"
QT_MOC_LITERAL(102, 1591, 16), // "slotShowChannels"
QT_MOC_LITERAL(103, 1608, 16), // "slotHideChannels"
QT_MOC_LITERAL(104, 1625, 13), // "slotTabChange"
QT_MOC_LITERAL(105, 1639, 5), // "index"
QT_MOC_LITERAL(106, 1645, 20), // "slotPaletteTabChange"
QT_MOC_LITERAL(107, 1666, 16), // "slotDisplayClose"
QT_MOC_LITERAL(108, 1683, 23), // "slotRenameActiveDisplay"
QT_MOC_LITERAL(109, 1707, 14), // "slotNewDisplay"
QT_MOC_LITERAL(110, 1722, 12), // "slotEditMode"
QT_MOC_LITERAL(111, 1735, 15), // "slotSynchronize"
QT_MOC_LITERAL(112, 1751, 18), // "slotGroupsModified"
QT_MOC_LITERAL(113, 1770, 27), // "slotSelectChannelsInPalette"
QT_MOC_LITERAL(114, 1798, 11), // "selectedIds"
QT_MOC_LITERAL(115, 1810, 32), // "slotIncreaseAllChannelsAmplitude"
QT_MOC_LITERAL(116, 1843, 32), // "slotDecreaseAllChannelsAmplitude"
QT_MOC_LITERAL(117, 1876, 37), // "slotIncreaseSelectedChannelsA..."
QT_MOC_LITERAL(118, 1914, 37), // "slotDecreaseSelectedChannelsA..."
QT_MOC_LITERAL(119, 1952, 20), // "slotChannelsSelected"
QT_MOC_LITERAL(120, 1973, 16), // "slotResetOffsets"
QT_MOC_LITERAL(121, 1990, 14), // "slotResetGains"
QT_MOC_LITERAL(122, 2005, 11), // "saveSession"
QT_MOC_LITERAL(123, 2017, 17), // "slotSessionSaveAs"
QT_MOC_LITERAL(124, 2035, 22), // "slotAutocenterChannels"
QT_MOC_LITERAL(125, 2058, 14), // "slotShowLabels"
QT_MOC_LITERAL(126, 2073, 22), // "slotClusterColorUpdate"
QT_MOC_LITERAL(127, 2096, 9), // "clusterId"
QT_MOC_LITERAL(128, 2106, 9), // "groupName"
QT_MOC_LITERAL(129, 2116, 5), // "color"
QT_MOC_LITERAL(130, 2122, 23), // "slotUpdateShownClusters"
QT_MOC_LITERAL(131, 2146, 25), // "QMap<QString,QList<int> >"
QT_MOC_LITERAL(132, 2172, 9), // "selection"
QT_MOC_LITERAL(133, 2182, 19), // "slotShowNextCluster"
QT_MOC_LITERAL(134, 2202, 23), // "slotShowPreviousCluster"
QT_MOC_LITERAL(135, 2226, 20), // "slotEventColorUpdate"
QT_MOC_LITERAL(136, 2247, 7), // "eventId"
QT_MOC_LITERAL(137, 2255, 21), // "slotUpdateShownEvents"
QT_MOC_LITERAL(138, 2277, 17), // "slotShowNextEvent"
QT_MOC_LITERAL(139, 2295, 21), // "slotShowPreviousEvent"
QT_MOC_LITERAL(140, 2317, 8), // "slotUndo"
QT_MOC_LITERAL(141, 2326, 8), // "slotRedo"
QT_MOC_LITERAL(142, 2335, 23), // "slotAddEventAboutToShow"
QT_MOC_LITERAL(143, 2359, 27), // "slotAddEventButtonActivated"
QT_MOC_LITERAL(144, 2387, 8), // "QAction*"
QT_MOC_LITERAL(145, 2396, 3), // "act"
QT_MOC_LITERAL(146, 2400, 20), // "slotShowPositionView"
QT_MOC_LITERAL(147, 2421, 22), // "slotUpdateEventsToSkip"
QT_MOC_LITERAL(148, 2444, 12), // "eventsToSkip"
QT_MOC_LITERAL(149, 2457, 24), // "slotUpdateClustersToSkip"
QT_MOC_LITERAL(150, 2482, 14), // "clustersToSkip"
QT_MOC_LITERAL(151, 2497, 16), // "slotKeepChannels"
QT_MOC_LITERAL(152, 2514, 16), // "slotSkipChannels"
QT_MOC_LITERAL(153, 2531, 21), // "slotSetDefaultOffsets"
QT_MOC_LITERAL(154, 2553, 23), // "slotResetDefaultOffsets"
QT_MOC_LITERAL(155, 2577, 16), // "slotDrawTimeLine"
QT_MOC_LITERAL(156, 2594, 24), // "slotIncreaseRasterHeight"
QT_MOC_LITERAL(157, 2619, 24), // "slotDecreaseRasterHeight"
QT_MOC_LITERAL(158, 2644, 28), // "slotShowEventsInPositionView"
QT_MOC_LITERAL(159, 2673, 11), // "slotHanbook"
QT_MOC_LITERAL(160, 2685, 19) // "slotSaveRecentFiles"

    },
    "NeuroscopeApp\0neuroscopeViewStopped\0"
    "\0page\0stop\0accelerate\0decelerate\0"
    "slotEventModified\0providerName\0"
    "selectedEventId\0time\0newTime\0removeEvent\0"
    "slotEventRemoved\0addEvent\0"
    "slotEventGroupSelected\0eventGroupName\0"
    "slotEventAdded\0addedEventDescription\0"
    "positionViewClosed\0slotNoClustersToBrowse\0"
    "slotClustersToBrowse\0slotNoEventsToBrowse\0"
    "slotEventsToBrowse\0slotStateChanged\0"
    "state\0slotAbout\0slotFileOpen\0"
    "slotLoadClusterFiles\0slotCloseClusterFile\0"
    "slotLoadEventFiles\0slotCreateEventFile\0"
    "slotCloseEventFile\0slotLoadPositionFile\0"
    "slotClosePositionFile\0slotFileOpenRecent\0"
    "url\0slotFileProperties\0slotFileClose\0"
    "slotFilePrint\0slotFileQuit\0"
    "slotViewMainToolBar\0slotViewToolBar\0"
    "slotViewStatusBar\0slotShowCalibration\0"
    "slotStatusMsg\0text\0slotSelect\0slotZoom\0"
    "slotMeasure\0slotSelectTime\0slotSelectEvent\0"
    "executePreferencesDlg\0applyPreferences\0"
    "initializePreferences\0"
    "slotSingleChannelColorUpdate\0channelId\0"
    "slotChannelGroupColorUpdate\0groupId\0"
    "slotApplyDisplayColor\0slotApplySpikeColor\0"
    "slotUpdateShownChannels\0QList<int>\0"
    "selectedChannels\0slotUpdateHiddenChannels\0"
    "hiddenChannels\0slotDefaultSetUp\0"
    "QMap<int,int>&\0channelDefaultOffsets\0"
    "QMap<int,bool>&\0skipStatus\0slotSetUp\0"
    "QList<int>*\0channelsToDisplay\0"
    "verticalLines\0raster\0waveforms\0"
    "showLabels\0multipleColumns\0greyMode\0"
    "autocenterChannels\0offsets\0channelGains\0"
    "startTime\0duration\0tabLabel\0positionView\0"
    "rasterHeight\0showEventsInPositionView\0"
    "slotSetGreyScale\0slotCreateGroup\0"
    "slotSelectAll\0slotDeselectAll\0"
    "slotSelectAllWO01\0slotDisplayMode\0"
    "slotClustersVerticalLines\0slotClustersRaster\0"
    "slotClustersWaveforms\0slotDiscardChannels\0"
    "slotDiscardSpikeChannels\0slotChannelsDiscarded\0"
    "discarded\0slotShowChannels\0slotHideChannels\0"
    "slotTabChange\0index\0slotPaletteTabChange\0"
    "slotDisplayClose\0slotRenameActiveDisplay\0"
    "slotNewDisplay\0slotEditMode\0slotSynchronize\0"
    "slotGroupsModified\0slotSelectChannelsInPalette\0"
    "selectedIds\0slotIncreaseAllChannelsAmplitude\0"
    "slotDecreaseAllChannelsAmplitude\0"
    "slotIncreaseSelectedChannelsAmplitude\0"
    "slotDecreaseSelectedChannelsAmplitude\0"
    "slotChannelsSelected\0slotResetOffsets\0"
    "slotResetGains\0saveSession\0slotSessionSaveAs\0"
    "slotAutocenterChannels\0slotShowLabels\0"
    "slotClusterColorUpdate\0clusterId\0"
    "groupName\0color\0slotUpdateShownClusters\0"
    "QMap<QString,QList<int> >\0selection\0"
    "slotShowNextCluster\0slotShowPreviousCluster\0"
    "slotEventColorUpdate\0eventId\0"
    "slotUpdateShownEvents\0slotShowNextEvent\0"
    "slotShowPreviousEvent\0slotUndo\0slotRedo\0"
    "slotAddEventAboutToShow\0"
    "slotAddEventButtonActivated\0QAction*\0"
    "act\0slotShowPositionView\0"
    "slotUpdateEventsToSkip\0eventsToSkip\0"
    "slotUpdateClustersToSkip\0clustersToSkip\0"
    "slotKeepChannels\0slotSkipChannels\0"
    "slotSetDefaultOffsets\0slotResetDefaultOffsets\0"
    "slotDrawTimeLine\0slotIncreaseRasterHeight\0"
    "slotDecreaseRasterHeight\0"
    "slotShowEventsInPositionView\0slotHanbook\0"
    "slotSaveRecentFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NeuroscopeApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     111,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  569,    2, 0x08 /* Private */,
       3,    0,  570,    2, 0x0a /* Public */,
       4,    0,  571,    2, 0x0a /* Public */,
       5,    0,  572,    2, 0x0a /* Public */,
       6,    0,  573,    2, 0x0a /* Public */,
       7,    4,  574,    2, 0x0a /* Public */,
      12,    0,  583,    2, 0x0a /* Public */,
      13,    3,  584,    2, 0x0a /* Public */,
      14,    0,  591,    2, 0x0a /* Public */,
      15,    1,  592,    2, 0x0a /* Public */,
      17,    3,  595,    2, 0x0a /* Public */,
      19,    0,  602,    2, 0x0a /* Public */,
      20,    0,  603,    2, 0x0a /* Public */,
      21,    0,  604,    2, 0x0a /* Public */,
      22,    0,  605,    2, 0x0a /* Public */,
      23,    0,  606,    2, 0x0a /* Public */,
      24,    1,  607,    2, 0x0a /* Public */,
      26,    0,  610,    2, 0x08 /* Private */,
      27,    0,  611,    2, 0x08 /* Private */,
      28,    0,  612,    2, 0x08 /* Private */,
      29,    0,  613,    2, 0x08 /* Private */,
      30,    0,  614,    2, 0x08 /* Private */,
      31,    0,  615,    2, 0x08 /* Private */,
      32,    0,  616,    2, 0x08 /* Private */,
      33,    0,  617,    2, 0x08 /* Private */,
      34,    0,  618,    2, 0x08 /* Private */,
      35,    1,  619,    2, 0x08 /* Private */,
      37,    0,  622,    2, 0x08 /* Private */,
      38,    0,  623,    2, 0x08 /* Private */,
      39,    0,  624,    2, 0x08 /* Private */,
      40,    0,  625,    2, 0x08 /* Private */,
      41,    0,  626,    2, 0x08 /* Private */,
      42,    0,  627,    2, 0x08 /* Private */,
      43,    0,  628,    2, 0x08 /* Private */,
      44,    0,  629,    2, 0x08 /* Private */,
      45,    1,  630,    2, 0x08 /* Private */,
      47,    0,  633,    2, 0x08 /* Private */,
      48,    0,  634,    2, 0x08 /* Private */,
      49,    0,  635,    2, 0x08 /* Private */,
      50,    0,  636,    2, 0x08 /* Private */,
      51,    0,  637,    2, 0x08 /* Private */,
      52,    0,  638,    2, 0x08 /* Private */,
      53,    0,  639,    2, 0x08 /* Private */,
      54,    0,  640,    2, 0x08 /* Private */,
      55,    1,  641,    2, 0x08 /* Private */,
      57,    1,  644,    2, 0x08 /* Private */,
      59,    0,  647,    2, 0x08 /* Private */,
      60,    0,  648,    2, 0x08 /* Private */,
      61,    1,  649,    2, 0x08 /* Private */,
      64,    1,  652,    2, 0x08 /* Private */,
      66,    2,  655,    2, 0x08 /* Private */,
      71,   18,  660,    2, 0x08 /* Private */,
      89,    0,  697,    2, 0x08 /* Private */,
      90,    0,  698,    2, 0x08 /* Private */,
      91,    0,  699,    2, 0x08 /* Private */,
      92,    0,  700,    2, 0x08 /* Private */,
      93,    0,  701,    2, 0x08 /* Private */,
      94,    0,  702,    2, 0x08 /* Private */,
      95,    0,  703,    2, 0x08 /* Private */,
      96,    0,  704,    2, 0x08 /* Private */,
      97,    0,  705,    2, 0x08 /* Private */,
      98,    0,  706,    2, 0x08 /* Private */,
      99,    0,  707,    2, 0x08 /* Private */,
     100,    1,  708,    2, 0x08 /* Private */,
     102,    0,  711,    2, 0x08 /* Private */,
     103,    0,  712,    2, 0x08 /* Private */,
     104,    1,  713,    2, 0x08 /* Private */,
     106,    1,  716,    2, 0x08 /* Private */,
     107,    0,  719,    2, 0x08 /* Private */,
     108,    0,  720,    2, 0x08 /* Private */,
     109,    0,  721,    2, 0x08 /* Private */,
     110,    0,  722,    2, 0x08 /* Private */,
     111,    0,  723,    2, 0x08 /* Private */,
     112,    0,  724,    2, 0x08 /* Private */,
     113,    1,  725,    2, 0x08 /* Private */,
     115,    0,  728,    2, 0x08 /* Private */,
     116,    0,  729,    2, 0x08 /* Private */,
     117,    0,  730,    2, 0x08 /* Private */,
     118,    0,  731,    2, 0x08 /* Private */,
     119,    1,  732,    2, 0x08 /* Private */,
     120,    0,  735,    2, 0x08 /* Private */,
     121,    0,  736,    2, 0x08 /* Private */,
     122,    0,  737,    2, 0x08 /* Private */,
     123,    0,  738,    2, 0x08 /* Private */,
     124,    0,  739,    2, 0x08 /* Private */,
     125,    0,  740,    2, 0x08 /* Private */,
     126,    3,  741,    2, 0x08 /* Private */,
     130,    1,  748,    2, 0x08 /* Private */,
     133,    0,  751,    2, 0x08 /* Private */,
     134,    0,  752,    2, 0x08 /* Private */,
     135,    3,  753,    2, 0x08 /* Private */,
     137,    1,  760,    2, 0x08 /* Private */,
     138,    0,  763,    2, 0x08 /* Private */,
     139,    0,  764,    2, 0x08 /* Private */,
     140,    0,  765,    2, 0x08 /* Private */,
     141,    0,  766,    2, 0x08 /* Private */,
     142,    0,  767,    2, 0x08 /* Private */,
     143,    1,  768,    2, 0x08 /* Private */,
     146,    0,  771,    2, 0x08 /* Private */,
     147,    2,  772,    2, 0x08 /* Private */,
     149,    2,  777,    2, 0x08 /* Private */,
     151,    0,  782,    2, 0x08 /* Private */,
     152,    0,  783,    2, 0x08 /* Private */,
     153,    0,  784,    2, 0x08 /* Private */,
     154,    0,  785,    2, 0x08 /* Private */,
     155,    0,  786,    2, 0x08 /* Private */,
     156,    0,  787,    2, 0x08 /* Private */,
     157,    0,  788,    2, 0x08 /* Private */,
     158,    0,  789,    2, 0x08 /* Private */,
     159,    0,  790,    2, 0x08 /* Private */,
     160,    0,  791,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,    8,   18,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,   63,
    QMetaType::Void, 0x80000000 | 62,   65,
    QMetaType::Void, 0x80000000 | 67, 0x80000000 | 69,   68,   70,
    QMetaType::Void, 0x80000000 | 72, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 62, 0x80000000 | 62, 0x80000000 | 62, 0x80000000 | 69, QMetaType::Long, QMetaType::Long, QMetaType::QString, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   73,   74,   75,   76,   77,   78,   79,   80,   81,   82,   63,   70,   83,   84,   85,   86,   87,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,  101,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  105,
    QMetaType::Void, QMetaType::Int,  105,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,  114,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,  114,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QColor,  127,  128,  129,
    QMetaType::Void, 0x80000000 | 131,  132,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QColor,  136,  128,  129,
    QMetaType::Void, 0x80000000 | 131,  132,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 144,  145,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 62,  128,  148,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 62,  128,  150,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NeuroscopeApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NeuroscopeApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->neuroscopeViewStopped(); break;
        case 1: _t->page(); break;
        case 2: _t->stop(); break;
        case 3: _t->accelerate(); break;
        case 4: _t->decelerate(); break;
        case 5: _t->slotEventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->removeEvent(); break;
        case 7: _t->slotEventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->addEvent(); break;
        case 9: _t->slotEventGroupSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotEventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 11: _t->positionViewClosed(); break;
        case 12: _t->slotNoClustersToBrowse(); break;
        case 13: _t->slotClustersToBrowse(); break;
        case 14: _t->slotNoEventsToBrowse(); break;
        case 15: _t->slotEventsToBrowse(); break;
        case 16: _t->slotStateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->slotAbout(); break;
        case 18: _t->slotFileOpen(); break;
        case 19: _t->slotLoadClusterFiles(); break;
        case 20: _t->slotCloseClusterFile(); break;
        case 21: _t->slotLoadEventFiles(); break;
        case 22: _t->slotCreateEventFile(); break;
        case 23: _t->slotCloseEventFile(); break;
        case 24: _t->slotLoadPositionFile(); break;
        case 25: _t->slotClosePositionFile(); break;
        case 26: _t->slotFileOpenRecent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->slotFileProperties(); break;
        case 28: _t->slotFileClose(); break;
        case 29: _t->slotFilePrint(); break;
        case 30: _t->slotFileQuit(); break;
        case 31: _t->slotViewMainToolBar(); break;
        case 32: _t->slotViewToolBar(); break;
        case 33: _t->slotViewStatusBar(); break;
        case 34: _t->slotShowCalibration(); break;
        case 35: _t->slotStatusMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->slotSelect(); break;
        case 37: _t->slotZoom(); break;
        case 38: _t->slotMeasure(); break;
        case 39: _t->slotSelectTime(); break;
        case 40: _t->slotSelectEvent(); break;
        case 41: _t->executePreferencesDlg(); break;
        case 42: _t->applyPreferences(); break;
        case 43: _t->initializePreferences(); break;
        case 44: _t->slotSingleChannelColorUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->slotChannelGroupColorUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->slotApplyDisplayColor(); break;
        case 47: _t->slotApplySpikeColor(); break;
        case 48: _t->slotUpdateShownChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 49: _t->slotUpdateHiddenChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 50: _t->slotDefaultSetUp((*reinterpret_cast< QMap<int,int>(*)>(_a[1])),(*reinterpret_cast< QMap<int,bool>(*)>(_a[2]))); break;
        case 51: _t->slotSetUp((*reinterpret_cast< QList<int>*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< QList<int>(*)>(_a[9])),(*reinterpret_cast< QList<int>(*)>(_a[10])),(*reinterpret_cast< QList<int>(*)>(_a[11])),(*reinterpret_cast< QMap<int,bool>(*)>(_a[12])),(*reinterpret_cast< long(*)>(_a[13])),(*reinterpret_cast< long(*)>(_a[14])),(*reinterpret_cast< const QString(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< int(*)>(_a[17])),(*reinterpret_cast< bool(*)>(_a[18]))); break;
        case 52: _t->slotSetGreyScale(); break;
        case 53: _t->slotCreateGroup(); break;
        case 54: _t->slotSelectAll(); break;
        case 55: _t->slotDeselectAll(); break;
        case 56: _t->slotSelectAllWO01(); break;
        case 57: _t->slotDisplayMode(); break;
        case 58: _t->slotClustersVerticalLines(); break;
        case 59: _t->slotClustersRaster(); break;
        case 60: _t->slotClustersWaveforms(); break;
        case 61: _t->slotDiscardChannels(); break;
        case 62: _t->slotDiscardSpikeChannels(); break;
        case 63: _t->slotChannelsDiscarded((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 64: _t->slotShowChannels(); break;
        case 65: _t->slotHideChannels(); break;
        case 66: _t->slotTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->slotPaletteTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->slotDisplayClose(); break;
        case 69: _t->slotRenameActiveDisplay(); break;
        case 70: _t->slotNewDisplay(); break;
        case 71: _t->slotEditMode(); break;
        case 72: _t->slotSynchronize(); break;
        case 73: _t->slotGroupsModified(); break;
        case 74: _t->slotSelectChannelsInPalette((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 75: _t->slotIncreaseAllChannelsAmplitude(); break;
        case 76: _t->slotDecreaseAllChannelsAmplitude(); break;
        case 77: _t->slotIncreaseSelectedChannelsAmplitude(); break;
        case 78: _t->slotDecreaseSelectedChannelsAmplitude(); break;
        case 79: _t->slotChannelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 80: _t->slotResetOffsets(); break;
        case 81: _t->slotResetGains(); break;
        case 82: _t->saveSession(); break;
        case 83: _t->slotSessionSaveAs(); break;
        case 84: _t->slotAutocenterChannels(); break;
        case 85: _t->slotShowLabels(); break;
        case 86: _t->slotClusterColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 87: _t->slotUpdateShownClusters((*reinterpret_cast< const QMap<QString,QList<int> >(*)>(_a[1]))); break;
        case 88: _t->slotShowNextCluster(); break;
        case 89: _t->slotShowPreviousCluster(); break;
        case 90: _t->slotEventColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 91: _t->slotUpdateShownEvents((*reinterpret_cast< const QMap<QString,QList<int> >(*)>(_a[1]))); break;
        case 92: _t->slotShowNextEvent(); break;
        case 93: _t->slotShowPreviousEvent(); break;
        case 94: _t->slotUndo(); break;
        case 95: _t->slotRedo(); break;
        case 96: _t->slotAddEventAboutToShow(); break;
        case 97: _t->slotAddEventButtonActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 98: _t->slotShowPositionView(); break;
        case 99: _t->slotUpdateEventsToSkip((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 100: _t->slotUpdateClustersToSkip((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 101: _t->slotKeepChannels(); break;
        case 102: _t->slotSkipChannels(); break;
        case 103: _t->slotSetDefaultOffsets(); break;
        case 104: _t->slotResetDefaultOffsets(); break;
        case 105: _t->slotDrawTimeLine(); break;
        case 106: _t->slotIncreaseRasterHeight(); break;
        case 107: _t->slotDecreaseRasterHeight(); break;
        case 108: _t->slotShowEventsInPositionView(); break;
        case 109: _t->slotHanbook(); break;
        case 110: _t->slotSaveRecentFiles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 10:
            case 9:
            case 8:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int>* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NeuroscopeApp::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_NeuroscopeApp.data,
    qt_meta_data_NeuroscopeApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NeuroscopeApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NeuroscopeApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NeuroscopeApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NeuroscopeApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 111)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 111;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 111)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 111;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
