
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef GUI_WORKBENCHPY_H
#define GUI_WORKBENCHPY_H

#include <Base/BaseClassPy.h>
#include <Gui/Workbench.h>
#include <string>

namespace Gui
{

//===========================================================================
// WorkbenchPy - Python wrapper
//===========================================================================

/** The python export class for Workbench
 */
class GuiExport WorkbenchPy : public Base::BaseClassPy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    WorkbenchPy(Workbench *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~WorkbenchPy();
    

    typedef Workbench* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the name() method
    static PyObject * staticCallback_name (PyObject *self, PyObject *args);
    /// implementer for the name() method
    PyObject*  name(PyObject *args);
    /// callback for the activate() method
    static PyObject * staticCallback_activate (PyObject *self, PyObject *args);
    /// implementer for the activate() method
    PyObject*  activate(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Workbench *getWorkbenchPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Gui

#endif  // GUI_WORKBENCHPY_H


