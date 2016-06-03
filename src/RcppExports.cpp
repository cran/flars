// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <Rmath.h>
#include <RcppEigen.h>

// [[Rcpp::depends(RcppEigen)]]

using Eigen::Map;                 
using Eigen::MatrixXd;            
using Eigen::VectorXd;            
using Eigen::SelfAdjointEigenSolver;
using Eigen::GeneralizedSelfAdjointEigenSolver;
using Eigen::MatrixXi;
using Eigen::Lower;
using Eigen::ArrayXd;
using namespace Rcpp;
using namespace Eigen;


// FccaXYdir0
List FccaXYdir0(List Lx, List Lp, List LPhi, NumericVector resp, VectorXd l1, VectorXd l2, int cv = 1);
RcppExport SEXP flars_FccaXYdir0(SEXP LxSEXP, SEXP LpSEXP, SEXP LPhiSEXP, SEXP respSEXP, SEXP l1SEXP, SEXP l2SEXP, SEXP cvSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type Lx(LxSEXP );
        Rcpp::traits::input_parameter< List >::type Lp(LpSEXP );
        Rcpp::traits::input_parameter< List >::type LPhi(LPhiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type resp(respSEXP );
        Rcpp::traits::input_parameter< VectorXd >::type l1(l1SEXP );
        Rcpp::traits::input_parameter< VectorXd >::type l2(l2SEXP );
        Rcpp::traits::input_parameter< int >::type cv(cvSEXP );
        List __result = FccaXYdir0(Lx, Lp, LPhi, resp, l1, l2, cv);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// FccaXYdir
VectorXd FccaXYdir(List Lx, List Lp, List LPhi, NumericVector resp, VectorXd l1, VectorXd l2, int cv = 1);
RcppExport SEXP flars_FccaXYdir(SEXP LxSEXP, SEXP LpSEXP, SEXP LPhiSEXP, SEXP respSEXP, SEXP l1SEXP, SEXP l2SEXP, SEXP cvSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type Lx(LxSEXP );
        Rcpp::traits::input_parameter< List >::type Lp(LpSEXP );
        Rcpp::traits::input_parameter< List >::type LPhi(LPhiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type resp(respSEXP );
        Rcpp::traits::input_parameter< VectorXd >::type l1(l1SEXP );
        Rcpp::traits::input_parameter< VectorXd >::type l2(l2SEXP );
        Rcpp::traits::input_parameter< int >::type cv(cvSEXP );
        VectorXd __result = FccaXYdir(Lx, Lp, LPhi, resp, l1, l2, cv);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}