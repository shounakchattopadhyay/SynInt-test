// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// random_gamma
double random_gamma(double a);
RcppExport SEXP _SynIntTest_random_gamma(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(random_gamma(a));
    return rcpp_result_gen;
END_RCPP
}
// rejection_sampler
arma::vec rejection_sampler(arma::mat X1, arma::mat X2, double pen_param, double delta_sq, double tau1sq, double tau2sq, arma::mat cov1, arma::mat cov2);
RcppExport SEXP _SynIntTest_rejection_sampler(SEXP X1SEXP, SEXP X2SEXP, SEXP pen_paramSEXP, SEXP delta_sqSEXP, SEXP tau1sqSEXP, SEXP tau2sqSEXP, SEXP cov1SEXP, SEXP cov2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X1(X1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< double >::type pen_param(pen_paramSEXP);
    Rcpp::traits::input_parameter< double >::type delta_sq(delta_sqSEXP);
    Rcpp::traits::input_parameter< double >::type tau1sq(tau1sqSEXP);
    Rcpp::traits::input_parameter< double >::type tau2sq(tau2sqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov1(cov1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov2(cov2SEXP);
    rcpp_result_gen = Rcpp::wrap(rejection_sampler(X1, X2, pen_param, delta_sq, tau1sq, tau2sq, cov1, cov2));
    return rcpp_result_gen;
END_RCPP
}
// sigmasq_sampler
double sigmasq_sampler(arma::vec R, int n);
RcppExport SEXP _SynIntTest_sigmasq_sampler(SEXP RSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmasq_sampler(R, n));
    return rcpp_result_gen;
END_RCPP
}
// maineffects_sampler
arma::vec maineffects_sampler(arma::vec R, arma::mat X, arma::mat Psi_inv, double sigma_sq);
RcppExport SEXP _SynIntTest_maineffects_sampler(SEXP RSEXP, SEXP XSEXP, SEXP Psi_invSEXP, SEXP sigma_sqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi_inv(Psi_invSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_sq(sigma_sqSEXP);
    rcpp_result_gen = Rcpp::wrap(maineffects_sampler(R, X, Psi_inv, sigma_sq));
    return rcpp_result_gen;
END_RCPP
}
// pot_MALA
double pot_MALA(arma::vec R, arma::mat X1, arma::mat X2, arma::vec param, arma::mat S1, arma::mat S2, double sigma_sq, double delta_sq, arma::vec rej_pen);
RcppExport SEXP _SynIntTest_pot_MALA(SEXP RSEXP, SEXP X1SEXP, SEXP X2SEXP, SEXP paramSEXP, SEXP S1SEXP, SEXP S2SEXP, SEXP sigma_sqSEXP, SEXP delta_sqSEXP, SEXP rej_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X1(X1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type param(paramSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma_sq(sigma_sqSEXP);
    Rcpp::traits::input_parameter< double >::type delta_sq(delta_sqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rej_pen(rej_penSEXP);
    rcpp_result_gen = Rcpp::wrap(pot_MALA(R, X1, X2, param, S1, S2, sigma_sq, delta_sq, rej_pen));
    return rcpp_result_gen;
END_RCPP
}
// grad_MALA
arma::vec grad_MALA(arma::vec R, arma::mat X1, arma::mat X2, arma::vec param, arma::mat S1, arma::mat S2, double sigma_sq, double delta_sq, arma::vec rej_pen);
RcppExport SEXP _SynIntTest_grad_MALA(SEXP RSEXP, SEXP X1SEXP, SEXP X2SEXP, SEXP paramSEXP, SEXP S1SEXP, SEXP S2SEXP, SEXP sigma_sqSEXP, SEXP delta_sqSEXP, SEXP rej_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X1(X1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type param(paramSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma_sq(sigma_sqSEXP);
    Rcpp::traits::input_parameter< double >::type delta_sq(delta_sqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rej_pen(rej_penSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_MALA(R, X1, X2, param, S1, S2, sigma_sq, delta_sq, rej_pen));
    return rcpp_result_gen;
END_RCPP
}
// sq_sampler
Rcpp::List sq_sampler(arma::vec R, arma::mat X1, arma::mat X2, arma::mat S1, arma::mat S2, double sigma_sq, double delta_sq, arma::vec old_param, double eps_MALA, arma::mat precond_mat, arma::mat precond_mat_inv, int L_HMC, arma::vec rej_pen);
RcppExport SEXP _SynIntTest_sq_sampler(SEXP RSEXP, SEXP X1SEXP, SEXP X2SEXP, SEXP S1SEXP, SEXP S2SEXP, SEXP sigma_sqSEXP, SEXP delta_sqSEXP, SEXP old_paramSEXP, SEXP eps_MALASEXP, SEXP precond_matSEXP, SEXP precond_mat_invSEXP, SEXP L_HMCSEXP, SEXP rej_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X1(X1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma_sq(sigma_sqSEXP);
    Rcpp::traits::input_parameter< double >::type delta_sq(delta_sqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type old_param(old_paramSEXP);
    Rcpp::traits::input_parameter< double >::type eps_MALA(eps_MALASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type precond_mat(precond_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type precond_mat_inv(precond_mat_invSEXP);
    Rcpp::traits::input_parameter< int >::type L_HMC(L_HMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rej_pen(rej_penSEXP);
    rcpp_result_gen = Rcpp::wrap(sq_sampler(R, X1, X2, S1, S2, sigma_sq, delta_sq, old_param, eps_MALA, precond_mat, precond_mat_inv, L_HMC, rej_pen));
    return rcpp_result_gen;
END_RCPP
}
// SIDsampler_draws_adaptive_optimized
Rcpp::List SIDsampler_draws_adaptive_optimized(arma::vec y, arma::mat ME_mat, arma::cube IE_list, arma::vec eps_MALA, double c_HMC, int L_HMC, int MC, int n, int p, int p_cov, arma::mat SigmaME, arma::mat SigmaME_inv, arma::mat SigmaInt, arma::mat SigmaInt_inv, int ME_nspl, int IE_nspl, int cutoff, arma::mat map_k_to_uv, arma::vec zero_ind, double accept_low, double accept_high, double accept_scale, double a_lamb, double b_lamb, Rcpp::List init_values, int precond);
RcppExport SEXP _SynIntTest_SIDsampler_draws_adaptive_optimized(SEXP ySEXP, SEXP ME_matSEXP, SEXP IE_listSEXP, SEXP eps_MALASEXP, SEXP c_HMCSEXP, SEXP L_HMCSEXP, SEXP MCSEXP, SEXP nSEXP, SEXP pSEXP, SEXP p_covSEXP, SEXP SigmaMESEXP, SEXP SigmaME_invSEXP, SEXP SigmaIntSEXP, SEXP SigmaInt_invSEXP, SEXP ME_nsplSEXP, SEXP IE_nsplSEXP, SEXP cutoffSEXP, SEXP map_k_to_uvSEXP, SEXP zero_indSEXP, SEXP accept_lowSEXP, SEXP accept_highSEXP, SEXP accept_scaleSEXP, SEXP a_lambSEXP, SEXP b_lambSEXP, SEXP init_valuesSEXP, SEXP precondSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ME_mat(ME_matSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type IE_list(IE_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eps_MALA(eps_MALASEXP);
    Rcpp::traits::input_parameter< double >::type c_HMC(c_HMCSEXP);
    Rcpp::traits::input_parameter< int >::type L_HMC(L_HMCSEXP);
    Rcpp::traits::input_parameter< int >::type MC(MCSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type p_cov(p_covSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaME(SigmaMESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaME_inv(SigmaME_invSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaInt(SigmaIntSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaInt_inv(SigmaInt_invSEXP);
    Rcpp::traits::input_parameter< int >::type ME_nspl(ME_nsplSEXP);
    Rcpp::traits::input_parameter< int >::type IE_nspl(IE_nsplSEXP);
    Rcpp::traits::input_parameter< int >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type map_k_to_uv(map_k_to_uvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type zero_ind(zero_indSEXP);
    Rcpp::traits::input_parameter< double >::type accept_low(accept_lowSEXP);
    Rcpp::traits::input_parameter< double >::type accept_high(accept_highSEXP);
    Rcpp::traits::input_parameter< double >::type accept_scale(accept_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type a_lamb(a_lambSEXP);
    Rcpp::traits::input_parameter< double >::type b_lamb(b_lambSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type init_values(init_valuesSEXP);
    Rcpp::traits::input_parameter< int >::type precond(precondSEXP);
    rcpp_result_gen = Rcpp::wrap(SIDsampler_draws_adaptive_optimized(y, ME_mat, IE_list, eps_MALA, c_HMC, L_HMC, MC, n, p, p_cov, SigmaME, SigmaME_inv, SigmaInt, SigmaInt_inv, ME_nspl, IE_nspl, cutoff, map_k_to_uv, zero_ind, accept_low, accept_high, accept_scale, a_lamb, b_lamb, init_values, precond));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SynIntTest_random_gamma", (DL_FUNC) &_SynIntTest_random_gamma, 1},
    {"_SynIntTest_rejection_sampler", (DL_FUNC) &_SynIntTest_rejection_sampler, 8},
    {"_SynIntTest_sigmasq_sampler", (DL_FUNC) &_SynIntTest_sigmasq_sampler, 2},
    {"_SynIntTest_maineffects_sampler", (DL_FUNC) &_SynIntTest_maineffects_sampler, 4},
    {"_SynIntTest_pot_MALA", (DL_FUNC) &_SynIntTest_pot_MALA, 9},
    {"_SynIntTest_grad_MALA", (DL_FUNC) &_SynIntTest_grad_MALA, 9},
    {"_SynIntTest_sq_sampler", (DL_FUNC) &_SynIntTest_sq_sampler, 13},
    {"_SynIntTest_SIDsampler_draws_adaptive_optimized", (DL_FUNC) &_SynIntTest_SIDsampler_draws_adaptive_optimized, 26},
    {NULL, NULL, 0}
};

RcppExport void R_init_SynIntTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
