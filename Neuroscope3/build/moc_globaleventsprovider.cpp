/****************************************************************************
** Meta object code from reading C++ file 'globaleventsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/globaleventsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globaleventsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalEventsProvider_t {
    QByteArrayData data[14];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalEventsProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalEventsProvider_t qt_meta_stringdata_GlobalEventsProvider = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GlobalEventsProvider"
QT_MOC_LITERAL(1, 21, 26), // "getCurrentEventInformation"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 9), // "startTime"
QT_MOC_LITERAL(4, 59, 7), // "endTime"
QT_MOC_LITERAL(5, 67, 9), // "initiator"
QT_MOC_LITERAL(6, 77, 15), // "eventsAvailable"
QT_MOC_LITERAL(7, 93, 26), // "QHash<QString,EventData*>&"
QT_MOC_LITERAL(8, 120, 10), // "eventsData"
QT_MOC_LITERAL(9, 131, 26), // "QMap<QString,QList<int> >&"
QT_MOC_LITERAL(10, 158, 14), // "selectedEvents"
QT_MOC_LITERAL(11, 173, 27), // "QHash<QString,ItemColors*>&"
QT_MOC_LITERAL(12, 201, 18), // "providerItemColors"
QT_MOC_LITERAL(13, 220, 25) // "eventInformationAvailable"

    },
    "GlobalEventsProvider\0getCurrentEventInformation\0"
    "\0startTime\0endTime\0initiator\0"
    "eventsAvailable\0QHash<QString,EventData*>&\0"
    "eventsData\0QMap<QString,QList<int> >&\0"
    "selectedEvents\0QHash<QString,ItemColors*>&\0"
    "providerItemColors\0eventInformationAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalEventsProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    3,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    4,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::QObjectStar,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11,    8,   10,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11, QMetaType::QObjectStar,    8,   10,   12,    5,

       0        // eod
};

void GlobalEventsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalEventsProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getCurrentEventInformation((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 1: _t->eventsAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3]))); break;
        case 2: _t->eventInformationAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalEventsProvider::*)(long , long , QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalEventsProvider::getCurrentEventInformation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GlobalEventsProvider::*)(QHash<QString,EventData*> & , QMap<QString,QList<int> > & , QHash<QString,ItemColors*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalEventsProvider::eventsAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalEventsProvider::staticMetaObject = { {
    &DataProvider::staticMetaObject,
    qt_meta_stringdata_GlobalEventsProvider.data,
    qt_meta_data_GlobalEventsProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalEventsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalEventsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalEventsProvider.stringdata0))
        return static_cast<void*>(this);
    return DataProvider::qt_metacast(_clname);
}

int GlobalEventsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GlobalEventsProvider::getCurrentEventInformation(long _t1, long _t2, QObject * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalEventsProvider::eventsAvailable(QHash<QString,EventData*> & _t1, QMap<QString,QList<int> > & _t2, QHash<QString,ItemColors*> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
