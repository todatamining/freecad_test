
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here get lost at the next full rebuild!
// This File is normaly build as an include in GroupExtensionPyImp.cpp! Its not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace App;

/// Type structure of GroupExtensionPy
PyTypeObject GroupExtensionPy::Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,                                                /*ob_size*/
    "App.GroupExtension",     /*tp_name*/
    sizeof(GroupExtensionPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
    0,                                                /*tp_print*/
    __getattr,                                        /*tp_getattr*/
    __setattr,                                        /*tp_setattr*/
    0,                                                /*tp_compare*/
    __repr,                                           /*tp_repr*/
    0,                                                /*tp_as_number*/
    0,                                                /*tp_as_sequence*/
    0,                                                /*tp_as_mapping*/
    0,                                                /*tp_hash*/
    0,                                                /*tp_call */
    0,                                                /*tp_str  */
    0,                                                /*tp_getattro*/
    0,                                                /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    0,                                                /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_HAVE_CLASS,        /*tp_flags */
    "Extension class which allows grouping of document objects",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    App::GroupExtensionPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    App::GroupExtensionPy::GetterSetter,                     /*tp_getset */
    &App::DocumentObjectExtensionPy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    App::GroupExtensionPy::PyMake,/*tp_new */
    0,                                                /*tp_free   Low-level free-memory routine */
    0,                                                /*tp_is_gc  For PyObject_IS_GC */
    0,                                                /*tp_bases */
    0,                                                /*tp_mro    method resolution order */
    0,                                                /*tp_cache */
    0,                                                /*tp_subclasses */
    0,                                                /*tp_weaklist */
    0,                                                /*tp_del */
    0                                                 /*tp_version_tag */
};

/// Methods structure of GroupExtensionPy
PyMethodDef GroupExtensionPy::Methods[] = {
    {"newObject",
        (PyCFunction) staticCallback_newObject,
        METH_VARARGS,
        "Create and add an object with given type and name to the group"
    },
    {"addObject",
        (PyCFunction) staticCallback_addObject,
        METH_VARARGS,
        "Add an object to the group"
    },
    {"removeObject",
        (PyCFunction) staticCallback_removeObject,
        METH_VARARGS,
        "Remove an object from the group"
    },
    {"removeObjectsFromDocument",
        (PyCFunction) staticCallback_removeObjectsFromDocument,
        METH_VARARGS,
        "Remove all child objects from the group and document"
    },
    {"getObject",
        (PyCFunction) staticCallback_getObject,
        METH_VARARGS,
        "Return the object with the given name"
    },
    {"hasObject",
        (PyCFunction) staticCallback_hasObject,
        METH_VARARGS,
        "hasObject(obj, recursive=false)\n                Checks if the group has a given object\n                @param obj        the object to check for.\n                @param recursive  if true check also if the obj is child of some sub group (default is false).\n            "
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of GroupExtensionPy
PyGetSetDef GroupExtensionPy::GetterSetter[] = {
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// newObject() callback and implementer
// PyObject*  GroupExtensionPy::newObject(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_newObject (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->newObject(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// addObject() callback and implementer
// PyObject*  GroupExtensionPy::addObject(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_addObject (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->addObject(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// removeObject() callback and implementer
// PyObject*  GroupExtensionPy::removeObject(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_removeObject (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->removeObject(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// removeObjectsFromDocument() callback and implementer
// PyObject*  GroupExtensionPy::removeObjectsFromDocument(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_removeObjectsFromDocument (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->removeObjectsFromDocument(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// getObject() callback and implementer
// PyObject*  GroupExtensionPy::getObject(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_getObject (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->getObject(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// hasObject() callback and implementer
// PyObject*  GroupExtensionPy::hasObject(PyObject *args){};
// has to be implemented in GroupExtensionPyImp.cpp
PyObject * GroupExtensionPy::staticCallback_hasObject (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<GroupExtensionPy*>(self)->hasObject(args);
        if (ret != 0)
            static_cast<GroupExtensionPy*>(self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
GroupExtensionPy::GroupExtensionPy(GroupExtension *pcObject, PyTypeObject *T)
    : DocumentObjectExtensionPy(static_cast<DocumentObjectExtensionPy::PointerType>(pcObject), T)
{
    
}

PyObject *GroupExtensionPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'GroupExtensionPy'.");
 
    return 0;
}

int GroupExtensionPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
GroupExtensionPy::~GroupExtensionPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// GroupExtensionPy representation
//--------------------------------------------------------------------------
PyObject *GroupExtensionPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// GroupExtensionPy Attributes
//--------------------------------------------------------------------------
PyObject *GroupExtensionPy::_getattr(char *attr)				// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    PyObject *rvalue = Py_FindMethod(Methods, this, attr);
    if (rvalue == NULL)
    {
        PyErr_Clear();
        return DocumentObjectExtensionPy::_getattr(attr);
    }
    else
    {
        return rvalue;
    }
}

int GroupExtensionPy::_setattr(char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for  special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return -1;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    return DocumentObjectExtensionPy::_setattr(attr, value);
}

GroupExtension *GroupExtensionPy::getGroupExtensionPtr(void) const
{
    return static_cast<GroupExtension *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in GroupExtensionPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */



// returns a string which represents the object e.g. when printed in python
std::string GroupExtensionPy::representation(void) const
{
    return std::string("<GroupExtension object>");
}

PyObject* GroupExtensionPy::newObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* GroupExtensionPy::addObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* GroupExtensionPy::removeObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* GroupExtensionPy::removeObjectsFromDocument(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* GroupExtensionPy::getObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* GroupExtensionPy::hasObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



PyObject *GroupExtensionPy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int GroupExtensionPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



