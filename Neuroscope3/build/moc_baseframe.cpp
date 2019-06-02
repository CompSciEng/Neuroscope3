/****************************************************************************
** Meta object code from reading C++ file 'baseframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/baseframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baseframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseFrame_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseFrame_t qt_meta_stringdata_BaseFrame = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BaseFrame"
QT_MOC_LITERAL(1, 10, 21), // "parentDockBeingClosed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "QWidget*"
QT_MOC_LITERAL(4, 42, 10), // "viewWidget"
QT_MOC_LITERAL(5, 53, 13), // "updateDrawing"
QT_MOC_LITERAL(6, 67, 15), // "dockBeingClosed"
QT_MOC_LITERAL(7, 83, 21), // "changeBackgroundColor"
QT_MOC_LITERAL(8, 105, 5), // "color"
QT_MOC_LITERAL(9, 111, 7), // "setMode"
QT_MOC_LITERAL(10, 119, 15), // "BaseFrame::Mode"
QT_MOC_LITERAL(11, 135, 12) // "selectedMode"

    },
    "BaseFrame\0parentDockBeingClosed\0\0"
    "QWidget*\0viewWidget\0updateDrawing\0"
    "dockBeingClosed\0changeBackgroundColor\0"
    "color\0setMode\0BaseFrame::Mode\0"
    "selectedMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void BaseFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parentDockBeingClosed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->updateDrawing(); break;
        case 2: _t->dockBeingClosed(); break;
        case 3: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setMode((*reinterpret_cast< BaseFrame::Mode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            using _t = void (BaseFrame::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseFrame::parentDockBeingClosed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseFrame::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_BaseFrame.data,
    qt_meta_data_BaseFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BaseFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int BaseFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BaseFrame::parentDockBeingClosed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
