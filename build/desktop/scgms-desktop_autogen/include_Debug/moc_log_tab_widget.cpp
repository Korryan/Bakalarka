/****************************************************************************
** Meta object code from reading C++ file 'log_tab_widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/simulation/log_tab_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_tab_widget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto CLog_Subtab_Raw_Widget::qt_create_metaobjectdata<qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CLog_Subtab_Raw_Widget",
        "On_Log_Message",
        "",
        "msg",
        "Slot_Log_Message"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'On_Log_Message'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'Slot_Log_Message'
        QtMocHelpers::SlotData<void(QString)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CLog_Subtab_Raw_Widget, qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CLog_Subtab_Raw_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<CAbstract_Simulation_Tab_Widget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>.metaTypes,
    nullptr
} };

void CLog_Subtab_Raw_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CLog_Subtab_Raw_Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Log_Message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->Slot_Log_Message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CLog_Subtab_Raw_Widget::*)(QString )>(_a, &CLog_Subtab_Raw_Widget::On_Log_Message, 0))
            return;
    }
}

const QMetaObject *CLog_Subtab_Raw_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLog_Subtab_Raw_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22CLog_Subtab_Raw_WidgetE_t>.strings))
        return static_cast<void*>(this);
    return CAbstract_Simulation_Tab_Widget::qt_metacast(_clname);
}

int CLog_Subtab_Raw_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CAbstract_Simulation_Tab_Widget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CLog_Subtab_Raw_Widget::On_Log_Message(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN16CLog_Table_ModelE_t {};
} // unnamed namespace

template <> constexpr inline auto CLog_Table_Model::qt_create_metaobjectdata<qt_meta_tag_ZN16CLog_Table_ModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CLog_Table_Model"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CLog_Table_Model, qt_meta_tag_ZN16CLog_Table_ModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CLog_Table_Model::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CLog_Table_ModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CLog_Table_ModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16CLog_Table_ModelE_t>.metaTypes,
    nullptr
} };

void CLog_Table_Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CLog_Table_Model *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CLog_Table_Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLog_Table_Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CLog_Table_ModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int CLog_Table_Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto CLog_Subtab_Table_Widget::qt_create_metaobjectdata<qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CLog_Subtab_Table_Widget",
        "On_Log_Message",
        "",
        "msg",
        "Slot_Log_Message"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'On_Log_Message'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'Slot_Log_Message'
        QtMocHelpers::SlotData<void(QString)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CLog_Subtab_Table_Widget, qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CLog_Subtab_Table_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<CAbstract_Simulation_Tab_Widget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>.metaTypes,
    nullptr
} };

void CLog_Subtab_Table_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CLog_Subtab_Table_Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Log_Message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->Slot_Log_Message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CLog_Subtab_Table_Widget::*)(QString )>(_a, &CLog_Subtab_Table_Widget::On_Log_Message, 0))
            return;
    }
}

const QMetaObject *CLog_Subtab_Table_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLog_Subtab_Table_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CLog_Subtab_Table_WidgetE_t>.strings))
        return static_cast<void*>(this);
    return CAbstract_Simulation_Tab_Widget::qt_metacast(_clname);
}

int CLog_Subtab_Table_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CAbstract_Simulation_Tab_Widget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CLog_Subtab_Table_Widget::On_Log_Message(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN15CLog_Tab_WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto CLog_Tab_Widget::qt_create_metaobjectdata<qt_meta_tag_ZN15CLog_Tab_WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CLog_Tab_Widget"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CLog_Tab_Widget, qt_meta_tag_ZN15CLog_Tab_WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CLog_Tab_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<CAbstract_Simulation_Tab_Widget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CLog_Tab_WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CLog_Tab_WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15CLog_Tab_WidgetE_t>.metaTypes,
    nullptr
} };

void CLog_Tab_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CLog_Tab_Widget *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CLog_Tab_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLog_Tab_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CLog_Tab_WidgetE_t>.strings))
        return static_cast<void*>(this);
    return CAbstract_Simulation_Tab_Widget::qt_metacast(_clname);
}

int CLog_Tab_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CAbstract_Simulation_Tab_Widget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
