/****************************************************************************
** Meta object code from reading C++ file 'cadastrousuariodlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BibliotecaQT/cadastrousuariodlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastrousuariodlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CadastroUsuarioDLG_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CadastroUsuarioDLG_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CadastroUsuarioDLG_t qt_meta_stringdata_CadastroUsuarioDLG = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CadastroUsuarioDLG"
QT_MOC_LITERAL(1, 19, 9), // "cadastrar"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "tipoDeUsuarioAluno"
QT_MOC_LITERAL(4, 49, 22) // "tipoDeUsuarioProfessor"

    },
    "CadastroUsuarioDLG\0cadastrar\0\0"
    "tipoDeUsuarioAluno\0tipoDeUsuarioProfessor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CadastroUsuarioDLG[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CadastroUsuarioDLG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CadastroUsuarioDLG *_t = static_cast<CadastroUsuarioDLG *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cadastrar(); break;
        case 1: _t->tipoDeUsuarioAluno(); break;
        case 2: _t->tipoDeUsuarioProfessor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CadastroUsuarioDLG::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CadastroUsuarioDLG.data,
      qt_meta_data_CadastroUsuarioDLG,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CadastroUsuarioDLG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CadastroUsuarioDLG::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CadastroUsuarioDLG.stringdata0))
        return static_cast<void*>(const_cast< CadastroUsuarioDLG*>(this));
    return QDialog::qt_metacast(_clname);
}

int CadastroUsuarioDLG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
