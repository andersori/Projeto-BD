/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BibliotecaQT/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "janelaCadastrarUsuario"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "janelaEmprestimoAluno"
QT_MOC_LITERAL(4, 57, 20), // "janelaEmprestimoProf"
QT_MOC_LITERAL(5, 78, 11), // "janelaAjuda"
QT_MOC_LITERAL(6, 90, 15), // "janelaDevolucao"
QT_MOC_LITERAL(7, 106, 14), // "janelaExemplar"
QT_MOC_LITERAL(8, 121, 14), // "paginaUsuarios"
QT_MOC_LITERAL(9, 136, 17), // "paginaPublicacoes"
QT_MOC_LITERAL(10, 154, 17), // "paginaEmprestimos"
QT_MOC_LITERAL(11, 172, 14), // "buscarUsuarios"
QT_MOC_LITERAL(12, 187, 17), // "buscarPublicacoes"
QT_MOC_LITERAL(13, 205, 17), // "buscarEmprestimos"
QT_MOC_LITERAL(14, 223, 18), // "tipoDeBuscaUsuario"
QT_MOC_LITERAL(15, 242, 21), // "tipoDeBuscaPublicacao"
QT_MOC_LITERAL(16, 264, 21) // "tipoDeBuscaEmprestimo"

    },
    "MainWindow\0janelaCadastrarUsuario\0\0"
    "janelaEmprestimoAluno\0janelaEmprestimoProf\0"
    "janelaAjuda\0janelaDevolucao\0janelaExemplar\0"
    "paginaUsuarios\0paginaPublicacoes\0"
    "paginaEmprestimos\0buscarUsuarios\0"
    "buscarPublicacoes\0buscarEmprestimos\0"
    "tipoDeBuscaUsuario\0tipoDeBuscaPublicacao\0"
    "tipoDeBuscaEmprestimo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->janelaCadastrarUsuario(); break;
        case 1: _t->janelaEmprestimoAluno(); break;
        case 2: _t->janelaEmprestimoProf(); break;
        case 3: _t->janelaAjuda(); break;
        case 4: _t->janelaDevolucao(); break;
        case 5: _t->janelaExemplar(); break;
        case 6: _t->paginaUsuarios(); break;
        case 7: _t->paginaPublicacoes(); break;
        case 8: _t->paginaEmprestimos(); break;
        case 9: _t->buscarUsuarios(); break;
        case 10: _t->buscarPublicacoes(); break;
        case 11: _t->buscarEmprestimos(); break;
        case 12: _t->tipoDeBuscaUsuario(); break;
        case 13: _t->tipoDeBuscaPublicacao(); break;
        case 14: _t->tipoDeBuscaEmprestimo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
