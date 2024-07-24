/* Generated by Cython 3.0.10 */

#ifndef __PYX_HAVE_API__vapoursynth
#define __PYX_HAVE_API__vapoursynth
#ifdef __MINGW64__
#define MS_WIN64
#endif
#include "Python.h"
#include "vapoursynth.h"

static int (*__pyx_api_f_11vapoursynth_vpy4_createScript)(VSScript *) = 0;
#define vpy4_createScript __pyx_api_f_11vapoursynth_vpy4_createScript
static int (*__pyx_api_f_11vapoursynth_vpy4_evaluateBuffer)(VSScript *, char const *, char const *) = 0;
#define vpy4_evaluateBuffer __pyx_api_f_11vapoursynth_vpy4_evaluateBuffer
static int (*__pyx_api_f_11vapoursynth_vpy4_evaluateFile)(VSScript *, char const *) = 0;
#define vpy4_evaluateFile __pyx_api_f_11vapoursynth_vpy4_evaluateFile
static void (*__pyx_api_f_11vapoursynth_vpy4_freeScript)(VSScript *) = 0;
#define vpy4_freeScript __pyx_api_f_11vapoursynth_vpy4_freeScript
static char const *(*__pyx_api_f_11vapoursynth_vpy4_getError)(VSScript *) = 0;
#define vpy4_getError __pyx_api_f_11vapoursynth_vpy4_getError
static VSNode *(*__pyx_api_f_11vapoursynth_vpy4_getOutput)(VSScript *, int) = 0;
#define vpy4_getOutput __pyx_api_f_11vapoursynth_vpy4_getOutput
static VSNode *(*__pyx_api_f_11vapoursynth_vpy4_getAlphaOutput)(VSScript *, int) = 0;
#define vpy4_getAlphaOutput __pyx_api_f_11vapoursynth_vpy4_getAlphaOutput
static int (*__pyx_api_f_11vapoursynth_vpy4_getAltOutputMode)(VSScript *, int) = 0;
#define vpy4_getAltOutputMode __pyx_api_f_11vapoursynth_vpy4_getAltOutputMode
static int (*__pyx_api_f_11vapoursynth_vpy4_getAvailableOutputNodes)(VSScript *, int, int *) = 0;
#define vpy4_getAvailableOutputNodes __pyx_api_f_11vapoursynth_vpy4_getAvailableOutputNodes
static VSCore *(*__pyx_api_f_11vapoursynth_vpy4_getCore)(VSScript *) = 0;
#define vpy4_getCore __pyx_api_f_11vapoursynth_vpy4_getCore
static VSAPI const *(*__pyx_api_f_11vapoursynth_vpy4_getVSAPI)(int) = 0;
#define vpy4_getVSAPI __pyx_api_f_11vapoursynth_vpy4_getVSAPI
static int (*__pyx_api_f_11vapoursynth_vpy4_getVariable)(VSScript *, char const *, VSMap *) = 0;
#define vpy4_getVariable __pyx_api_f_11vapoursynth_vpy4_getVariable
static int (*__pyx_api_f_11vapoursynth_vpy4_setVariables)(VSScript *, VSMap const *) = 0;
#define vpy4_setVariables __pyx_api_f_11vapoursynth_vpy4_setVariables
static void (*__pyx_api_f_11vapoursynth_vpy4_clearEnvironment)(VSScript *) = 0;
#define vpy4_clearEnvironment __pyx_api_f_11vapoursynth_vpy4_clearEnvironment
static int (*__pyx_api_f_11vapoursynth_vpy4_initVSScript)(void) = 0;
#define vpy4_initVSScript __pyx_api_f_11vapoursynth_vpy4_initVSScript
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        /*
        PyErr_Format(PyExc_ImportError,
            "%.200s does not export expected C function %.200s",
                PyModule_GetName(module), funcname);
                */
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000
    if (!PyCapsule_IsValid(cobj, sig)) {
        /*
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
             */
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        /*
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, desc);
             */
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif


static int import_vapoursynth(void) {
  PyObject *module = 0;
  module = PyImport_ImportModule("vapoursynth");
  if (!module) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_createScript", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_createScript, "int (VSScript *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_evaluateBuffer", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_evaluateBuffer, "int (VSScript *, char const *, char const *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_evaluateFile", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_evaluateFile, "int (VSScript *, char const *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_freeScript", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_freeScript, "void (VSScript *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getError", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getError, "char const *(VSScript *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getOutput", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getOutput, "VSNode *(VSScript *, int)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getAlphaOutput", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getAlphaOutput, "VSNode *(VSScript *, int)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getAltOutputMode", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getAltOutputMode, "int (VSScript *, int)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getAvailableOutputNodes", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getAvailableOutputNodes, "int (VSScript *, int, int *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getCore", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getCore, "VSCore *(VSScript *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getVSAPI", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getVSAPI, "VSAPI const *(int)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_getVariable", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_getVariable, "int (VSScript *, char const *, VSMap *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_setVariables", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_setVariables, "int (VSScript *, VSMap const *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_clearEnvironment", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_clearEnvironment, "void (VSScript *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "vpy4_initVSScript", (void (**)(void))&__pyx_api_f_11vapoursynth_vpy4_initVSScript, "int (void)") < 0) goto bad;
  Py_DECREF(module); module = 0;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__vapoursynth */
