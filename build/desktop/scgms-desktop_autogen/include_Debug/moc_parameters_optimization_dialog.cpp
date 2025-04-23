/****************************************************************************
** Meta object code from reading C++ file 'parameters_optimization_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../desktop/src/ui/parameters_optimization_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameters_optimization_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN31CParameters_Optimization_DialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CParameters_Optimization_Dialog::qt_create_metaobjectdata<qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CParameters_Optimization_Dialog",
        "Update_Progress_Signal",
        "",
        "On_Solve",
        "On_Stop",
        "On_Update_Progress",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Update_Progress_Signal'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'On_Solve'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Stop'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'On_Update_Progress'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CParameters_Optimization_Dialog, qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CParameters_Optimization_Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>.metaTypes,
    nullptr
} };

void CParameters_Optimization_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CParameters_Optimization_Dialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Update_Progress_Signal(); break;
        case 1: _t->On_Solve(); break;
        case 2: _t->On_Stop(); break;
        case 3: _t->On_Update_Progress(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CParameters_Optimization_Dialog::*)()>(_a, &CParameters_Optimization_Dialog::Update_Progress_Signal, 0))
            return;
    }
}

const QMetaObject *CParameters_Optimization_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CParameters_Optimization_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31CParameters_Optimization_DialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CParameters_Optimization_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CParameters_Optimization_Dialog::Update_Progress_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
