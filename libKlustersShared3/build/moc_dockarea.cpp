/****************************************************************************
** Meta object code from reading C++ file 'dockarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/dockarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockArea_t {
    QByteArrayData data[18];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockArea_t qt_meta_stringdata_DockArea = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DockArea"
QT_MOC_LITERAL(1, 9, 15), // "dockWidgetAdded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "pWidgetName"
QT_MOC_LITERAL(4, 38, 15), // "contentToUpdate"
QT_MOC_LITERAL(5, 54, 26), // "sig_backgroundColorChanged"
QT_MOC_LITERAL(6, 81, 25), // "slotChangeBackgroundColor"
QT_MOC_LITERAL(7, 107, 6), // "pColor"
QT_MOC_LITERAL(8, 114, 14), // "showDockWidget"
QT_MOC_LITERAL(9, 129, 5), // "pShow"
QT_MOC_LITERAL(10, 135, 15), // "dockWidgetNames"
QT_MOC_LITERAL(11, 151, 14), // "QList<QString>"
QT_MOC_LITERAL(12, 166, 7), // "widgets"
QT_MOC_LITERAL(13, 174, 15), // "QList<QWidget*>"
QT_MOC_LITERAL(14, 190, 5), // "pName"
QT_MOC_LITERAL(15, 196, 13), // "widgetsByName"
QT_MOC_LITERAL(16, 210, 30), // "QMap<QString,QList<QWidget*> >"
QT_MOC_LITERAL(17, 241, 13) // "deleteWidgets"

    },
    "DockArea\0dockWidgetAdded\0\0pWidgetName\0"
    "contentToUpdate\0sig_backgroundColorChanged\0"
    "slotChangeBackgroundColor\0pColor\0"
    "showDockWidget\0pShow\0dockWidgetNames\0"
    "QList<QString>\0widgets\0QList<QWidget*>\0"
    "pName\0widgetsByName\0QMap<QString,QList<QWidget*> >\0"
    "deleteWidgets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   66,    2, 0x0a /* Public */,
       8,    2,   69,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,
      15,    0,   78,    2, 0x0a /* Public */,
      17,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    9,
    0x80000000 | 11,
    0x80000000 | 13, QMetaType::QString,   14,
    0x80000000 | 16,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void DockArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dockWidgetAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->contentToUpdate(); break;
        case 2: _t->sig_backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->slotChangeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->showDockWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: { QList<QString> _r = _t->dockWidgetNames();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<QWidget*> _r = _t->widgets((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QWidget*>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QMap<QString,QList<QWidget*> > _r = _t->widgetsByName();
            if (_a[0]) *reinterpret_cast< QMap<QString,QList<QWidget*> >*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->deleteWidgets((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockArea::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockArea::dockWidgetAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockArea::contentToUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockArea::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockArea::sig_backgroundColorChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockArea::staticMetaObject = { {
    &QScrollArea::staticMetaObject,
    qt_meta_stringdata_DockArea.data,
    qt_meta_data_DockArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockArea.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int DockArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DockArea::dockWidgetAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockArea::contentToUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DockArea::sig_backgroundColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
