/****************************************************************************
** Meta object code from reading C++ file 'channeliconview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/channeliconview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channeliconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChannelIconView_t {
    QByteArrayData data[28];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChannelIconView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChannelIconView_t qt_meta_stringdata_ChannelIconView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ChannelIconView"
QT_MOC_LITERAL(1, 16, 22), // "mousePressMiddleButton"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 57, 4), // "item"
QT_MOC_LITERAL(5, 62, 13), // "channelsMoved"
QT_MOC_LITERAL(6, 76, 11), // "targetGroup"
QT_MOC_LITERAL(7, 88, 5), // "after"
QT_MOC_LITERAL(8, 94, 10), // "QList<int>"
QT_MOC_LITERAL(9, 105, 10), // "channelIds"
QT_MOC_LITERAL(10, 116, 11), // "sourceGroup"
QT_MOC_LITERAL(11, 128, 9), // "dropLabel"
QT_MOC_LITERAL(12, 138, 8), // "sourceId"
QT_MOC_LITERAL(13, 147, 8), // "targetId"
QT_MOC_LITERAL(14, 156, 5), // "start"
QT_MOC_LITERAL(15, 162, 11), // "destination"
QT_MOC_LITERAL(16, 174, 11), // "removeGroup"
QT_MOC_LITERAL(17, 186, 4), // "name"
QT_MOC_LITERAL(18, 191, 12), // "moveListItem"
QT_MOC_LITERAL(19, 204, 6), // "listId"
QT_MOC_LITERAL(20, 211, 15), // "sourceGroupName"
QT_MOC_LITERAL(21, 227, 13), // "destGroupName"
QT_MOC_LITERAL(22, 241, 5), // "index"
QT_MOC_LITERAL(23, 247, 7), // "moveAll"
QT_MOC_LITERAL(24, 255, 10), // "rowInsered"
QT_MOC_LITERAL(25, 266, 14), // "setDragAndDrop"
QT_MOC_LITERAL(26, 281, 8), // "dragDrop"
QT_MOC_LITERAL(27, 290, 14) // "slotRowInsered"

    },
    "ChannelIconView\0mousePressMiddleButton\0"
    "\0QListWidgetItem*\0item\0channelsMoved\0"
    "targetGroup\0after\0QList<int>\0channelIds\0"
    "sourceGroup\0dropLabel\0sourceId\0targetId\0"
    "start\0destination\0removeGroup\0name\0"
    "moveListItem\0listId\0sourceGroupName\0"
    "destGroupName\0index\0moveAll\0rowInsered\0"
    "setDragAndDrop\0dragDrop\0slotRowInsered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelIconView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       5,    3,   67,    2, 0x06 /* Public */,
      11,    4,   74,    2, 0x06 /* Public */,
      16,    1,   83,    2, 0x06 /* Public */,
      18,    5,   86,    2, 0x06 /* Public */,
      24,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,   98,    2, 0x0a /* Public */,
      27,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    7,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, 0x80000000 | 3,    9,   10,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   19,   20,   21,   22,   23,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,

       0        // eod
};

void ChannelIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelIconView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressMiddleButton((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->channelsMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->channelsMoved((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[3]))); break;
        case 3: _t->dropLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->removeGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->moveListItem((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 6: _t->rowInsered(); break;
        case 7: _t->setDragAndDrop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotRowInsered(); break;
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
        case 5:
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
            using _t = void (ChannelIconView::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::mousePressMiddleButton)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)(const QString & , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::channelsMoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)(const QList<int> & , const QString & , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::channelsMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::dropLabel)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::removeGroup)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)(const QList<int> & , const QString & , const QString & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::moveListItem)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChannelIconView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelIconView::rowInsered)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChannelIconView::staticMetaObject = { {
    &QListWidget::staticMetaObject,
    qt_meta_stringdata_ChannelIconView.data,
    qt_meta_data_ChannelIconView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChannelIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelIconView.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int ChannelIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ChannelIconView::mousePressMiddleButton(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChannelIconView::channelsMoved(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChannelIconView::channelsMoved(const QList<int> & _t1, const QString & _t2, QListWidgetItem * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChannelIconView::dropLabel(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChannelIconView::removeGroup(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChannelIconView::moveListItem(const QList<int> & _t1, const QString & _t2, const QString & _t3, int _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChannelIconView::rowInsered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
