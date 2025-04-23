/****************************************************************************
** Meta object code from reading C++ file 'Select_Time_Segment_Id_Panel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/helpers/Select_Time_Segment_Id_Panel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Select_Time_Segment_Id_Panel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t {};
} // unnamed namespace

template <> constexpr inline auto CSelect_Time_Segment_Id_Panel::qt_create_metaobjectdata<qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSelect_Time_Segment_Id_Panel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CSelect_Time_Segment_Id_Panel, qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSelect_Time_Segment_Id_Panel::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>.metaTypes,
    nullptr
} };

void CSelect_Time_Segment_Id_Panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSelect_Time_Segment_Id_Panel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CSelect_Time_Segment_Id_Panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSelect_Time_Segment_Id_Panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29CSelect_Time_Segment_Id_PanelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "filter_config_window::CContainer_Edit"))
        return static_cast< filter_config_window::CContainer_Edit*>(this);
    return QTableView::qt_metacast(_clname);
}

int CSelect_Time_Segment_Id_Panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
