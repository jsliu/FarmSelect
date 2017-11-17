// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// randt
arma::mat randt(int M, int N, int K);
RcppExport SEXP _FarmSelect_randt(SEXP MSEXP, SEXP NSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(randt(M, N, K));
    return rcpp_result_gen;
END_RCPP
}
// Fourier_basis
arma::vec Fourier_basis(float z, int n);
RcppExport SEXP _FarmSelect_Fourier_basis(SEXP zSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(Fourier_basis(z, n));
    return rcpp_result_gen;
END_RCPP
}
// Huber_loss
arma::mat Huber_loss(arma::mat X, arma::mat phi, arma::mat B, float CT, int T);
RcppExport SEXP _FarmSelect_Huber_loss(SEXP XSEXP, SEXP phiSEXP, SEXP BSEXP, SEXP CTSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< float >::type CT(CTSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(Huber_loss(X, phi, B, CT, T));
    return rcpp_result_gen;
END_RCPP
}
// Huber_gradient
arma::mat Huber_gradient(arma::mat X, arma::mat phi, arma::mat B, float CT, int T);
RcppExport SEXP _FarmSelect_Huber_gradient(SEXP XSEXP, SEXP phiSEXP, SEXP BSEXP, SEXP CTSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< float >::type CT(CTSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(Huber_gradient(X, phi, B, CT, T));
    return rcpp_result_gen;
END_RCPP
}
// Huber_descent
arma::mat Huber_descent(arma::mat X, arma::mat phi, arma::mat B, float CT);
RcppExport SEXP _FarmSelect_Huber_descent(SEXP XSEXP, SEXP phiSEXP, SEXP BSEXP, SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< float >::type CT(CTSEXP);
    rcpp_result_gen = Rcpp::wrap(Huber_descent(X, phi, B, CT));
    return rcpp_result_gen;
END_RCPP
}
// Robust_CV
float Robust_CV(arma::mat vx, arma::mat phi);
RcppExport SEXP _FarmSelect_Robust_CV(SEXP vxSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type vx(vxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(Robust_CV(vx, phi));
    return rcpp_result_gen;
END_RCPP
}
// Robust_estimate
arma::mat Robust_estimate(arma::mat X, arma::mat phi, arma::mat B, float CT);
RcppExport SEXP _FarmSelect_Robust_estimate(SEXP XSEXP, SEXP phiSEXP, SEXP BSEXP, SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< float >::type CT(CTSEXP);
    rcpp_result_gen = Rcpp::wrap(Robust_estimate(X, phi, B, CT));
    return rcpp_result_gen;
END_RCPP
}
// Find_factors
arma::mat Find_factors(arma::mat X, int N, int P, int K);
RcppExport SEXP _FarmSelect_Find_factors(SEXP XSEXP, SEXP NSEXP, SEXP PSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(Find_factors(X, N, P, K));
    return rcpp_result_gen;
END_RCPP
}
// Find_Y_star
arma::mat Find_Y_star(arma::mat P_F, arma::mat Y);
RcppExport SEXP _FarmSelect_Find_Y_star(SEXP P_FSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type P_F(P_FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(Find_Y_star(P_F, Y));
    return rcpp_result_gen;
END_RCPP
}
// Find_loading
arma::mat Find_loading(arma::mat P_F, arma::mat X);
RcppExport SEXP _FarmSelect_Find_loading(SEXP P_FSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type P_F(P_FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(Find_loading(P_F, X));
    return rcpp_result_gen;
END_RCPP
}
// Eigen_Decomp
arma::mat Eigen_Decomp(arma::mat M);
RcppExport SEXP _FarmSelect_Eigen_Decomp(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(Eigen_Decomp(M));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FarmSelect_randt", (DL_FUNC) &_FarmSelect_randt, 3},
    {"_FarmSelect_Fourier_basis", (DL_FUNC) &_FarmSelect_Fourier_basis, 2},
    {"_FarmSelect_Huber_loss", (DL_FUNC) &_FarmSelect_Huber_loss, 5},
    {"_FarmSelect_Huber_gradient", (DL_FUNC) &_FarmSelect_Huber_gradient, 5},
    {"_FarmSelect_Huber_descent", (DL_FUNC) &_FarmSelect_Huber_descent, 4},
    {"_FarmSelect_Robust_CV", (DL_FUNC) &_FarmSelect_Robust_CV, 2},
    {"_FarmSelect_Robust_estimate", (DL_FUNC) &_FarmSelect_Robust_estimate, 4},
    {"_FarmSelect_Find_factors", (DL_FUNC) &_FarmSelect_Find_factors, 4},
    {"_FarmSelect_Find_Y_star", (DL_FUNC) &_FarmSelect_Find_Y_star, 2},
    {"_FarmSelect_Find_loading", (DL_FUNC) &_FarmSelect_Find_loading, 2},
    {"_FarmSelect_Eigen_Decomp", (DL_FUNC) &_FarmSelect_Eigen_Decomp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_FarmSelect(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
