/****************************************************************************
** Meta object code from reading C++ file 'containerwidget2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ContainerWidget2/containerwidget2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'containerwidget2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContainerWidget2_t {
    QByteArrayData data[17];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContainerWidget2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContainerWidget2_t qt_meta_stringdata_ContainerWidget2 = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ContainerWidget2"
QT_MOC_LITERAL(1, 17, 34), // "on_combo_elide_currentIndexCh..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 5), // "index"
QT_MOC_LITERAL(4, 59, 40), // "on_combo_tabposition_currentI..."
QT_MOC_LITERAL(5, 100, 37), // "on_combo_tabshape_currentInde..."
QT_MOC_LITERAL(6, 138, 25), // "on_check_document_toggled"
QT_MOC_LITERAL(7, 164, 7), // "checked"
QT_MOC_LITERAL(8, 172, 25), // "on_check_autohide_toggled"
QT_MOC_LITERAL(9, 198, 25), // "on_check_moveable_toggled"
QT_MOC_LITERAL(10, 224, 25), // "on_check_closable_toggled"
QT_MOC_LITERAL(11, 250, 27), // "on_check_scrollBtns_toggled"
QT_MOC_LITERAL(12, 278, 22), // "on_btn_addItem_clicked"
QT_MOC_LITERAL(13, 301, 22), // "on_btn_delItem_clicked"
QT_MOC_LITERAL(14, 324, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 346, 26), // "on_check_flat_stateChanged"
QT_MOC_LITERAL(16, 373, 4) // "arg1"

    },
    "ContainerWidget2\0on_combo_elide_currentIndexChanged\0"
    "\0index\0on_combo_tabposition_currentIndexChanged\0"
    "on_combo_tabshape_currentIndexChanged\0"
    "on_check_document_toggled\0checked\0"
    "on_check_autohide_toggled\0"
    "on_check_moveable_toggled\0"
    "on_check_closable_toggled\0"
    "on_check_scrollBtns_toggled\0"
    "on_btn_addItem_clicked\0on_btn_delItem_clicked\0"
    "on_pushButton_clicked\0on_check_flat_stateChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContainerWidget2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void ContainerWidget2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContainerWidget2 *_t = static_cast<ContainerWidget2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_combo_elide_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_combo_tabposition_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_combo_tabshape_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_check_document_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_check_autohide_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_check_moveable_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_check_closable_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_check_scrollBtns_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_btn_addItem_clicked(); break;
        case 9: _t->on_btn_delItem_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_check_flat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContainerWidget2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ContainerWidget2.data,
      qt_meta_data_ContainerWidget2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContainerWidget2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContainerWidget2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContainerWidget2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ContainerWidget2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
