/****************************************************************************
** Meta object code from reading C++ file 'containerframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../journey of qt/lesson-5/ContainerWidget1/containerframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'containerframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContainerFrame_t {
    QByteArrayData data[9];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContainerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContainerFrame_t qt_meta_stringdata_ContainerFrame = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ContainerFrame"
QT_MOC_LITERAL(1, 15, 30), // "on_combo_h_currentIndexChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 30), // "on_combo_v_currentIndexChanged"
QT_MOC_LITERAL(5, 84, 33), // "on_combo_size_currentIndexCha..."
QT_MOC_LITERAL(6, 118, 40), // "on_comboBox_aligment_currentI..."
QT_MOC_LITERAL(7, 159, 24), // "on_checkBox_flat_toggled"
QT_MOC_LITERAL(8, 184, 7) // "checked"

    },
    "ContainerFrame\0on_combo_h_currentIndexChanged\0"
    "\0index\0on_combo_v_currentIndexChanged\0"
    "on_combo_size_currentIndexChanged\0"
    "on_comboBox_aligment_currentIndexChanged\0"
    "on_checkBox_flat_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContainerFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void ContainerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContainerFrame *_t = static_cast<ContainerFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_combo_h_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_combo_v_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_combo_size_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_aligment_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_flat_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContainerFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ContainerFrame.data,
      qt_meta_data_ContainerFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContainerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContainerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContainerFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ContainerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
