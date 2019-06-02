/****************************************************************************
** Meta object code from reading C++ file 'clustersprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/clustersprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clustersprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClustersProvider_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClustersProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClustersProvider_t qt_meta_stringdata_ClustersProvider = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClustersProvider"
QT_MOC_LITERAL(1, 17, 9), // "dataReady"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "Array<dataType>&"
QT_MOC_LITERAL(4, 45, 4), // "data"
QT_MOC_LITERAL(5, 50, 9), // "initiator"
QT_MOC_LITERAL(6, 60, 12), // "providerName"
QT_MOC_LITERAL(7, 73, 20), // "nextClusterDataReady"
QT_MOC_LITERAL(8, 94, 12), // "startingTime"
QT_MOC_LITERAL(9, 107, 28), // "startingTimeInRecordingUnits"
QT_MOC_LITERAL(10, 136, 24) // "previousClusterDataReady"

    },
    "ClustersProvider\0dataReady\0\0"
    "Array<dataType>&\0data\0initiator\0"
    "providerName\0nextClusterDataReady\0"
    "startingTime\0startingTimeInRecordingUnits\0"
    "previousClusterDataReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClustersProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       7,    5,   36,    2, 0x06 /* Public */,
      10,    5,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QObjectStar, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long, QMetaType::Long,    4,    5,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Long, QMetaType::Long,    4,    5,    6,    8,    9,

       0        // eod
};

void ClustersProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClustersProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->nextClusterDataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 2: _t->previousClusterDataReady((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClustersProvider::*)(Array<dataType> & , QObject * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClustersProvider::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClustersProvider::*)(Array<dataType> & , QObject * , QString , long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClustersProvider::nextClusterDataReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClustersProvider::*)(Array<dataType> & , QObject * , QString , long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClustersProvider::previousClusterDataReady)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClustersProvider::staticMetaObject = { {
    &DataProvider::staticMetaObject,
    qt_meta_stringdata_ClustersProvider.data,
    qt_meta_data_ClustersProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClustersProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClustersProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClustersProvider.stringdata0))
        return static_cast<void*>(this);
    return DataProvider::qt_metacast(_clname);
}

int ClustersProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ClustersProvider::dataReady(Array<dataType> & _t1, QObject * _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClustersProvider::nextClusterDataReady(Array<dataType> & _t1, QObject * _t2, QString _t3, long _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClustersProvider::previousClusterDataReady(Array<dataType> & _t1, QObject * _t2, QString _t3, long _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
