/****************************************************************************
** Meta object code from reading C++ file 'qrecentfileaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qrecentfileaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrecentfileaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRecentFileAction_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRecentFileAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRecentFileAction_t qt_meta_stringdata_QRecentFileAction = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QRecentFileAction"
QT_MOC_LITERAL(1, 18, 18), // "recentFileSelected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "recentFileCleared"
QT_MOC_LITERAL(4, 56, 21), // "recentFileListChanged"
QT_MOC_LITERAL(5, 78, 5), // "clear"
QT_MOC_LITERAL(6, 84, 20), // "initializeRecentMenu"
QT_MOC_LITERAL(7, 105, 12), // "fileSelected"
QT_MOC_LITERAL(8, 118, 8), // "QAction*"
QT_MOC_LITERAL(9, 127, 16), // "maximumFileCount"
QT_MOC_LITERAL(10, 144, 11) // "recentFiles"

    },
    "QRecentFileAction\0recentFileSelected\0"
    "\0recentFileCleared\0recentFileListChanged\0"
    "clear\0initializeRecentMenu\0fileSelected\0"
    "QAction*\0maximumFileCount\0recentFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRecentFileAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void QRecentFileAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QRecentFileAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recentFileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->recentFileCleared(); break;
        case 2: _t->recentFileListChanged(); break;
        case 3: _t->clear(); break;
        case 4: _t->d->initializeRecentMenu(); break;
        case 5: _t->d->fileSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QRecentFileAction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRecentFileAction::recentFileSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QRecentFileAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRecentFileAction::recentFileCleared)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QRecentFileAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRecentFileAction::recentFileListChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QRecentFileAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->maximumFileCount(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->recentFiles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QRecentFileAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaximumFileCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRecentFiles(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QRecentFileAction::staticMetaObject = { {
    &QAction::staticMetaObject,
    qt_meta_stringdata_QRecentFileAction.data,
    qt_meta_data_QRecentFileAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QRecentFileAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRecentFileAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRecentFileAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QRecentFileAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QRecentFileAction::recentFileSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRecentFileAction::recentFileCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QRecentFileAction::recentFileListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
