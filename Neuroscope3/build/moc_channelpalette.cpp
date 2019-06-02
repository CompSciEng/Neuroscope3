/****************************************************************************
** Meta object code from reading C++ file 'channelpalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/channelpalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channelpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChannelPalette_t {
    QByteArrayData data[85];
    char stringdata0[1217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChannelPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChannelPalette_t qt_meta_stringdata_ChannelPalette = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChannelPalette"
QT_MOC_LITERAL(1, 15, 17), // "singleChangeColor"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "selectedChannel"
QT_MOC_LITERAL(4, 50, 16), // "groupChangeColor"
QT_MOC_LITERAL(5, 67, 7), // "groupId"
QT_MOC_LITERAL(6, 75, 19), // "updateShownChannels"
QT_MOC_LITERAL(7, 95, 10), // "QList<int>"
QT_MOC_LITERAL(8, 106, 13), // "shownChannels"
QT_MOC_LITERAL(9, 120, 18), // "updateHideChannels"
QT_MOC_LITERAL(10, 139, 14), // "hiddenChannels"
QT_MOC_LITERAL(11, 154, 14), // "paletteResized"
QT_MOC_LITERAL(12, 169, 11), // "parentWidth"
QT_MOC_LITERAL(13, 181, 9), // "labelSize"
QT_MOC_LITERAL(14, 191, 17), // "channelsDiscarded"
QT_MOC_LITERAL(15, 209, 9), // "discarded"
QT_MOC_LITERAL(16, 219, 14), // "setDragAndDrop"
QT_MOC_LITERAL(17, 234, 11), // "dragAndDrop"
QT_MOC_LITERAL(18, 246, 13), // "groupModified"
QT_MOC_LITERAL(19, 260, 20), // "channelsMovedToTrash"
QT_MOC_LITERAL(20, 281, 10), // "channelIds"
QT_MOC_LITERAL(21, 292, 7), // "afterId"
QT_MOC_LITERAL(22, 300, 11), // "beforeFirst"
QT_MOC_LITERAL(23, 312, 26), // "channelsMovedAroundInTrash"
QT_MOC_LITERAL(24, 339, 17), // "channelsToDiscard"
QT_MOC_LITERAL(25, 357, 24), // "channelsRemovedFromTrash"
QT_MOC_LITERAL(26, 382, 16), // "channelsSelected"
QT_MOC_LITERAL(27, 399, 16), // "selectedChannels"
QT_MOC_LITERAL(28, 416, 14), // "slotRowInsered"
QT_MOC_LITERAL(29, 431, 11), // "changeColor"
QT_MOC_LITERAL(30, 443, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(31, 460, 4), // "item"
QT_MOC_LITERAL(32, 465, 6), // "single"
QT_MOC_LITERAL(33, 472, 11), // "createGroup"
QT_MOC_LITERAL(34, 484, 12), // "setGreyScale"
QT_MOC_LITERAL(35, 497, 4), // "grey"
QT_MOC_LITERAL(36, 502, 17), // "deleteEmptyGroups"
QT_MOC_LITERAL(37, 520, 17), // "selectAllChannels"
QT_MOC_LITERAL(38, 538, 19), // "deselectAllChannels"
QT_MOC_LITERAL(39, 558, 17), // "slotChannelsMoved"
QT_MOC_LITERAL(40, 576, 11), // "targetGroup"
QT_MOC_LITERAL(41, 588, 5), // "after"
QT_MOC_LITERAL(42, 594, 11), // "sourceGroup"
QT_MOC_LITERAL(43, 606, 24), // "trashChannelsMovedAround"
QT_MOC_LITERAL(44, 631, 15), // "discardChannels"
QT_MOC_LITERAL(45, 647, 20), // "discardSpikeChannels"
QT_MOC_LITERAL(46, 668, 12), // "showChannels"
QT_MOC_LITERAL(47, 681, 12), // "hideChannels"
QT_MOC_LITERAL(48, 694, 23), // "hideUnselectAllChannels"
QT_MOC_LITERAL(49, 718, 20), // "updateShowHideStatus"
QT_MOC_LITERAL(50, 739, 10), // "showStatus"
QT_MOC_LITERAL(51, 750, 16), // "updateSkipStatus"
QT_MOC_LITERAL(52, 767, 14), // "QMap<int,bool>"
QT_MOC_LITERAL(53, 782, 10), // "skipStatus"
QT_MOC_LITERAL(54, 793, 11), // "updateColor"
QT_MOC_LITERAL(55, 805, 9), // "channelId"
QT_MOC_LITERAL(56, 815, 16), // "updateGroupColor"
QT_MOC_LITERAL(57, 832, 15), // "applyGroupColor"
QT_MOC_LITERAL(58, 848, 11), // "PaletteType"
QT_MOC_LITERAL(59, 860, 11), // "paletteType"
QT_MOC_LITERAL(60, 872, 16), // "applyCustomColor"
QT_MOC_LITERAL(61, 889, 11), // "setEditMode"
QT_MOC_LITERAL(62, 901, 7), // "edition"
QT_MOC_LITERAL(63, 909, 11), // "groupToMove"
QT_MOC_LITERAL(64, 921, 8), // "sourceId"
QT_MOC_LITERAL(65, 930, 8), // "targetId"
QT_MOC_LITERAL(66, 939, 5), // "start"
QT_MOC_LITERAL(67, 945, 11), // "destination"
QT_MOC_LITERAL(68, 957, 23), // "removeChannelsFromTrash"
QT_MOC_LITERAL(69, 981, 13), // "selectionTool"
QT_MOC_LITERAL(70, 995, 26), // "slotMousePressMiddleButton"
QT_MOC_LITERAL(71, 1022, 16), // "slotMousePressed"
QT_MOC_LITERAL(72, 1039, 15), // "sourceGroupName"
QT_MOC_LITERAL(73, 1055, 20), // "slotMidButtonPressed"
QT_MOC_LITERAL(74, 1076, 13), // "sourceGroupId"
QT_MOC_LITERAL(75, 1090, 15), // "slotClickRedraw"
QT_MOC_LITERAL(76, 1106, 14), // "languageChange"
QT_MOC_LITERAL(77, 1121, 2), // "id"
QT_MOC_LITERAL(78, 1124, 15), // "setChannelLists"
QT_MOC_LITERAL(79, 1140, 19), // "slotDragLabeltMoved"
QT_MOC_LITERAL(80, 1160, 8), // "position"
QT_MOC_LITERAL(81, 1169, 16), // "slotMoveListItem"
QT_MOC_LITERAL(82, 1186, 16), // "destinationGroup"
QT_MOC_LITERAL(83, 1203, 5), // "index"
QT_MOC_LITERAL(84, 1209, 7) // "moveAll"

    },
    "ChannelPalette\0singleChangeColor\0\0"
    "selectedChannel\0groupChangeColor\0"
    "groupId\0updateShownChannels\0QList<int>\0"
    "shownChannels\0updateHideChannels\0"
    "hiddenChannels\0paletteResized\0parentWidth\0"
    "labelSize\0channelsDiscarded\0discarded\0"
    "setDragAndDrop\0dragAndDrop\0groupModified\0"
    "channelsMovedToTrash\0channelIds\0afterId\0"
    "beforeFirst\0channelsMovedAroundInTrash\0"
    "channelsToDiscard\0channelsRemovedFromTrash\0"
    "channelsSelected\0selectedChannels\0"
    "slotRowInsered\0changeColor\0QListWidgetItem*\0"
    "item\0single\0createGroup\0setGreyScale\0"
    "grey\0deleteEmptyGroups\0selectAllChannels\0"
    "deselectAllChannels\0slotChannelsMoved\0"
    "targetGroup\0after\0sourceGroup\0"
    "trashChannelsMovedAround\0discardChannels\0"
    "discardSpikeChannels\0showChannels\0"
    "hideChannels\0hideUnselectAllChannels\0"
    "updateShowHideStatus\0showStatus\0"
    "updateSkipStatus\0QMap<int,bool>\0"
    "skipStatus\0updateColor\0channelId\0"
    "updateGroupColor\0applyGroupColor\0"
    "PaletteType\0paletteType\0applyCustomColor\0"
    "setEditMode\0edition\0groupToMove\0"
    "sourceId\0targetId\0start\0destination\0"
    "removeChannelsFromTrash\0selectionTool\0"
    "slotMousePressMiddleButton\0slotMousePressed\0"
    "sourceGroupName\0slotMidButtonPressed\0"
    "sourceGroupId\0slotClickRedraw\0"
    "languageChange\0id\0setChannelLists\0"
    "slotDragLabeltMoved\0position\0"
    "slotMoveListItem\0destinationGroup\0"
    "index\0moveAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  269,    2, 0x06 /* Public */,
       4,    1,  272,    2, 0x06 /* Public */,
       6,    1,  275,    2, 0x06 /* Public */,
       9,    1,  278,    2, 0x06 /* Public */,
      11,    2,  281,    2, 0x06 /* Public */,
      14,    1,  286,    2, 0x06 /* Public */,
      16,    1,  289,    2, 0x06 /* Public */,
      18,    0,  292,    2, 0x06 /* Public */,
      19,    3,  293,    2, 0x06 /* Public */,
      23,    3,  300,    2, 0x06 /* Public */,
      25,    1,  307,    2, 0x06 /* Public */,
      26,    1,  310,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  313,    2, 0x0a /* Public */,
      29,    2,  314,    2, 0x0a /* Public */,
      29,    1,  319,    2, 0x2a /* Public | MethodCloned */,
      33,    0,  322,    2, 0x0a /* Public */,
      34,    1,  323,    2, 0x0a /* Public */,
      36,    0,  326,    2, 0x0a /* Public */,
      37,    0,  327,    2, 0x0a /* Public */,
      38,    0,  328,    2, 0x0a /* Public */,
      39,    2,  329,    2, 0x0a /* Public */,
      39,    3,  334,    2, 0x0a /* Public */,
      43,    3,  341,    2, 0x0a /* Public */,
      44,    0,  348,    2, 0x0a /* Public */,
      44,    1,  349,    2, 0x0a /* Public */,
      44,    3,  352,    2, 0x0a /* Public */,
      45,    0,  359,    2, 0x0a /* Public */,
      46,    0,  360,    2, 0x0a /* Public */,
      47,    0,  361,    2, 0x0a /* Public */,
      48,    0,  362,    2, 0x0a /* Public */,
      49,    2,  363,    2, 0x0a /* Public */,
      51,    1,  368,    2, 0x0a /* Public */,
      51,    2,  371,    2, 0x0a /* Public */,
      54,    1,  376,    2, 0x0a /* Public */,
      54,    1,  379,    2, 0x0a /* Public */,
      56,    1,  382,    2, 0x0a /* Public */,
      57,    1,  385,    2, 0x0a /* Public */,
      60,    0,  388,    2, 0x0a /* Public */,
      61,    1,  389,    2, 0x0a /* Public */,
      63,    4,  392,    2, 0x0a /* Public */,
      68,    1,  401,    2, 0x0a /* Public */,
      69,    0,  404,    2, 0x0a /* Public */,
      70,    1,  405,    2, 0x09 /* Protected */,
      71,    1,  408,    2, 0x09 /* Protected */,
      73,    1,  411,    2, 0x09 /* Protected */,
      75,    0,  414,    2, 0x09 /* Protected */,
      76,    0,  415,    2, 0x09 /* Protected */,
      33,    1,  416,    2, 0x09 /* Protected */,
      78,    0,  419,    2, 0x09 /* Protected */,
      79,    1,  420,    2, 0x09 /* Protected */,
      81,    5,  423,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 7,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Bool,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Bool,   24,   21,   22,
    QMetaType::Void, 0x80000000 | 7,   20,
    QMetaType::Void, 0x80000000 | 7,   27,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Bool,   31,   32,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   40,   41,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, 0x80000000 | 30,   20,   42,   41,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Bool,   20,   21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   24,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Bool,   24,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,   20,   50,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,   20,   53,
    QMetaType::Void, 0x80000000 | 7,   20,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   65,   66,   67,
    QMetaType::Void, 0x80000000 | 7,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString,   72,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   80,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,   42,   82,   83,   84,

       0        // eod
};

void ChannelPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->singleChangeColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->groupChangeColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateShownChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 3: _t->updateHideChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 4: _t->paletteResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->channelsDiscarded((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 6: _t->setDragAndDrop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->groupModified(); break;
        case 8: _t->channelsMovedToTrash((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->channelsMovedAroundInTrash((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->channelsRemovedFromTrash((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 11: _t->channelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 12: _t->slotRowInsered(); break;
        case 13: _t->changeColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->changeColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->createGroup(); break;
        case 16: _t->setGreyScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->deleteEmptyGroups(); break;
        case 18: _t->selectAllChannels(); break;
        case 19: _t->deselectAllChannels(); break;
        case 20: _t->slotChannelsMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 21: _t->slotChannelsMoved((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[3]))); break;
        case 22: _t->trashChannelsMovedAround((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->discardChannels(); break;
        case 24: _t->discardChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 25: _t->discardChannels((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 26: _t->discardSpikeChannels(); break;
        case 27: _t->showChannels(); break;
        case 28: _t->hideChannels(); break;
        case 29: _t->hideUnselectAllChannels(); break;
        case 30: _t->updateShowHideStatus((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->updateSkipStatus((*reinterpret_cast< const QMap<int,bool>(*)>(_a[1]))); break;
        case 32: _t->updateSkipStatus((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->updateColor((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 34: _t->updateColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->updateGroupColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->applyGroupColor((*reinterpret_cast< PaletteType(*)>(_a[1]))); break;
        case 37: _t->applyCustomColor(); break;
        case 38: _t->setEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->groupToMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 40: _t->removeChannelsFromTrash((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 41: _t->selectionTool(); break;
        case 42: _t->slotMousePressMiddleButton((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 43: _t->slotMousePressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->slotMidButtonPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->slotClickRedraw(); break;
        case 46: _t->languageChange(); break;
        case 47: _t->createGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->setChannelLists(); break;
        case 49: _t->slotDragLabeltMoved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 50: _t->slotMoveListItem((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 9:
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
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 21:
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
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 30:
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
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 50:
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
            using _t = void (ChannelPalette::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::singleChangeColor)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::groupChangeColor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::updateShownChannels)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::updateHideChannels)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::paletteResized)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::channelsDiscarded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::setDragAndDrop)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::groupModified)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::channelsMovedToTrash)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::channelsMovedAroundInTrash)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::channelsRemovedFromTrash)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ChannelPalette::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelPalette::channelsSelected)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChannelPalette::staticMetaObject = { {
    &QScrollArea::staticMetaObject,
    qt_meta_stringdata_ChannelPalette.data,
    qt_meta_data_ChannelPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChannelPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelPalette.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int ChannelPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void ChannelPalette::singleChangeColor(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChannelPalette::groupChangeColor(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChannelPalette::updateShownChannels(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChannelPalette::updateHideChannels(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChannelPalette::paletteResized(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChannelPalette::channelsDiscarded(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChannelPalette::setDragAndDrop(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChannelPalette::groupModified()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ChannelPalette::channelsMovedToTrash(const QList<int> & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ChannelPalette::channelsMovedAroundInTrash(const QList<int> & _t1, QString _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ChannelPalette::channelsRemovedFromTrash(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ChannelPalette::channelsSelected(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
struct qt_meta_stringdata_SpaceWidget_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpaceWidget_t qt_meta_stringdata_SpaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SpaceWidget"
QT_MOC_LITERAL(1, 12, 9), // "dropLabel"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "sourceId"
QT_MOC_LITERAL(4, 32, 8), // "targetId"
QT_MOC_LITERAL(5, 41, 5), // "start"
QT_MOC_LITERAL(6, 47, 11), // "destination"
QT_MOC_LITERAL(7, 59, 14), // "setDragAndDrop"
QT_MOC_LITERAL(8, 74, 8) // "dragDrop"

    },
    "SpaceWidget\0dropLabel\0\0sourceId\0"
    "targetId\0start\0destination\0setDragAndDrop\0"
    "dragDrop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpaceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void SpaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpaceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dropLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->setDragAndDrop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpaceWidget::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpaceWidget::dropLabel)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpaceWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SpaceWidget.data,
    qt_meta_data_SpaceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpaceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SpaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SpaceWidget::dropLabel(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GroupLabel_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupLabel_t qt_meta_stringdata_GroupLabel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GroupLabel"
QT_MOC_LITERAL(1, 11, 18), // "middleClickOnLabel"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "sourceId"
QT_MOC_LITERAL(4, 40, 16) // "leftClickOnLabel"

    },
    "GroupLabel\0middleClickOnLabel\0\0sourceId\0"
    "leftClickOnLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void GroupLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->middleClickOnLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->leftClickOnLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroupLabel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupLabel::middleClickOnLabel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroupLabel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupLabel::leftClickOnLabel)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GroupLabel::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_GroupLabel.data,
    qt_meta_data_GroupLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroupLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int GroupLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GroupLabel::middleClickOnLabel(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupLabel::leftClickOnLabel(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
