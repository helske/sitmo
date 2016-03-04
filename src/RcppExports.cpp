// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// test_sitmo
arma::vec test_sitmo(unsigned int n, double lambda, arma::vec seeds);
RcppExport SEXP sitmo_test_sitmo(SEXP nSEXP, SEXP lambdaSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type seeds(seedsSEXP);
    __result = Rcpp::wrap(test_sitmo(n, lambda, seeds));
    return __result;
END_RCPP
}