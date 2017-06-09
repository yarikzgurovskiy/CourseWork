/****************************************************************************
** Meta object code from reading C++ file 'testing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Examiner/testing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Testing_t {
    QByteArrayData data[23];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Testing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Testing_t qt_meta_stringdata_Testing = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Testing"
QT_MOC_LITERAL(1, 8, 20), // "activateAnswerButton"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "initializeTimer"
QT_MOC_LITERAL(4, 46, 13), // "onTimerUpdate"
QT_MOC_LITERAL(5, 60, 21), // "on_missButton_clicked"
QT_MOC_LITERAL(6, 82, 23), // "on_answerButton_clicked"
QT_MOC_LITERAL(7, 106, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(8, 134, 5), // "index"
QT_MOC_LITERAL(9, 140, 12), // "timerElapsed"
QT_MOC_LITERAL(10, 153, 9), // "showEvent"
QT_MOC_LITERAL(11, 163, 11), // "QShowEvent*"
QT_MOC_LITERAL(12, 175, 5), // "event"
QT_MOC_LITERAL(13, 181, 10), // "closeEvent"
QT_MOC_LITERAL(14, 192, 12), // "QCloseEvent*"
QT_MOC_LITERAL(15, 205, 15), // "fillTasksInTabs"
QT_MOC_LITERAL(16, 221, 13), // "vector<Task*>"
QT_MOC_LITERAL(17, 235, 5), // "tasks"
QT_MOC_LITERAL(18, 241, 9), // "loadTasks"
QT_MOC_LITERAL(19, 251, 20), // "allQuestionsAnswered"
QT_MOC_LITERAL(20, 272, 7), // "setTime"
QT_MOC_LITERAL(21, 280, 22), // "getStudentFromExamForm"
QT_MOC_LITERAL(22, 303, 16) // "setStudentResult"

    },
    "Testing\0activateAnswerButton\0\0"
    "initializeTimer\0onTimerUpdate\0"
    "on_missButton_clicked\0on_answerButton_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "timerElapsed\0showEvent\0QShowEvent*\0"
    "event\0closeEvent\0QCloseEvent*\0"
    "fillTasksInTabs\0vector<Task*>\0tasks\0"
    "loadTasks\0allQuestionsAnswered\0setTime\0"
    "getStudentFromExamForm\0setStudentResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Testing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,
      21,    0,  110,    2, 0x08 /* Private */,
      22,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   12,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Testing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Testing *_t = static_cast<Testing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateAnswerButton(); break;
        case 1: _t->initializeTimer(); break;
        case 2: _t->onTimerUpdate(); break;
        case 3: _t->on_missButton_clicked(); break;
        case 4: _t->on_answerButton_clicked(); break;
        case 5: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->timerElapsed(); break;
        case 7: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 8: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 9: _t->fillTasksInTabs((*reinterpret_cast< vector<Task*>(*)>(_a[1]))); break;
        case 10: _t->loadTasks(); break;
        case 11: _t->allQuestionsAnswered(); break;
        case 12: _t->setTime(); break;
        case 13: _t->getStudentFromExamForm(); break;
        case 14: _t->setStudentResult(); break;
        default: ;
        }
    }
}

const QMetaObject Testing::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Testing.data,
      qt_meta_data_Testing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Testing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Testing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Testing.stringdata0))
        return static_cast<void*>(const_cast< Testing*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Testing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
