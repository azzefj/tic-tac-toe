/****************************************************************************
** Meta object code from reading C++ file 'startwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../startwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StartWindow_t {
    QByteArrayData data[19];
    char stringdata[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StartWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StartWindow_t qt_meta_stringdata_StartWindow = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 26),
QT_MOC_LITERAL(4, 53, 26),
QT_MOC_LITERAL(5, 80, 13),
QT_MOC_LITERAL(6, 94, 13),
QT_MOC_LITERAL(7, 108, 13),
QT_MOC_LITERAL(8, 122, 13),
QT_MOC_LITERAL(9, 136, 13),
QT_MOC_LITERAL(10, 150, 13),
QT_MOC_LITERAL(11, 164, 13),
QT_MOC_LITERAL(12, 178, 13),
QT_MOC_LITERAL(13, 192, 13),
QT_MOC_LITERAL(14, 206, 19),
QT_MOC_LITERAL(15, 226, 21),
QT_MOC_LITERAL(16, 248, 21),
QT_MOC_LITERAL(17, 270, 26),
QT_MOC_LITERAL(18, 297, 26)
    },
    "StartWindow\0mousePressed\0\0"
    "on_btn_selectRobot_clicked\0"
    "on_btn_selectHuman_clicked\0on_m1_clicked\0"
    "on_m2_clicked\0on_m3_clicked\0on_m4_clicked\0"
    "on_m5_clicked\0on_m6_clicked\0on_m7_clicked\0"
    "on_m8_clicked\0on_m9_clicked\0"
    "on_name_btn_clicked\0on_winner_btn_clicked\0"
    "on_winner_btn_pressed\0on_btn_selectHuman_pressed\0"
    "on_btn_selectRobot_pressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08,
       3,    0,  100,    2, 0x08,
       4,    0,  101,    2, 0x08,
       5,    0,  102,    2, 0x08,
       6,    0,  103,    2, 0x08,
       7,    0,  104,    2, 0x08,
       8,    0,  105,    2, 0x08,
       9,    0,  106,    2, 0x08,
      10,    0,  107,    2, 0x08,
      11,    0,  108,    2, 0x08,
      12,    0,  109,    2, 0x08,
      13,    0,  110,    2, 0x08,
      14,    0,  111,    2, 0x08,
      15,    0,  112,    2, 0x08,
      16,    0,  113,    2, 0x08,
      17,    0,  114,    2, 0x08,
      18,    0,  115,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StartWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StartWindow *_t = static_cast<StartWindow *>(_o);
        switch (_id) {
        case 0: _t->mousePressed(); break;
        case 1: _t->on_btn_selectRobot_clicked(); break;
        case 2: _t->on_btn_selectHuman_clicked(); break;
        case 3: _t->on_m1_clicked(); break;
        case 4: _t->on_m2_clicked(); break;
        case 5: _t->on_m3_clicked(); break;
        case 6: _t->on_m4_clicked(); break;
        case 7: _t->on_m5_clicked(); break;
        case 8: _t->on_m6_clicked(); break;
        case 9: _t->on_m7_clicked(); break;
        case 10: _t->on_m8_clicked(); break;
        case 11: _t->on_m9_clicked(); break;
        case 12: _t->on_name_btn_clicked(); break;
        case 13: _t->on_winner_btn_clicked(); break;
        case 14: _t->on_winner_btn_pressed(); break;
        case 15: _t->on_btn_selectHuman_pressed(); break;
        case 16: _t->on_btn_selectRobot_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject StartWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StartWindow.data,
      qt_meta_data_StartWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *StartWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartWindow.stringdata))
        return static_cast<void*>(const_cast< StartWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StartWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
