
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef BASE_ROTATIONPY_H
#define BASE_ROTATIONPY_H

#include <Base/PyObjectBase.h>
#include <Base/Rotation.h>
#include <string>

namespace Base
{

//===========================================================================
// RotationPy - Python wrapper
//===========================================================================

/** The python export class for Rotation
 */
class BaseExport RotationPy : public Base::PyObjectBase
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyObject * richCompare(PyObject *v, PyObject *w, int op);
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    RotationPy(Rotation *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~RotationPy();
    

    typedef Rotation* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the invert() method
    static PyObject * staticCallback_invert (PyObject *self, PyObject *args);
    /// implementer for the invert() method
    PyObject*  invert(PyObject *args);
    /// callback for the inverted() method
    static PyObject * staticCallback_inverted (PyObject *self, PyObject *args);
    /// implementer for the inverted() method
    PyObject*  inverted(PyObject *args);
    /// callback for the isSame() method
    static PyObject * staticCallback_isSame (PyObject *self, PyObject *args);
    /// implementer for the isSame() method
    PyObject*  isSame(PyObject *args);
    /// callback for the multiply() method
    static PyObject * staticCallback_multiply (PyObject *self, PyObject *args);
    /// implementer for the multiply() method
    PyObject*  multiply(PyObject *args);
    /// callback for the multVec() method
    static PyObject * staticCallback_multVec (PyObject *self, PyObject *args);
    /// implementer for the multVec() method
    PyObject*  multVec(PyObject *args);
    /// callback for the toEuler() method
    static PyObject * staticCallback_toEuler (PyObject *self, PyObject *args);
    /// implementer for the toEuler() method
    PyObject*  toEuler(PyObject *args);
    /// callback for the isNull() method
    static PyObject * staticCallback_isNull (PyObject *self, PyObject *args);
    /// implementer for the isNull() method
    PyObject*  isNull(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Q attribute
    static PyObject * staticCallback_getQ (PyObject *self, void *closure);
    /// getter for the Q attribute
    Py::Tuple getQ(void) const;
    /// setter callback for the Q attribute
    static int staticCallback_setQ (PyObject *self, PyObject *value, void *closure);
    /// setter for the Q attribute
    void setQ(Py::Tuple arg);
    ///getter callback for the Axis attribute
    static PyObject * staticCallback_getAxis (PyObject *self, void *closure);
    /// getter for the Axis attribute
    Py::Object getAxis(void) const;
    /// setter callback for the Axis attribute
    static int staticCallback_setAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the Axis attribute
    void setAxis(Py::Object arg);
    ///getter callback for the Angle attribute
    static PyObject * staticCallback_getAngle (PyObject *self, void *closure);
    /// getter for the Angle attribute
    Py::Float getAngle(void) const;
    /// setter callback for the Angle attribute
    static int staticCallback_setAngle (PyObject *self, PyObject *value, void *closure);
    /// setter for the Angle attribute
    void setAngle(Py::Float arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Rotation *getRotationPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

			public:
			RotationPy(const Rotation & mat, PyTypeObject *T = &Type)
			:PyObjectBase(new Rotation(mat),T){}
			Rotation value() const
			{ return *(getRotationPtr()); }
		
    //@}
};

}  //namespace Base

#endif  // BASE_ROTATIONPY_H

