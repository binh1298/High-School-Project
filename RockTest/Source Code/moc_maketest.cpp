/****************************************************************************
** Meta object code from reading C++ file 'maketest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QT/untitled/maketest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maketest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MakeTest_t {
    QByteArrayData data[8];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MakeTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MakeTest_t qt_meta_stringdata_MakeTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MakeTest"
QT_MOC_LITERAL(1, 9, 38), // "on_comboBox_Subject_currentTe..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "arg1"
QT_MOC_LITERAL(4, 54, 26), // "on_pushButton_Done_clicked"
QT_MOC_LITERAL(5, 81, 43), // "on_pushButton_CaculatetotalQu..."
QT_MOC_LITERAL(6, 125, 15), // "addingquestions"
QT_MOC_LITERAL(7, 141, 34) // "on_pushButton_ChooseOutDir_cl..."

    },
    "MakeTest\0on_comboBox_Subject_currentTextChanged\0"
    "\0arg1\0on_pushButton_Done_clicked\0"
    "on_pushButton_CaculatetotalQuestion_clicked\0"
    "addingquestions\0on_pushButton_ChooseOutDir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MakeTest[] = {

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
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MakeTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MakeTest *_t = static_cast<MakeTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_Subject_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_Done_clicked(); break;
        case 2: _t->on_pushButton_CaculatetotalQuestion_clicked(); break;
        case 3: _t->addingquestions(); break;
        case 4: _t->on_pushButton_ChooseOutDir_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MakeTest::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MakeTest.data,
      qt_meta_data_MakeTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MakeTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MakeTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MakeTest.stringdata0))
        return static_cast<void*>(const_cast< MakeTest*>(this));
    return QDialog::qt_metacast(_clname);
}

int MakeTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
