/****************************************************************************
** Meta object code from reading C++ file 'dhtcollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DhtCollection/src/dhtcollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dhtcollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DhtCollection_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DhtCollection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DhtCollection_t qt_meta_stringdata_DhtCollection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DhtCollection"
QT_MOC_LITERAL(1, 14, 17), // "SltCurrentChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 18), // "SltProcessFinished"
QT_MOC_LITERAL(5, 58, 8), // "exitCode"
QT_MOC_LITERAL(6, 67, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(7, 88, 10), // "exitStatus"
QT_MOC_LITERAL(8, 99, 8) // "StartCmd"

    },
    "DhtCollection\0SltCurrentChanged\0\0index\0"
    "SltProcessFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "StartCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DhtCollection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    2,   32,    2, 0x08 /* Private */,
       8,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void,

       0        // eod
};

void DhtCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DhtCollection *_t = static_cast<DhtCollection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SltCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SltProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 2: _t->StartCmd(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DhtCollection::staticMetaObject = {
    { &QtAnimationWidget::staticMetaObject, qt_meta_stringdata_DhtCollection.data,
      qt_meta_data_DhtCollection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DhtCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DhtCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DhtCollection.stringdata0))
        return static_cast<void*>(this);
    return QtAnimationWidget::qt_metacast(_clname);
}

int DhtCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAnimationWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
