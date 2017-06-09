/****************************************************************************
** Meta object code from reading C++ file 'resultsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Examiner/resultsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResultsForm_t {
    QByteArrayData data[15];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResultsForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResultsForm_t qt_meta_stringdata_ResultsForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ResultsForm"
QT_MOC_LITERAL(1, 12, 24), // "on_studentButton_toggled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "checked"
QT_MOC_LITERAL(4, 46, 24), // "on_teacherButton_toggled"
QT_MOC_LITERAL(5, 71, 19), // "set_enabled_options"
QT_MOC_LITERAL(6, 91, 8), // "selected"
QT_MOC_LITERAL(7, 100, 24), // "on_resultsButton_clicked"
QT_MOC_LITERAL(8, 125, 29), // "on_passwordEdit_2_textChanged"
QT_MOC_LITERAL(9, 155, 4), // "arg1"
QT_MOC_LITERAL(10, 160, 23), // "on_nickEdit_textChanged"
QT_MOC_LITERAL(11, 184, 27), // "on_passwordEdit_textChanged"
QT_MOC_LITERAL(12, 212, 10), // "updateEdit"
QT_MOC_LITERAL(13, 223, 10), // "QLineEdit*"
QT_MOC_LITERAL(14, 234, 8) // "lineEdit"

    },
    "ResultsForm\0on_studentButton_toggled\0"
    "\0checked\0on_teacherButton_toggled\0"
    "set_enabled_options\0selected\0"
    "on_resultsButton_clicked\0"
    "on_passwordEdit_2_textChanged\0arg1\0"
    "on_nickEdit_textChanged\0"
    "on_passwordEdit_textChanged\0updateEdit\0"
    "QLineEdit*\0lineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResultsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void ResultsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultsForm *_t = static_cast<ResultsForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_studentButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_teacherButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->set_enabled_options((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_resultsButton_clicked(); break;
        case 4: _t->on_passwordEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_nickEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_passwordEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateEdit((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ResultsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ResultsForm.data,
      qt_meta_data_ResultsForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResultsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResultsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResultsForm.stringdata0))
        return static_cast<void*>(const_cast< ResultsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ResultsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
