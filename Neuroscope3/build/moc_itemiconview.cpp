/****************************************************************************
** Meta object code from reading C++ file 'itemiconview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/itemiconview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemiconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemIconView_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemIconView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemIconView_t qt_meta_stringdata_ItemIconView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ItemIconView"
QT_MOC_LITERAL(1, 13, 22), // "mousePressMiddleButton"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "sourceGroup"
QT_MOC_LITERAL(4, 49, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 66, 20), // "mousePressWAltButton"
QT_MOC_LITERAL(6, 87, 13), // "mouseReleased"
QT_MOC_LITERAL(7, 101, 10) // "rowInsered"

    },
    "ItemIconView\0mousePressMiddleButton\0"
    "\0sourceGroup\0QListWidgetItem*\0"
    "mousePressWAltButton\0mouseReleased\0"
    "rowInsered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemIconView[] = {

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
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       1,    1,   52,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    2,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

       0        // eod
};

void ItemIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemIconView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressMiddleButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->mousePressWAltButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mousePressMiddleButton((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->rowInsered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemIconView::*)(const QString & , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemIconView::mousePressMiddleButton)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ItemIconView::*)(const QString & , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemIconView::mousePressWAltButton)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ItemIconView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemIconView::mouseReleased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ItemIconView::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemIconView::mousePressMiddleButton)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ItemIconView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemIconView::rowInsered)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ItemIconView::staticMetaObject = { {
    &QListWidget::staticMetaObject,
    qt_meta_stringdata_ItemIconView.data,
    qt_meta_data_ItemIconView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ItemIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemIconView.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int ItemIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void ItemIconView::mousePressMiddleButton(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemIconView::mousePressWAltButton(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemIconView::mouseReleased(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemIconView::mousePressMiddleButton(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemIconView::rowInsered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
