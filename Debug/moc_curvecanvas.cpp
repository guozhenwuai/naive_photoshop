/****************************************************************************
** Meta object code from reading C++ file 'curvecanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../curvecanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curvecanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CurveCanvas_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveCanvas_t qt_meta_stringdata_CurveCanvas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CurveCanvas"
QT_MOC_LITERAL(1, 12, 18), // "linearCurveChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "pieceLinCurveChanged"
QT_MOC_LITERAL(4, 53, 15), // "logCurveChanged"
QT_MOC_LITERAL(5, 69, 15) // "expCurveChanged"

    },
    "CurveCanvas\0linearCurveChanged\0\0"
    "pieceLinCurveChanged\0logCurveChanged\0"
    "expCurveChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       3,    2,   39,    2, 0x06 /* Public */,
       4,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,    2,    2,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,

       0        // eod
};

void CurveCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurveCanvas *_t = static_cast<CurveCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linearCurveChanged((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 1: _t->pieceLinCurveChanged((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 2: _t->logCurveChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->expCurveChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CurveCanvas::*_t)(QPoint , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurveCanvas::linearCurveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CurveCanvas::*_t)(QPoint , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurveCanvas::pieceLinCurveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CurveCanvas::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurveCanvas::logCurveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CurveCanvas::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurveCanvas::expCurveChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CurveCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CurveCanvas.data,
      qt_meta_data_CurveCanvas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CurveCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CurveCanvas.stringdata0))
        return static_cast<void*>(const_cast< CurveCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int CurveCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CurveCanvas::linearCurveChanged(QPoint _t1, QPoint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurveCanvas::pieceLinCurveChanged(QPoint _t1, QPoint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CurveCanvas::logCurveChanged(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurveCanvas::expCurveChanged(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE