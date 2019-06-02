/****************************************************************************
** Meta object code from reading C++ file 'qpagewidgetmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/page/qpagewidgetmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpagewidgetmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPageWidgetItem_t {
    QByteArrayData data[12];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPageWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPageWidgetItem_t qt_meta_stringdata_QPageWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QPageWidgetItem"
QT_MOC_LITERAL(1, 16, 7), // "changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "toggled"
QT_MOC_LITERAL(4, 33, 7), // "checked"
QT_MOC_LITERAL(5, 41, 10), // "setEnabled"
QT_MOC_LITERAL(6, 52, 10), // "setChecked"
QT_MOC_LITERAL(7, 63, 4), // "name"
QT_MOC_LITERAL(8, 68, 6), // "header"
QT_MOC_LITERAL(9, 75, 4), // "icon"
QT_MOC_LITERAL(10, 80, 9), // "checkable"
QT_MOC_LITERAL(11, 90, 7) // "enabled"

    },
    "QPageWidgetItem\0changed\0\0toggled\0"
    "checked\0setEnabled\0setChecked\0name\0"
    "header\0icon\0checkable\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPageWidgetItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x0a /* Public */,
       6,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QIcon, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
       4, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QPageWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPageWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPageWidgetItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPageWidgetItem::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPageWidgetItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPageWidgetItem::toggled)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPageWidgetItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->header(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isCheckable(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isChecked(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPageWidgetItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPageWidgetItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QPageWidgetItem.data,
    qt_meta_data_QPageWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPageWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPageWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPageWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPageWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPageWidgetItem::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPageWidgetItem::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QPageWidgetModel_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPageWidgetModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPageWidgetModel_t qt_meta_stringdata_QPageWidgetModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QPageWidgetModel"
QT_MOC_LITERAL(1, 17, 7), // "toggled"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "QPageWidgetItem*"
QT_MOC_LITERAL(4, 43, 4), // "page"
QT_MOC_LITERAL(5, 48, 7), // "checked"
QT_MOC_LITERAL(6, 56, 14), // "_k_itemChanged"
QT_MOC_LITERAL(7, 71, 14) // "_k_itemToggled"

    },
    "QPageWidgetModel\0toggled\0\0QPageWidgetItem*\0"
    "page\0checked\0_k_itemChanged\0_k_itemToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPageWidgetModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void QPageWidgetModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPageWidgetModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< QPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->d_func()->_k_itemChanged(); break;
        case 2: _t->d_func()->_k_itemToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            using _t = void (QPageWidgetModel::*)(QPageWidgetItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPageWidgetModel::toggled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPageWidgetModel::staticMetaObject = { {
    &QPageModel::staticMetaObject,
    qt_meta_stringdata_QPageWidgetModel.data,
    qt_meta_data_QPageWidgetModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPageWidgetModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPageWidgetModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPageWidgetModel.stringdata0))
        return static_cast<void*>(this);
    return QPageModel::qt_metacast(_clname);
}

int QPageWidgetModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPageModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QPageWidgetModel::toggled(QPageWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
