/****************************************************************************
** Meta object code from reading C++ file 'MyTextEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      49,   11,   11,   11, 0x0a,
      68,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyTextEdit[] = {
    "MyTextEdit\0\0displayText()\0"
    "setTextEditat(QString)\0setNumero(QString)\0"
    "desfer()\0"
};

void MyTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyTextEdit *_t = static_cast<MyTextEdit *>(_o);
        switch (_id) {
        case 0: _t->displayText(); break;
        case 1: _t->setTextEditat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setNumero((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->desfer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_MyTextEdit,
      qt_meta_data_MyTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyTextEdit))
        return static_cast<void*>(const_cast< MyTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int MyTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
