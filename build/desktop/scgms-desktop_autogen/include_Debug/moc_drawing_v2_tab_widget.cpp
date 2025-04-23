/****************************************************************************
** Meta object code from reading C++ file 'drawing_v2_tab_widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/simulation/drawing_v2_tab_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawing_v2_tab_widget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t {};
} // unnamed namespace

template <> constexpr inline auto CDrawing_v2_Graphics_View::qt_create_metaobjectdata<qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CDrawing_v2_Graphics_View",
        "scalingTime",
        "",
        "x",
        "animFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'scalingTime'
        QtMocHelpers::SlotData<void(qreal)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QReal, 3 },
        }}),
        // Slot 'animFinished'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CDrawing_v2_Graphics_View, qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CDrawing_v2_Graphics_View::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>.metaTypes,
    nullptr
} };

void CDrawing_v2_Graphics_View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CDrawing_v2_Graphics_View *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scalingTime((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 1: _t->animFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *CDrawing_v2_Graphics_View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDrawing_v2_Graphics_View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25CDrawing_v2_Graphics_ViewE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int CDrawing_v2_Graphics_View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto CDrawing_v2_Tab_Widget::qt_create_metaobjectdata<qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CDrawing_v2_Tab_Widget",
        "On_Redraw",
        "",
        "Show_Context_Menu",
        "pos",
        "Slot_Redraw"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'On_Redraw'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Show_Context_Menu'
        QtMocHelpers::SlotData<void(const QPoint &)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 4 },
        }}),
        // Slot 'Slot_Redraw'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CDrawing_v2_Tab_Widget, qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CDrawing_v2_Tab_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<CAbstract_Simulation_Tab_Widget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>.metaTypes,
    nullptr
} };

void CDrawing_v2_Tab_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CDrawing_v2_Tab_Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Redraw(); break;
        case 1: _t->Show_Context_Menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->Slot_Redraw(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CDrawing_v2_Tab_Widget::*)()>(_a, &CDrawing_v2_Tab_Widget::On_Redraw, 0))
            return;
    }
}

const QMetaObject *CDrawing_v2_Tab_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDrawing_v2_Tab_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CDrawing_v2_Tab_WidgetE_t>.strings))
        return static_cast<void*>(this);
    return CAbstract_Simulation_Tab_Widget::qt_metacast(_clname);
}

int CDrawing_v2_Tab_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CAbstract_Simulation_Tab_Widget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CDrawing_v2_Tab_Widget::On_Redraw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
