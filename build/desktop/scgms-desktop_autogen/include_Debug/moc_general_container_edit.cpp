/****************************************************************************
** Meta object code from reading C++ file 'general_container_edit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/helpers/general_container_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'general_container_edit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t {};
} // unnamed namespace

template <> constexpr inline auto filter_config_window::CInteger_Container_Edit::qt_create_metaobjectdata<qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "filter_config_window::CInteger_Container_Edit"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CInteger_Container_Edit, qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject filter_config_window::CInteger_Container_Edit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>.metaTypes,
    nullptr
} };

void filter_config_window::CInteger_Container_Edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CInteger_Container_Edit *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *filter_config_window::CInteger_Container_Edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *filter_config_window::CInteger_Container_Edit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20filter_config_window23CInteger_Container_EditE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "filter_config_window::CContainer_Edit"))
        return static_cast< filter_config_window::CContainer_Edit*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int filter_config_window::CInteger_Container_Edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
