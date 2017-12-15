#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP BClustLonG_calSim(SEXP);
extern SEXP BClustLonG_dmvnrmArma(SEXP, SEXP, SEXP, SEXP);
extern SEXP BClustLonG_mvrnormArma(SEXP, SEXP, SEXP);
extern SEXP BClustLonG_myc(SEXP, SEXP);
extern SEXP BClustLonG_myfind(SEXP, SEXP);
extern SEXP BClustLonG_polyurncppBoth(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP BClustLonG_polyurncppInt(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP BClustLonG_samLamV2Cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP BClustLonG_stlSort(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"BClustLonG_calSim",         (DL_FUNC) &BClustLonG_calSim,          1},
    {"BClustLonG_dmvnrmArma",     (DL_FUNC) &BClustLonG_dmvnrmArma,      4},
    {"BClustLonG_mvrnormArma",    (DL_FUNC) &BClustLonG_mvrnormArma,     3},
    {"BClustLonG_myc",            (DL_FUNC) &BClustLonG_myc,             2},
    {"BClustLonG_myfind",         (DL_FUNC) &BClustLonG_myfind,          2},
    {"BClustLonG_polyurncppBoth", (DL_FUNC) &BClustLonG_polyurncppBoth, 14},
    {"BClustLonG_polyurncppInt",  (DL_FUNC) &BClustLonG_polyurncppInt,   8},
    {"BClustLonG_samLamV2Cpp",    (DL_FUNC) &BClustLonG_samLamV2Cpp,     6},
    {"BClustLonG_stlSort",        (DL_FUNC) &BClustLonG_stlSort,         1},
    {NULL, NULL, 0}
};

void R_init_BClustLonG(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

