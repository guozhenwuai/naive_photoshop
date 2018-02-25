/****************************************************************************
** Meta object code from reading C++ file 'huesaturalightdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../huesaturalightdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huesaturalightdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HueSaturaLightDialog_t {
    QByteArrayData data[11];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HueSaturaLightDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HueSaturaLightDialog_t qt_meta_stringdata_HueSaturaLightDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "HueSaturaLightDialog"
QT_MOC_LITERAL(1, 21, 18), // "sendApplyHSLAdjust"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "hueEditChanged"
QT_MOC_LITERAL(4, 56, 21), // "saturationEditChanged"
QT_MOC_LITERAL(5, 78, 20), // "lightnessEditChanged"
QT_MOC_LITERAL(6, 99, 16), // "hueSliderChanged"
QT_MOC_LITERAL(7, 116, 23), // "saturationSliderChanged"
QT_MOC_LITERAL(8, 140, 22), // "lightnessSliderChanged"
QT_MOC_LITERAL(9, 163, 5), // "apply"
QT_MOC_LITERAL(10, 169, 18) // "targetColorChanged"

    },
    "HueSaturaLightDialog\0sendApplyHSLAdjust\0"
    "\0hueEditChanged\0saturationEditChanged\0"
    "lightnessEditChanged\0hueSliderChanged\0"
    "saturationSliderChanged\0lightnessSliderChanged\0"
    "apply\0targetColorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HueSaturaLightDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   64,    2, 0x08 /* Private */,
       4,    0,   65,    2, 0x08 /* Private */,
       5,    0,   66,    2, 0x08 /* Private */,
       6,    0,   67,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QImage,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void HueSaturaLightDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HueSaturaLightDialog *_t = static_cast<HueSaturaLightDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendApplyHSLAdjust((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 1: _t->hueEditChanged(); break;
        case 2: _t->saturationEditChanged(); break;
        case 3: _t->lightnessEditChanged(); break;
        case 4: _t->hueSliderChanged(); break;
        case 5: _t->saturationSliderChanged(); break;
        case 6: _t->lightnessSliderChanged(); break;
        case 7: _t->apply(); break;
        case 8: _t->targetColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HueSaturaLightDialog::*_t)(QJsonObject , QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueSaturaLightDialog::sendApplyHSLAdjust)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HueSaturaLightDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HueSaturaLightDialog.data,
      qt_meta_data_HueSaturaLightDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HueSaturaLightDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HueSaturaLightDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HueSaturaLightDialog.stringdata0))
        return static_cast<void*>(const_cast< HueSaturaLightDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int HueSaturaLightDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HueSaturaLightDialog::sendApplyHSLAdjust(QJsonObject _t1, QImage _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
