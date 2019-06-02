/****************************************************************************
** Meta object code from reading C++ file 'traceview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/traceview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceView_t {
    QByteArrayData data[41];
    char stringdata0[640];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceView_t qt_meta_stringdata_TraceView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TraceView"
QT_MOC_LITERAL(1, 10, 16), // "channelsSelected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "QList<int>"
QT_MOC_LITERAL(4, 39, 11), // "selectedIds"
QT_MOC_LITERAL(5, 51, 19), // "setStartAndDuration"
QT_MOC_LITERAL(6, 71, 4), // "time"
QT_MOC_LITERAL(7, 76, 8), // "duration"
QT_MOC_LITERAL(8, 85, 13), // "eventModified"
QT_MOC_LITERAL(9, 99, 12), // "providerName"
QT_MOC_LITERAL(10, 112, 15), // "selectedEventId"
QT_MOC_LITERAL(11, 128, 7), // "newTime"
QT_MOC_LITERAL(12, 136, 12), // "eventRemoved"
QT_MOC_LITERAL(13, 149, 10), // "eventAdded"
QT_MOC_LITERAL(14, 160, 21), // "addedEventDescription"
QT_MOC_LITERAL(15, 182, 15), // "eventsAvailable"
QT_MOC_LITERAL(16, 198, 26), // "QHash<QString,EventData*>&"
QT_MOC_LITERAL(17, 225, 10), // "eventsData"
QT_MOC_LITERAL(18, 236, 26), // "QMap<QString,QList<int> >&"
QT_MOC_LITERAL(19, 263, 14), // "selectedEvents"
QT_MOC_LITERAL(20, 278, 27), // "QHash<QString,ItemColors*>&"
QT_MOC_LITERAL(21, 306, 18), // "providerItemColors"
QT_MOC_LITERAL(22, 325, 9), // "initiator"
QT_MOC_LITERAL(23, 335, 12), // "samplingRate"
QT_MOC_LITERAL(24, 348, 13), // "dataAvailable"
QT_MOC_LITERAL(25, 362, 16), // "Array<dataType>&"
QT_MOC_LITERAL(26, 379, 4), // "data"
QT_MOC_LITERAL(27, 384, 5), // "times"
QT_MOC_LITERAL(28, 390, 11), // "Array<int>&"
QT_MOC_LITERAL(29, 402, 3), // "ids"
QT_MOC_LITERAL(30, 406, 24), // "nextClusterDataAvailable"
QT_MOC_LITERAL(31, 431, 12), // "startingTime"
QT_MOC_LITERAL(32, 444, 28), // "startingTimeInRecordingUnits"
QT_MOC_LITERAL(33, 473, 28), // "previousClusterDataAvailable"
QT_MOC_LITERAL(34, 502, 22), // "nextEventDataAvailable"
QT_MOC_LITERAL(35, 525, 26), // "previousEventDataAvailable"
QT_MOC_LITERAL(36, 552, 20), // "eventToAddProperties"
QT_MOC_LITERAL(37, 573, 16), // "eventDescription"
QT_MOC_LITERAL(38, 590, 17), // "skipStatusChanged"
QT_MOC_LITERAL(39, 608, 15), // "skippedChannels"
QT_MOC_LITERAL(40, 624, 15) // "getRasterHeight"

    },
    "TraceView\0channelsSelected\0\0QList<int>\0"
    "selectedIds\0setStartAndDuration\0time\0"
    "duration\0eventModified\0providerName\0"
    "selectedEventId\0newTime\0eventRemoved\0"
    "eventAdded\0addedEventDescription\0"
    "eventsAvailable\0QHash<QString,EventData*>&\0"
    "eventsData\0QMap<QString,QList<int> >&\0"
    "selectedEvents\0QHash<QString,ItemColors*>&\0"
    "providerItemColors\0initiator\0samplingRate\0"
    "dataAvailable\0Array<dataType>&\0data\0"
    "times\0Array<int>&\0ids\0nextClusterDataAvailable\0"
    "startingTime\0startingTimeInRecordingUnits\0"
    "previousClusterDataAvailable\0"
    "nextEventDataAvailable\0"
    "previousEventDataAvailable\0"
    "eventToAddProperties\0eventDescription\0"
    "skipStatusChanged\0skippedChannels\0"
    "getRasterHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    2,   97,    2, 0x06 /* Public */,
       8,    4,  102,    2, 0x06 /* Public */,
      12,    3,  111,    2, 0x06 /* Public */,
      13,    3,  118,    2, 0x06 /* Public */,
      15,    5,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    2,  136,    2, 0x0a /* Public */,
      24,    3,  141,    2, 0x0a /* Public */,
      24,    4,  148,    2, 0x0a /* Public */,
      30,    5,  157,    2, 0x0a /* Public */,
      33,    5,  168,    2, 0x0a /* Public */,
      34,    5,  179,    2, 0x0a /* Public */,
      35,    5,  190,    2, 0x0a /* Public */,
      36,    2,  201,    2, 0x0a /* Public */,
      38,    1,  206,    2, 0x0a /* Public */,
      40,    0,  209,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Long, QMetaType::Long,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,    9,   10,    6,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,    9,   10,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,    9,   14,    6,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20, QMetaType::QObjectStar, QMetaType::Double,   17,   19,   21,   22,   23,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25, QMetaType::QObjectStar,   26,   22,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QObjectStar, QMetaType::QString,   26,   22,    9,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 28, QMetaType::QObjectStar, QMetaType::QString,   27,   29,   22,    9,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long, QMetaType::Long,   26,   22,    9,   31,   32,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long, QMetaType::Long,   26,   22,    9,   31,   32,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 28, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long,   27,   29,   22,    9,   31,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 28, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long,   27,   29,   22,    9,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   37,
    QMetaType::Void, 0x80000000 | 3,   39,
    QMetaType::Int,

       0        // eod
};

void TraceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 1: _t->setStartAndDuration((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 2: _t->eventModified((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->eventRemoved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->eventAdded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->eventsAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 6: _t->dataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 7: _t->dataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->dataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->nextClusterDataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 10: _t->previousClusterDataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 11: _t->nextEventDataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 12: _t->previousEventDataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 13: _t->eventToAddProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->skipStatusChanged((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 15: { int _r = _t->getRasterHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 14:
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
            using _t = void (TraceView::*)(const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::channelsSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TraceView::*)(long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::setStartAndDuration)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TraceView::*)(QString , int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::eventModified)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TraceView::*)(QString , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::eventRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TraceView::*)(QString , QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::eventAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TraceView::*)(QHash<QString,EventData*> & , QMap<QString,QList<int> > & , QHash<QString,ItemColors*> & , QObject * , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceView::eventsAvailable)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceView::staticMetaObject = { {
    &BaseFrame::staticMetaObject,
    qt_meta_stringdata_TraceView.data,
    qt_meta_data_TraceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceView.stringdata0))
        return static_cast<void*>(this);
    return BaseFrame::qt_metacast(_clname);
}

int TraceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TraceView::channelsSelected(const QList<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TraceView::setStartAndDuration(long _t1, long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TraceView::eventModified(QString _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TraceView::eventRemoved(QString _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TraceView::eventAdded(QString _t1, QString _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TraceView::eventsAvailable(QHash<QString,EventData*> & _t1, QMap<QString,QList<int> > & _t2, QHash<QString,ItemColors*> & _t3, QObject * _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
