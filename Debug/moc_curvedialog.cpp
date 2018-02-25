/****************************************************************************
** Meta object code from reading C++ file 'curvedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../curvedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curvedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CurveDialog_t {
    QByteArrayData data[13];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveDialog_t qt_meta_stringdata_CurveDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CurveDialog"
QT_MOC_LITERAL(1, 12, 14), // "sendApplyCurve"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "apply"
QT_MOC_LITERAL(4, 34, 16), // "curveTypeChanged"
QT_MOC_LITERAL(5, 51, 17), // "linearCurveChange"
QT_MOC_LITERAL(6, 69, 2), // "p1"
QT_MOC_LITERAL(7, 72, 2), // "p2"
QT_MOC_LITERAL(8, 75, 19), // "pieceLinCurveChange"
QT_MOC_LITERAL(9, 95, 14), // "logCurveChange"
QT_MOC_LITERAL(10, 110, 1), // "a"
QT_MOC_LITERAL(11, 112, 1), // "b"
QT_MOC_LITERAL(12, 114, 14) // "expCurveChange"

    },
    "CurveDialog\0sendApplyCurve\0\0apply\0"
    "curveTypeChanged\0linearCurveChange\0"
    "p1\0p2\0pieceLinCurveChange\0logCurveChange\0"
    "a\0b\0expCurveChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   54,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    2,   58,    2, 0x08 /* Private */,
       8,    2,   63,    2, 0x08 /* Private */,
       9,    2,   68,    2, 0x08 /* Private */,
      12,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QImage,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,    6,    7,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,    6,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,

       0        // eod
};

void CurveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurveDialog *_t = static_cast<CurveDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendApplyCurve((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 1: _t->apply(); break;
        case 2: _t->curveTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->linearCurveChange((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 4: _t->pieceLinCurveChange((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 5: _t->logCurveChange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->expCurveChange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CurveDialog::*_t)(QJsonObject , QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurveDialog::sendApplyCurve)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CurveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CurveDialog.data,
      qt_meta_data_CurveDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CurveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CurveDialog.stringdata0))
        return static_cast<void*>(const_cast< CurveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CurveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CurveDialog::sendApplyCurve(QJsonObject _t1, QImage _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
