/****************************************************************************
** Meta object code from reading C++ file 'simulation_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/simulation_window.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation_window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18CSimulation_WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto CSimulation_Window::qt_create_metaobjectdata<qt_meta_tag_ZN18CSimulation_WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSimulation_Window",
        "On_Start_Time_Segment",
        "",
        "id",
        "On_Add_Signal",
        "On_Update_Solver_Progress",
        "solver",
        "On_Shut_Down_Received",
        "On_Start",
        "On_Stop",
        "On_Tab_Change",
        "index",
        "On_Reset_And_Solve_Params",
        "On_Segments_Draw_Request",
        "On_Select_Segments_All",
        "On_Select_Segments_None",
        "On_Solve_Signal",
        "Show_Tab_Context_Menu",
        "point",
        "Slot_Start_Time_Segment",
        "Slot_Add_Signal",
        "Slot_Update_Solver_Progress",
        "On_Draw_Shut_Down_State_Change",
        "state"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'On_Start_Time_Segment'
        QtMocHelpers::SignalData<void(quint64)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 3 },
        }}),
        // Signal 'On_Add_Signal'
        QtMocHelpers::SignalData<void(QUuid)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
        // Signal 'On_Update_Solver_Progress'
        QtMocHelpers::SignalData<void(QUuid)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Signal 'On_Shut_Down_Received'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'On_Start'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Stop'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Tab_Change'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'On_Reset_And_Solve_Params'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Segments_Draw_Request'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Select_Segments_All'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Select_Segments_None'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Solve_Signal'
        QtMocHelpers::SlotData<void(QString)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'Show_Tab_Context_Menu'
        QtMocHelpers::SlotData<void(const QPoint &)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 18 },
        }}),
        // Slot 'Slot_Start_Time_Segment'
        QtMocHelpers::SlotData<void(quint64)>(19, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::ULongLong, 3 },
        }}),
        // Slot 'Slot_Add_Signal'
        QtMocHelpers::SlotData<void(QUuid)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
        // Slot 'Slot_Update_Solver_Progress'
        QtMocHelpers::SlotData<void(QUuid)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Slot 'On_Draw_Shut_Down_State_Change'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CSimulation_Window, qt_meta_tag_ZN18CSimulation_WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSimulation_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMdiSubWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CSimulation_WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CSimulation_WindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18CSimulation_WindowE_t>.metaTypes,
    nullptr
} };

void CSimulation_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSimulation_Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Start_Time_Segment((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 1: _t->On_Add_Signal((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 2: _t->On_Update_Solver_Progress((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 3: _t->On_Shut_Down_Received(); break;
        case 4: _t->On_Start(); break;
        case 5: _t->On_Stop(); break;
        case 6: _t->On_Tab_Change((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->On_Reset_And_Solve_Params(); break;
        case 8: _t->On_Segments_Draw_Request(); break;
        case 9: _t->On_Select_Segments_All(); break;
        case 10: _t->On_Select_Segments_None(); break;
        case 11: _t->On_Solve_Signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->Show_Tab_Context_Menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->Slot_Start_Time_Segment((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 14: _t->Slot_Add_Signal((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 15: _t->Slot_Update_Solver_Progress((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 16: _t->On_Draw_Shut_Down_State_Change((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CSimulation_Window::*)(quint64 )>(_a, &CSimulation_Window::On_Start_Time_Segment, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSimulation_Window::*)(QUuid )>(_a, &CSimulation_Window::On_Add_Signal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSimulation_Window::*)(QUuid )>(_a, &CSimulation_Window::On_Update_Solver_Progress, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSimulation_Window::*)()>(_a, &CSimulation_Window::On_Shut_Down_Received, 3))
            return;
    }
}

const QMetaObject *CSimulation_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSimulation_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CSimulation_WindowE_t>.strings))
        return static_cast<void*>(this);
    return QMdiSubWindow::qt_metacast(_clname);
}

int CSimulation_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void CSimulation_Window::On_Start_Time_Segment(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void CSimulation_Window::On_Add_Signal(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void CSimulation_Window::On_Update_Solver_Progress(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void CSimulation_Window::On_Shut_Down_Received()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
