/****************************************************************************
** Meta object code from reading C++ file 'trainingform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Examiner/trainingform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trainingform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrainingForm_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrainingForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrainingForm_t qt_meta_stringdata_TrainingForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TrainingForm"
QT_MOC_LITERAL(1, 13, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "checked"
QT_MOC_LITERAL(4, 45, 24), // "on_radioButton_2_toggled"
QT_MOC_LITERAL(5, 70, 19), // "set_enabled_options"
QT_MOC_LITERAL(6, 90, 19), // "addTopicsToCombobox"
QT_MOC_LITERAL(7, 110, 14), // "vector<Topic*>"
QT_MOC_LITERAL(8, 125, 6) // "topics"

    },
    "TrainingForm\0on_radioButton_toggled\0"
    "\0checked\0on_radioButton_2_toggled\0"
    "set_enabled_options\0addTopicsToCombobox\0"
    "vector<Topic*>\0topics"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrainingForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void TrainingForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrainingForm *_t = static_cast<TrainingForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->set_enabled_options((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addTopicsToCombobox((*reinterpret_cast< vector<Topic*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TrainingForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TrainingForm.data,
      qt_meta_data_TrainingForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrainingForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrainingForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrainingForm.stringdata0))
        return static_cast<void*>(const_cast< TrainingForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int TrainingForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
