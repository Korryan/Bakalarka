/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/main_window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12CMain_WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto CMain_Window::qt_create_metaobjectdata<qt_meta_tag_ZN12CMain_WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CMain_Window",
        "On_New_Experimental_Setup",
        "",
        "On_Open_Experimental_Setup",
        "On_Save_Experimental_Setup",
        "On_Save_Experimental_Setup_As",
        "On_Quit",
        "On_Update_Actions",
        "On_Close_Window",
        "On_Close_All",
        "On_Tile_Vertically",
        "On_Tile_Horizontally",
        "On_Update_Window_Menu",
        "On_Help_About",
        "On_Filters_Window",
        "On_Simulation_Window",
        "On_Optimize_Parameters_Dialog",
        "On_Open_Recent_Experimental_Setup",
        "QAction*",
        "action",
        "Set_Active_Sub_Window",
        "QWidget*",
        "window"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'On_New_Experimental_Setup'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Open_Experimental_Setup'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Save_Experimental_Setup'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Save_Experimental_Setup_As'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Quit'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Update_Actions'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Close_Window'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Close_All'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Tile_Vertically'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Tile_Horizontally'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Update_Window_Menu'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Help_About'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Filters_Window'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Simulation_Window'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Optimize_Parameters_Dialog'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'On_Open_Recent_Experimental_Setup'
        QtMocHelpers::SlotData<void(QAction *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'Set_Active_Sub_Window'
        QtMocHelpers::SlotData<void(QWidget *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CMain_Window, qt_meta_tag_ZN12CMain_WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CMain_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CMain_WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CMain_WindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12CMain_WindowE_t>.metaTypes,
    nullptr
} };

void CMain_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CMain_Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_New_Experimental_Setup(); break;
        case 1: _t->On_Open_Experimental_Setup(); break;
        case 2: _t->On_Save_Experimental_Setup(); break;
        case 3: _t->On_Save_Experimental_Setup_As(); break;
        case 4: _t->On_Quit(); break;
        case 5: _t->On_Update_Actions(); break;
        case 6: _t->On_Close_Window(); break;
        case 7: _t->On_Close_All(); break;
        case 8: _t->On_Tile_Vertically(); break;
        case 9: _t->On_Tile_Horizontally(); break;
        case 10: _t->On_Update_Window_Menu(); break;
        case 11: _t->On_Help_About(); break;
        case 12: _t->On_Filters_Window(); break;
        case 13: _t->On_Simulation_Window(); break;
        case 14: _t->On_Optimize_Parameters_Dialog(); break;
        case 15: _t->On_Open_Recent_Experimental_Setup((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 16: _t->Set_Active_Sub_Window((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *CMain_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMain_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CMain_WindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMain_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
