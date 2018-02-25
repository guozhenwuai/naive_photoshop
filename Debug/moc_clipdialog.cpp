/****************************************************************************
** Meta object code from reading C++ file 'clipdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../clipdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipDialog_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipDialog_t qt_meta_stringdata_ClipDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClipDialog"
QT_MOC_LITERAL(1, 11, 13), // "sendApplyClip"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "setEdit"
QT_MOC_LITERAL(4, 34, 5), // "apply"
QT_MOC_LITERAL(5, 40, 13) // "receiveEnable"

    },
    "ClipDialog\0sendApplyClip\0\0setEdit\0"
    "apply\0receiveEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x08 /* Private */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClipDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipDialog *_t = static_cast<ClipDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendApplyClip((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 1: _t->setEdit((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->apply(); break;
        case 3: _t->receiveEnable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipDialog::*_t)(QJsonObject );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipDialog::sendApplyClip)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ClipDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClipDialog.data,
      qt_meta_data_ClipDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipDialog.stringdata0))
        return static_cast<void*>(const_cast< ClipDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClipDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ClipDialog::sendApplyClip(QJsonObject _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
