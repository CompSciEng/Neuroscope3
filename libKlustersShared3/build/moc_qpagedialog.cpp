/****************************************************************************
** Meta object code from reading C++ file 'qpagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/page/qpagedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPageDialog_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPageDialog_t qt_meta_stringdata_QPageDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QPageDialog"
QT_MOC_LITERAL(1, 12, 18), // "currentPageChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QPageWidgetItem*"
QT_MOC_LITERAL(4, 49, 7), // "current"
QT_MOC_LITERAL(5, 57, 6), // "before"
QT_MOC_LITERAL(6, 64, 11), // "pageRemoved"
QT_MOC_LITERAL(7, 76, 4) // "page"

    },
    "QPageDialog\0currentPageChanged\0\0"
    "QPageWidgetItem*\0current\0before\0"
    "pageRemoved\0page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPageDialog[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void QPageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPageChanged((*reinterpret_cast< QPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPageWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->pageRemoved((*reinterpret_cast< QPageWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPageWidgetItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPageWidgetItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPageDialog::*)(QPageWidgetItem * , QPageWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPageDialog::currentPageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPageDialog::*)(QPageWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPageDialog::pageRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPageDialog::staticMetaObject = { {
    &QExtendDialog::staticMetaObject,
    qt_meta_stringdata_QPageDialog.data,
    qt_meta_data_QPageDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPageDialog.stringdata0))
        return static_cast<void*>(this);
    return QExtendDialog::qt_metacast(_clname);
}

int QPageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtendDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPageDialog::currentPageChanged(QPageWidgetItem * _t1, QPageWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPageDialog::pageRemoved(QPageWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
