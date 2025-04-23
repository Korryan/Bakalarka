/****************************************************************************
** Meta object code from reading C++ file 'Select_Subject_Panel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/helpers/Select_Subject_Panel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Select_Subject_Panel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21CSelect_Subject_PanelE_t {};
} // unnamed namespace

template <> constexpr inline auto CSelect_Subject_Panel::qt_create_metaobjectdata<qt_meta_tag_ZN21CSelect_Subject_PanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSelect_Subject_Panel",
        "On_Radio_Button_Selected",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'On_Radio_Button_Selected'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CSelect_Subject_Panel, qt_meta_tag_ZN21CSelect_Subject_PanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSelect_Subject_Panel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21CSelect_Subject_PanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21CSelect_Subject_PanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21CSelect_Subject_PanelE_t>.metaTypes,
    nullptr
} };

void CSelect_Subject_Panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSelect_Subject_Panel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->On_Radio_Button_Selected(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CSelect_Subject_Panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSelect_Subject_Panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21CSelect_Subject_PanelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "filter_config_window::CContainer_Edit"))
        return static_cast< filter_config_window::CContainer_Edit*>(this);
    return QWidget::qt_metacast(_clname);
}

int CSelect_Subject_Panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
