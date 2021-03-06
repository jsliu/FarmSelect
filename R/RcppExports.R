# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

randt <- function(M, N, K) {
    .Call('_FarmSelect_randt', PACKAGE = 'FarmSelect', M, N, K)
}

Fourier_basis <- function(z, n) {
    .Call('_FarmSelect_Fourier_basis', PACKAGE = 'FarmSelect', z, n)
}

Huber_loss <- function(X, phi, B, CT, T) {
    .Call('_FarmSelect_Huber_loss', PACKAGE = 'FarmSelect', X, phi, B, CT, T)
}

Huber_gradient <- function(X, phi, B, CT, T) {
    .Call('_FarmSelect_Huber_gradient', PACKAGE = 'FarmSelect', X, phi, B, CT, T)
}

Huber_descent <- function(X, phi, B, CT) {
    .Call('_FarmSelect_Huber_descent', PACKAGE = 'FarmSelect', X, phi, B, CT)
}

Robust_CV <- function(vx, phi) {
    .Call('_FarmSelect_Robust_CV', PACKAGE = 'FarmSelect', vx, phi)
}

Robust_estimate <- function(X, phi, B, CT) {
    .Call('_FarmSelect_Robust_estimate', PACKAGE = 'FarmSelect', X, phi, B, CT)
}

mu_robust_F_noCV <- function(X, phi, tau) {
    .Call('_FarmSelect_mu_robust_F_noCV', PACKAGE = 'FarmSelect', X, phi, tau)
}

mu_robust_F <- function(X, phi) {
    .Call('_FarmSelect_mu_robust_F', PACKAGE = 'FarmSelect', X, phi)
}

Cov_Huber <- function(X, phi) {
    .Call('_FarmSelect_Cov_Huber', PACKAGE = 'FarmSelect', X, phi)
}

Cov_Huber_tune <- function(X, tau) {
    .Call('_FarmSelect_Cov_Huber_tune', PACKAGE = 'FarmSelect', X, tau)
}

Cov_Huber_noCV <- function(X, phi, tau) {
    .Call('_FarmSelect_Cov_Huber_noCV', PACKAGE = 'FarmSelect', X, phi, tau)
}

Find_factors <- function(Sigma, X, N, P, K) {
    .Call('_FarmSelect_Find_factors', PACKAGE = 'FarmSelect', Sigma, X, N, P, K)
}

Find_PF <- function(F_hat, N) {
    .Call('_FarmSelect_Find_PF', PACKAGE = 'FarmSelect', F_hat, N)
}

Find_lambda_class <- function(Sigma, X, N, P, K) {
    .Call('_FarmSelect_Find_lambda_class', PACKAGE = 'FarmSelect', Sigma, X, N, P, K)
}

Find_factors_class <- function(Lambda_hat, X, N, P, K) {
    .Call('_FarmSelect_Find_factors_class', PACKAGE = 'FarmSelect', Lambda_hat, X, N, P, K)
}

Find_X_star_class <- function(F_hat, Lambda_hat, X) {
    .Call('_FarmSelect_Find_X_star_class', PACKAGE = 'FarmSelect', F_hat, Lambda_hat, X)
}

Find_X_star <- function(P_F, X) {
    .Call('_FarmSelect_Find_X_star', PACKAGE = 'FarmSelect', P_F, X)
}

Find_Y_star <- function(P_F, Y) {
    .Call('_FarmSelect_Find_Y_star', PACKAGE = 'FarmSelect', P_F, Y)
}

Eigen_Decomp <- function(M) {
    .Call('_FarmSelect_Eigen_Decomp', PACKAGE = 'FarmSelect', M)
}

