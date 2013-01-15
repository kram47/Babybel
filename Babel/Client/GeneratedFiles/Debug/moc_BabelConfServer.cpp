/****************************************************************************
** Meta object code from reading C++ file 'BabelConfServer.hpp'
**
** Created: Mon 14. Jan 01:00:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Includes/BabelConfServer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BabelConfServer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BabelConfServer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BabelConfServer[] = {
    "BabelConfServer\0\0confirmAction()\0"
    "buttonEffect(QString)\0"
};

const QMetaObject BabelConfServer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BabelConfServer,
      qt_meta_data_BabelConfServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BabelConfServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BabelConfServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BabelConfServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BabelConfServer))
        return static_cast<void*>(const_cast< BabelConfServer*>(this));
    if (!strcmp(_clname, "Ui_FormConf"))
        return static_cast< Ui_FormConf*>(const_cast< BabelConfServer*>(this));
    return QWidget::qt_metacast(_clname);
}

int BabelConfServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: confirmAction(); break;
        case 1: buttonEffect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
