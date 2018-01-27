// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cholC
arma::mat cholC(arma::mat x);
RcppExport SEXP _GauPro_cholC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cholC(x));
    return rcpp_result_gen;
END_RCPP
}
// solveC
arma::mat solveC(arma::mat A, arma::vec b);
RcppExport SEXP _GauPro_solveC(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(solveC(A, b));
    return rcpp_result_gen;
END_RCPP
}
// corr_exponential_matrixC
NumericMatrix corr_exponential_matrixC(NumericMatrix x, NumericMatrix y, NumericVector theta);
RcppExport SEXP _GauPro_corr_exponential_matrixC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_exponential_matrixC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_exponential_matrix_symC
NumericMatrix corr_exponential_matrix_symC(NumericMatrix x, NumericVector theta);
RcppExport SEXP _GauPro_corr_exponential_matrix_symC(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_exponential_matrix_symC(x, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_exponential_matrixvecC
NumericVector corr_exponential_matrixvecC(NumericMatrix x, NumericVector y, NumericVector theta);
RcppExport SEXP _GauPro_corr_exponential_matrixvecC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_exponential_matrixvecC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_gauss_dCdX
arma::cube corr_gauss_dCdX(arma::mat XX, arma::mat X, arma::vec theta, double s2);
RcppExport SEXP _GauPro_corr_gauss_dCdX(SEXP XXSEXP, SEXP XSEXP, SEXP thetaSEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(corr_gauss_dCdX(XX, X, theta, s2));
    return rcpp_result_gen;
END_RCPP
}
// corr_gauss_matrixC
NumericMatrix corr_gauss_matrixC(NumericMatrix x, NumericMatrix y, NumericVector theta);
RcppExport SEXP _GauPro_corr_gauss_matrixC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_gauss_matrixC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_gauss_matrix_symC
NumericMatrix corr_gauss_matrix_symC(NumericMatrix x, NumericVector theta);
RcppExport SEXP _GauPro_corr_gauss_matrix_symC(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_gauss_matrix_symC(x, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_gauss_matrixvecC
NumericVector corr_gauss_matrixvecC(NumericMatrix x, NumericVector y, NumericVector theta);
RcppExport SEXP _GauPro_corr_gauss_matrixvecC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_gauss_matrixvecC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_gauss_matrix_sym_armaC
arma::mat corr_gauss_matrix_sym_armaC(arma::mat x, arma::vec theta);
RcppExport SEXP _GauPro_corr_gauss_matrix_sym_armaC(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_gauss_matrix_sym_armaC(x, theta));
    return rcpp_result_gen;
END_RCPP
}
// kernel_gauss_dC
arma::cube kernel_gauss_dC(arma::mat x, arma::vec theta, arma::mat C_nonug, bool s2_est, bool beta_est, int lenparams_D, double s2_nug);
RcppExport SEXP _GauPro_kernel_gauss_dC(SEXP xSEXP, SEXP thetaSEXP, SEXP C_nonugSEXP, SEXP s2_estSEXP, SEXP beta_estSEXP, SEXP lenparams_DSEXP, SEXP s2_nugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C_nonug(C_nonugSEXP);
    Rcpp::traits::input_parameter< bool >::type s2_est(s2_estSEXP);
    Rcpp::traits::input_parameter< bool >::type beta_est(beta_estSEXP);
    Rcpp::traits::input_parameter< int >::type lenparams_D(lenparams_DSEXP);
    Rcpp::traits::input_parameter< double >::type s2_nug(s2_nugSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_gauss_dC(x, theta, C_nonug, s2_est, beta_est, lenparams_D, s2_nug));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern32_matrixC
NumericMatrix corr_matern32_matrixC(NumericMatrix x, NumericMatrix y, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern32_matrixC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern32_matrixC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern32_matrix_symC
NumericMatrix corr_matern32_matrix_symC(NumericMatrix x, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern32_matrix_symC(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern32_matrix_symC(x, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern32_matrixvecC
NumericVector corr_matern32_matrixvecC(NumericMatrix x, NumericVector y, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern32_matrixvecC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern32_matrixvecC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern52_matrixC
NumericMatrix corr_matern52_matrixC(NumericMatrix x, NumericMatrix y, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern52_matrixC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern52_matrixC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern52_matrix_symC
NumericMatrix corr_matern52_matrix_symC(NumericMatrix x, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern52_matrix_symC(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern52_matrix_symC(x, theta));
    return rcpp_result_gen;
END_RCPP
}
// corr_matern52_matrixvecC
NumericVector corr_matern52_matrixvecC(NumericMatrix x, NumericVector y, NumericVector theta);
RcppExport SEXP _GauPro_corr_matern52_matrixvecC(SEXP xSEXP, SEXP ySEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_matern52_matrixvecC(x, y, theta));
    return rcpp_result_gen;
END_RCPP
}
// deviance_part
double deviance_part(arma::vec theta, double nug, arma::mat X, arma::mat Z, arma::mat Kinv);
RcppExport SEXP _GauPro_deviance_part(SEXP thetaSEXP, SEXP nugSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KinvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type nug(nugSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_part(theta, nug, X, Z, Kinv));
    return rcpp_result_gen;
END_RCPP
}
// devianceC
double devianceC(arma::vec theta, double nug, arma::mat X, arma::mat Z, arma::mat K);
RcppExport SEXP _GauPro_devianceC(SEXP thetaSEXP, SEXP nugSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type nug(nugSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(devianceC(theta, nug, X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// deviance_fngr_theta
arma::vec deviance_fngr_theta(arma::mat X, arma::vec Z, arma::mat K);
RcppExport SEXP _GauPro_deviance_fngr_theta(SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_fngr_theta(X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// deviance_fngr_nug
arma::vec deviance_fngr_nug(arma::mat X, arma::vec Z, arma::mat K);
RcppExport SEXP _GauPro_deviance_fngr_nug(SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_fngr_nug(X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// deviance_fngr_joint
arma::vec deviance_fngr_joint(arma::mat X, arma::mat Z, arma::mat K);
RcppExport SEXP _GauPro_deviance_fngr_joint(SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_fngr_joint(X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// deviance_grad_theta
arma::vec deviance_grad_theta(arma::mat X, arma::mat K, arma::mat Kinv, arma::vec y);
RcppExport SEXP _GauPro_deviance_grad_theta(SEXP XSEXP, SEXP KSEXP, SEXP KinvSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_grad_theta(X, K, Kinv, y));
    return rcpp_result_gen;
END_RCPP
}
// deviance_grad_nug
double deviance_grad_nug(arma::mat X, arma::mat K, arma::mat Kinv, arma::vec y);
RcppExport SEXP _GauPro_deviance_grad_nug(SEXP XSEXP, SEXP KSEXP, SEXP KinvSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_grad_nug(X, K, Kinv, y));
    return rcpp_result_gen;
END_RCPP
}
// deviance_grad_joint
arma::vec deviance_grad_joint(arma::mat X, arma::mat K, arma::mat Kinv, arma::vec y);
RcppExport SEXP _GauPro_deviance_grad_joint(SEXP XSEXP, SEXP KSEXP, SEXP KinvSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(deviance_grad_joint(X, K, Kinv, y));
    return rcpp_result_gen;
END_RCPP
}
// Gaussian_deviance_part
double Gaussian_deviance_part(arma::vec theta, double nug, arma::mat X, arma::mat Z, arma::mat Kinv);
RcppExport SEXP _GauPro_Gaussian_deviance_part(SEXP thetaSEXP, SEXP nugSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KinvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type nug(nugSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    rcpp_result_gen = Rcpp::wrap(Gaussian_deviance_part(theta, nug, X, Z, Kinv));
    return rcpp_result_gen;
END_RCPP
}
// Gaussian_devianceC
double Gaussian_devianceC(arma::vec theta, double nug, arma::mat X, arma::mat Z);
RcppExport SEXP _GauPro_Gaussian_devianceC(SEXP thetaSEXP, SEXP nugSEXP, SEXP XSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type nug(nugSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(Gaussian_devianceC(theta, nug, X, Z));
    return rcpp_result_gen;
END_RCPP
}
// Gaussian_hessianCC
arma::mat Gaussian_hessianCC(arma::vec XX, arma::mat X, arma::vec Z, arma::mat Kinv, double mu_hat, arma::vec theta);
RcppExport SEXP _GauPro_Gaussian_hessianCC(SEXP XXSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KinvSEXP, SEXP mu_hatSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< double >::type mu_hat(mu_hatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(Gaussian_hessianCC(XX, X, Z, Kinv, mu_hat, theta));
    return rcpp_result_gen;
END_RCPP
}
// gradfuncarray
arma::vec gradfuncarray(arma::cube dC_dparams, arma::mat Cinv, arma::vec Cinv_yminusmu);
RcppExport SEXP _GauPro_gradfuncarray(SEXP dC_dparamsSEXP, SEXP CinvSEXP, SEXP Cinv_yminusmuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type dC_dparams(dC_dparamsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Cinv(CinvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Cinv_yminusmu(Cinv_yminusmuSEXP);
    rcpp_result_gen = Rcpp::wrap(gradfuncarray(dC_dparams, Cinv, Cinv_yminusmu));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _GauPro_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// pred_meanC
arma::vec pred_meanC(arma::mat XX, arma::mat kx_xx, double mu_hat, arma::mat Kinv, arma::mat Z);
RcppExport SEXP _GauPro_pred_meanC(SEXP XXSEXP, SEXP kx_xxSEXP, SEXP mu_hatSEXP, SEXP KinvSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kx_xx(kx_xxSEXP);
    Rcpp::traits::input_parameter< double >::type mu_hat(mu_hatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_meanC(XX, kx_xx, mu_hat, Kinv, Z));
    return rcpp_result_gen;
END_RCPP
}
// pred_var
arma::vec pred_var(arma::mat XX, arma::mat kxx, arma::mat kx_xx, double s2_hat, arma::mat Kinv, arma::mat Z);
RcppExport SEXP _GauPro_pred_var(SEXP XXSEXP, SEXP kxxSEXP, SEXP kx_xxSEXP, SEXP s2_hatSEXP, SEXP KinvSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kxx(kxxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kx_xx(kx_xxSEXP);
    Rcpp::traits::input_parameter< double >::type s2_hat(s2_hatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_var(XX, kxx, kx_xx, s2_hat, Kinv, Z));
    return rcpp_result_gen;
END_RCPP
}
// pred_cov
arma::mat pred_cov(arma::mat XX, arma::mat kxx, arma::mat kx_xx, double s2_hat, arma::mat Kinv, arma::mat Z);
RcppExport SEXP _GauPro_pred_cov(SEXP XXSEXP, SEXP kxxSEXP, SEXP kx_xxSEXP, SEXP s2_hatSEXP, SEXP KinvSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kxx(kxxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kx_xx(kx_xxSEXP);
    Rcpp::traits::input_parameter< double >::type s2_hat(s2_hatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_cov(XX, kxx, kx_xx, s2_hat, Kinv, Z));
    return rcpp_result_gen;
END_RCPP
}
// pred_meanC_mumat
arma::vec pred_meanC_mumat(arma::mat XX, arma::mat kx_xx, arma::mat mu_hatX, arma::mat mu_hatXX, arma::mat Kinv, arma::mat Z);
RcppExport SEXP _GauPro_pred_meanC_mumat(SEXP XXSEXP, SEXP kx_xxSEXP, SEXP mu_hatXSEXP, SEXP mu_hatXXSEXP, SEXP KinvSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kx_xx(kx_xxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_hatX(mu_hatXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_hatXX(mu_hatXXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Kinv(KinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_meanC_mumat(XX, kx_xx, mu_hatX, mu_hatXX, Kinv, Z));
    return rcpp_result_gen;
END_RCPP
}
