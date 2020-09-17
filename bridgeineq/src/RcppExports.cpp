// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// initBigNumbers
void initBigNumbers(int bitsPrecision);
RcppExport SEXP _bridgeineq_initBigNumbers(SEXP bitsPrecisionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type bitsPrecision(bitsPrecisionSEXP);
    initBigNumbers(bitsPrecision);
    return R_NilValue;
END_RCPP
}
// truncatedSamplingSubiterationBinomialCDF
double truncatedSamplingSubiterationBinomialCDF(double uniformSample, double alpha, double Lo, double Hi);
RcppExport SEXP _bridgeineq_truncatedSamplingSubiterationBinomialCDF(SEXP uniformSampleSEXP, SEXP alphaSEXP, SEXP LoSEXP, SEXP HiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type uniformSample(uniformSampleSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type Lo(LoSEXP);
    Rcpp::traits::input_parameter< double >::type Hi(HiSEXP);
    rcpp_result_gen = Rcpp::wrap(truncatedSamplingSubiterationBinomialCDF(uniformSample, alpha, Lo, Hi));
    return rcpp_result_gen;
END_RCPP
}
// truncatedSamplingSubiteration
double truncatedSamplingSubiteration(double uniformSample0, double uniformSample1, double minusZi, double Lo, double ai, bool thereIsAHigherBound, double theHigherBound);
RcppExport SEXP _bridgeineq_truncatedSamplingSubiteration(SEXP uniformSample0SEXP, SEXP uniformSample1SEXP, SEXP minusZiSEXP, SEXP LoSEXP, SEXP aiSEXP, SEXP thereIsAHigherBoundSEXP, SEXP theHigherBoundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type uniformSample0(uniformSample0SEXP);
    Rcpp::traits::input_parameter< double >::type uniformSample1(uniformSample1SEXP);
    Rcpp::traits::input_parameter< double >::type minusZi(minusZiSEXP);
    Rcpp::traits::input_parameter< double >::type Lo(LoSEXP);
    Rcpp::traits::input_parameter< double >::type ai(aiSEXP);
    Rcpp::traits::input_parameter< bool >::type thereIsAHigherBound(thereIsAHigherBoundSEXP);
    Rcpp::traits::input_parameter< double >::type theHigherBound(theHigherBoundSEXP);
    rcpp_result_gen = Rcpp::wrap(truncatedSamplingSubiteration(uniformSample0, uniformSample1, minusZi, Lo, ai, thereIsAHigherBound, theHigherBound));
    return rcpp_result_gen;
END_RCPP
}
// truncatedSamplingSubiterationBinomialY
double truncatedSamplingSubiterationBinomialY(double uniformSample, double theta, double betaMinusOne);
RcppExport SEXP _bridgeineq_truncatedSamplingSubiterationBinomialY(SEXP uniformSampleSEXP, SEXP thetaSEXP, SEXP betaMinusOneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type uniformSample(uniformSampleSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type betaMinusOne(betaMinusOneSEXP);
    rcpp_result_gen = Rcpp::wrap(truncatedSamplingSubiterationBinomialY(uniformSample, theta, betaMinusOne));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bridgeineq_initBigNumbers", (DL_FUNC) &_bridgeineq_initBigNumbers, 1},
    {"_bridgeineq_truncatedSamplingSubiterationBinomialCDF", (DL_FUNC) &_bridgeineq_truncatedSamplingSubiterationBinomialCDF, 4},
    {"_bridgeineq_truncatedSamplingSubiteration", (DL_FUNC) &_bridgeineq_truncatedSamplingSubiteration, 7},
    {"_bridgeineq_truncatedSamplingSubiterationBinomialY", (DL_FUNC) &_bridgeineq_truncatedSamplingSubiterationBinomialY, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bridgeineq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
