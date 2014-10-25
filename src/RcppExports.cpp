// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pair_sort
void pair_sort(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_pair_sort(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        pair_sort(i, x);
    }
    return R_NilValue;
END_RCPP
}
// merge
int merge(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_merge(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        int __result = merge(i, x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// todgCMatrix
SEXP todgCMatrix(S4 m);
RcppExport SEXP FeatureHashing_todgCMatrix(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        SEXP __result = todgCMatrix(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hashed_model_matrix
SEXP hashed_model_matrix(RObject tf, DataFrame data, unsigned long hash_size, S4 retval);
RcppExport SEXP FeatureHashing_hashed_model_matrix(SEXP tfSEXP, SEXP dataSEXP, SEXP hash_sizeSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type tf(tfSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type hash_size(hash_sizeSEXP );
        Rcpp::traits::input_parameter< S4 >::type retval(retvalSEXP );
        SEXP __result = hashed_model_matrix(tf, data, hash_size, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hash_without_intercept_single
IntegerVector hash_without_intercept_single(CharacterVector src);
RcppExport SEXP FeatureHashing_hash_without_intercept_single(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = hash_without_intercept_single(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hash_without_intercept
IntegerVector hash_without_intercept(CharacterVector src);
RcppExport SEXP FeatureHashing_hash_without_intercept(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = hash_without_intercept(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rehash_inplace
void rehash_inplace(S4 m, IntegerVector Rmapping, int hash_size);
RcppExport SEXP FeatureHashing_rehash_inplace(SEXP mSEXP, SEXP RmappingSEXP, SEXP hash_sizeSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type Rmapping(RmappingSEXP );
        Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP );
        rehash_inplace(m, Rmapping, hash_size);
    }
    return R_NilValue;
END_RCPP
}
// Xv
NumericVector Xv(S4 m, NumericVector v, NumericVector retval);
RcppExport SEXP FeatureHashing_Xv(SEXP mSEXP, SEXP vSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = Xv(m, v, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vX
NumericVector vX(NumericVector v, S4 m, NumericVector retval);
RcppExport SEXP FeatureHashing_vX(SEXP vSEXP, SEXP mSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = vX(v, m, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// selectRow
SEXP selectRow(S4 m, IntegerVector index);
RcppExport SEXP FeatureHashing_selectRow(SEXP mSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP );
        SEXP __result = selectRow(m, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tag_existence
SEXP tag_existence(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_tag_existence(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP );
        SEXP __result = tag_existence(src, delim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tag_count
SEXP tag_count(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_tag_count(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP );
        SEXP __result = tag_count(src, delim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
