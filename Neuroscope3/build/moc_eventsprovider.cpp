/****************************************************************************
** Meta object code from reading C++ file 'eventsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/eventsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventsProvider_t {
    QByteArrayData data[20];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventsProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventsProvider_t qt_meta_stringdata_EventsProvider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EventsProvider"
QT_MOC_LITERAL(1, 15, 9), // "dataReady"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "Array<dataType>&"
QT_MOC_LITERAL(4, 43, 5), // "times"
QT_MOC_LITERAL(5, 49, 11), // "Array<int>&"
QT_MOC_LITERAL(6, 61, 3), // "ids"
QT_MOC_LITERAL(7, 65, 9), // "initiator"
QT_MOC_LITERAL(8, 75, 12), // "providerName"
QT_MOC_LITERAL(9, 88, 18), // "nextEventDataReady"
QT_MOC_LITERAL(10, 107, 12), // "startingTime"
QT_MOC_LITERAL(11, 120, 22), // "previousEventDataReady"
QT_MOC_LITERAL(12, 143, 26), // "newEventDescriptionCreated"
QT_MOC_LITERAL(13, 170, 13), // "QMap<int,int>"
QT_MOC_LITERAL(14, 184, 14), // "oldNewEventIds"
QT_MOC_LITERAL(15, 199, 14), // "newOldEventIds"
QT_MOC_LITERAL(16, 214, 21), // "eventDescriptionAdded"
QT_MOC_LITERAL(17, 236, 23), // "eventDescriptionRemoved"
QT_MOC_LITERAL(18, 260, 15), // "eventIdToRemove"
QT_MOC_LITERAL(19, 276, 24) // "eventDescriptionToRemove"

    },
    "EventsProvider\0dataReady\0\0Array<dataType>&\0"
    "times\0Array<int>&\0ids\0initiator\0"
    "providerName\0nextEventDataReady\0"
    "startingTime\0previousEventDataReady\0"
    "newEventDescriptionCreated\0QMap<int,int>\0"
    "oldNewEventIds\0newOldEventIds\0"
    "eventDescriptionAdded\0eventDescriptionRemoved\0"
    "eventIdToRemove\0eventDescriptionToRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventsProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
       9,    5,   48,    2, 0x06 /* Public */,
      11,    5,   59,    2, 0x06 /* Public */,
      12,    4,   70,    2, 0x06 /* Public */,
      17,    5,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QObjectStar, QMetaType::QString,    4,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long,    4,    6,    7,    8,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long,    4,    6,    7,    8,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 13, QMetaType::QString,    8,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 13, QMetaType::Int, QMetaType::QString,    8,   14,   15,   18,   19,

       0        // eod
};

void EventsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventsProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->nextEventDataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 2: _t->previousEventDataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< Array<int>(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 3: _t->newEventDescriptionCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,int>(*)>(_a[2])),(*reinterpret_cast< QMap<int,int>(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->eventDescriptionRemoved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,int>(*)>(_a[2])),(*reinterpret_cast< QMap<int,int>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventsProvider::*)(Array<dataType> & , Array<int> & , QObject * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsProvider::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventsProvider::*)(Array<dataType> & , Array<int> & , QObject * , QString , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsProvider::nextEventDataReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventsProvider::*)(Array<dataType> & , Array<int> & , QObject * , QString , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsProvider::previousEventDataReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EventsProvider::*)(QString , QMap<int,int> , QMap<int,int> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsProvider::newEventDescriptionCreated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EventsProvider::*)(QString , QMap<int,int> , QMap<int,int> , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsProvider::eventDescriptionRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EventsProvider::staticMetaObject = { {
    &DataProvider::staticMetaObject,
    qt_meta_stringdata_EventsProvider.data,
    qt_meta_data_EventsProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventsProvider.stringdata0))
        return static_cast<void*>(this);
    return DataProvider::qt_metacast(_clname);
}

int EventsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EventsProvider::dataReady(Array<dataType> & _t1, Array<int> & _t2, QObject * _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EventsProvider::nextEventDataReady(Array<dataType> & _t1, Array<int> & _t2, QObject * _t3, QString _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EventsProvider::previousEventDataReady(Array<dataType> & _t1, Array<int> & _t2, QObject * _t3, QString _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EventsProvider::newEventDescriptionCreated(QString _t1, QMap<int,int> _t2, QMap<int,int> _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EventsProvider::eventDescriptionRemoved(QString _t1, QMap<int,int> _t2, QMap<int,int> _t3, int _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
