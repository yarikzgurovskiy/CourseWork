/****************************************************************************
** Meta object code from reading C++ file 'examform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Examiner/examform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'examform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExamForm_t {
    QByteArrayData data[15];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExamForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExamForm_t qt_meta_stringdata_ExamForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ExamForm"
QT_MOC_LITERAL(1, 9, 19), // "set_enabled_options"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "checked"
QT_MOC_LITERAL(4, 38, 20), // "on_logButton_toggled"
QT_MOC_LITERAL(5, 59, 20), // "on_regButton_toggled"
QT_MOC_LITERAL(6, 80, 23), // "on_nameEdit_textChanged"
QT_MOC_LITERAL(7, 104, 4), // "arg1"
QT_MOC_LITERAL(8, 109, 23), // "on_nickEdit_textChanged"
QT_MOC_LITERAL(9, 133, 27), // "on_passwordEdit_textChanged"
QT_MOC_LITERAL(10, 161, 26), // "on_surnameEdit_textChanged"
QT_MOC_LITERAL(11, 188, 24), // "on_emailEdit_textChanged"
QT_MOC_LITERAL(12, 213, 25), // "on_nickEdit_2_textChanged"
QT_MOC_LITERAL(13, 239, 29), // "on_passwordEdit_2_textChanged"
QT_MOC_LITERAL(14, 269, 21) // "on_examButton_clicked"

    },
    "ExamForm\0set_enabled_options\0\0checked\0"
    "on_logButton_toggled\0on_regButton_toggled\0"
    "on_nameEdit_textChanged\0arg1\0"
    "on_nickEdit_textChanged\0"
    "on_passwordEdit_textChanged\0"
    "on_surnameEdit_textChanged\0"
    "on_emailEdit_textChanged\0"
    "on_nickEdit_2_textChanged\0"
    "on_passwordEdit_2_textChanged\0"
    "on_examButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExamForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void ExamForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExamForm *_t = static_cast<ExamForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_enabled_options((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_logButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_regButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_nameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_nickEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_passwordEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_surnameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_emailEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_nickEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_passwordEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_examButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ExamForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExamForm.data,
      qt_meta_data_ExamForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExamForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExamForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExamForm.stringdata0))
        return static_cast<void*>(const_cast< ExamForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExamForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
