/****************************************************************************
** Meta object code from reading C++ file 'filters_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/filters_window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filters_window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15CFilters_WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto CFilters_Window::qt_create_metaobjectdata<qt_meta_tag_ZN15CFilters_WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CFilters_Window",
        "On_Add_Filter",
        "",
        "On_Move_Filter_Up",
        "On_Move_Filter_Down",
        "On_Remove_Filter",
        "On_Configure_Filter",
        "On_Commit_Filters",
        "On_Applied_Filter_Dbl_Click",
        "QListWidgetItem*",
        "item",
        "On_Available_Filter_Dbl_Click",
        "On_Applied_Filter_Key_Press",
        "QKeyEvent*",
        "keyevent",
        "On_Filter_Configure_Complete",
        "On_Filter_Drag_Drop",
        "QModelIndex",
        "idx",
        "start",
        "end",
        "mdlIdx",
        "dst"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'On_Add_Filter'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Move_Filter_Up'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Move_Filter_Down'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Remove_Filter'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Configure_Filter'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Commit_Filters'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Applied_Filter_Dbl_Click'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'On_Available_Filter_Dbl_Click'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'On_Applied_Filter_Key_Press'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'On_Filter_Configure_Complete'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Filter_Drag_Drop'
        QtMocHelpers::SlotData<void(QModelIndex, int, int, QModelIndex, int)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { 0x80000000 | 17, 21 },
            { QMetaType::Int, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CFilters_Window, qt_meta_tag_ZN15CFilters_WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CFilters_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMdiSubWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CFilters_WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CFilters_WindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15CFilters_WindowE_t>.metaTypes,
    nullptr
} };

void CFilters_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CFilters_Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Add_Filter(); break;
        case 1: _t->On_Move_Filter_Up(); break;
        case 2: _t->On_Move_Filter_Down(); break;
        case 3: _t->On_Remove_Filter(); break;
        case 4: _t->On_Configure_Filter(); break;
        case 5: _t->On_Commit_Filters(); break;
        case 6: _t->On_Applied_Filter_Dbl_Click((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 7: _t->On_Available_Filter_Dbl_Click((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 8: _t->On_Applied_Filter_Key_Press((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 9: _t->On_Filter_Configure_Complete(); break;
        case 10: _t->On_Filter_Drag_Drop((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject *CFilters_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFilters_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CFilters_WindowE_t>.strings))
        return static_cast<void*>(this);
    return QMdiSubWindow::qt_metacast(_clname);
}

int CFilters_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
