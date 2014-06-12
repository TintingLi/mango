// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vector_join
std::string vector_join(const std::vector<std::string>& v, const std::string& token);
RcppExport SEXP mango_vector_join(SEXP vSEXP, SEXP tokenSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::vector<std::string>& >::type v(vSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type token(tokenSEXP );
        std::string __result = vector_join(v, token);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// string_split
std::vector<std::string> string_split(const std::string& s, const std::string& delimiter);
RcppExport SEXP mango_string_split(SEXP sSEXP, SEXP delimiterSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delimiter(delimiterSEXP );
        std::vector<std::string> __result = string_split(s, delimiter);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseFastq
std::vector< int > parseFastq(std::string fastq1, std::string fastq2, std::string basename, int minlength = 15, int maxlength = 25, bool keepempty = false, bool verbose = true, std::string linker1 = "GTTGGATAAG", std::string linker2 = "GTTGGAATGT");
RcppExport SEXP mango_parseFastq(SEXP fastq1SEXP, SEXP fastq2SEXP, SEXP basenameSEXP, SEXP minlengthSEXP, SEXP maxlengthSEXP, SEXP keepemptySEXP, SEXP verboseSEXP, SEXP linker1SEXP, SEXP linker2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type fastq1(fastq1SEXP );
        Rcpp::traits::input_parameter< std::string >::type fastq2(fastq2SEXP );
        Rcpp::traits::input_parameter< std::string >::type basename(basenameSEXP );
        Rcpp::traits::input_parameter< int >::type minlength(minlengthSEXP );
        Rcpp::traits::input_parameter< int >::type maxlength(maxlengthSEXP );
        Rcpp::traits::input_parameter< bool >::type keepempty(keepemptySEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        Rcpp::traits::input_parameter< std::string >::type linker1(linker1SEXP );
        Rcpp::traits::input_parameter< std::string >::type linker2(linker2SEXP );
        std::vector< int > __result = parseFastq(fastq1, fastq2, basename, minlength, maxlength, keepempty, verbose, linker1, linker2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildBedpe
void buildBedpe(std::string sam1, std::string sam2, std::string bedpefile);
RcppExport SEXP mango_buildBedpe(SEXP sam1SEXP, SEXP sam2SEXP, SEXP bedpefileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type sam1(sam1SEXP );
        Rcpp::traits::input_parameter< std::string >::type sam2(sam2SEXP );
        Rcpp::traits::input_parameter< std::string >::type bedpefile(bedpefileSEXP );
        buildBedpe(sam1, sam2, bedpefile);
    }
    return R_NilValue;
END_RCPP
}
// removeDupBedpe
std::vector< int > removeDupBedpe(std::string infile, std::string outfile, bool renamePets = true);
RcppExport SEXP mango_removeDupBedpe(SEXP infileSEXP, SEXP outfileSEXP, SEXP renamePetsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP );
        Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP );
        Rcpp::traits::input_parameter< bool >::type renamePets(renamePetsSEXP );
        std::vector< int > __result = removeDupBedpe(infile, outfile, renamePets);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// findPairs
void findPairs(std::string overlapfile, std::string petpairsfile, std::string interactionfile, std::string peakscount);
RcppExport SEXP mango_findPairs(SEXP overlapfileSEXP, SEXP petpairsfileSEXP, SEXP interactionfileSEXP, SEXP peakscountSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type overlapfile(overlapfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type petpairsfile(petpairsfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type interactionfile(interactionfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type peakscount(peakscountSEXP );
        findPairs(overlapfile, petpairsfile, interactionfile, peakscount);
    }
    return R_NilValue;
END_RCPP
}
// splitBedbyChrom
std::vector<std::string> splitBedbyChrom(std::string bedfile, std::string outnamebase);
RcppExport SEXP mango_splitBedbyChrom(SEXP bedfileSEXP, SEXP outnamebaseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedfile(bedfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type outnamebase(outnamebaseSEXP );
        std::vector<std::string> __result = splitBedbyChrom(bedfile, outnamebase);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// makeDistanceFile
void makeDistanceFile(std::string bedpefilesortrmdup, std::string distancefile, int mindist, int maxdist);
RcppExport SEXP mango_makeDistanceFile(SEXP bedpefilesortrmdupSEXP, SEXP distancefileSEXP, SEXP mindistSEXP, SEXP maxdistSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedpefilesortrmdup(bedpefilesortrmdupSEXP );
        Rcpp::traits::input_parameter< std::string >::type distancefile(distancefileSEXP );
        Rcpp::traits::input_parameter< int >::type mindist(mindistSEXP );
        Rcpp::traits::input_parameter< int >::type maxdist(maxdistSEXP );
        makeDistanceFile(bedpefilesortrmdup, distancefile, mindist, maxdist);
    }
    return R_NilValue;
END_RCPP
}
// splitBedpe
std::vector< std::vector<std::string> > splitBedpe(std::string bedpein, std::string outnamebase, bool printreads = true, bool printpets = true);
RcppExport SEXP mango_splitBedpe(SEXP bedpeinSEXP, SEXP outnamebaseSEXP, SEXP printreadsSEXP, SEXP printpetsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedpein(bedpeinSEXP );
        Rcpp::traits::input_parameter< std::string >::type outnamebase(outnamebaseSEXP );
        Rcpp::traits::input_parameter< bool >::type printreads(printreadsSEXP );
        Rcpp::traits::input_parameter< bool >::type printpets(printpetsSEXP );
        std::vector< std::vector<std::string> > __result = splitBedpe(bedpein, outnamebase, printreads, printpets);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildTagAlign
void buildTagAlign(std::string bedpefile, std::string TagAlignfile);
RcppExport SEXP mango_buildTagAlign(SEXP bedpefileSEXP, SEXP TagAlignfileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedpefile(bedpefileSEXP );
        Rcpp::traits::input_parameter< std::string >::type TagAlignfile(TagAlignfileSEXP );
        buildTagAlign(bedpefile, TagAlignfile);
    }
    return R_NilValue;
END_RCPP
}
// external_sort
void external_sort(std::string inputfile, std::string outputfile);
RcppExport SEXP mango_external_sort(SEXP inputfileSEXP, SEXP outputfileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type inputfile(inputfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type outputfile(outputfileSEXP );
        external_sort(inputfile, outputfile);
    }
    return R_NilValue;
END_RCPP
}
// everyotherline
void everyotherline(std::string overlapin, std::string overlapout);
RcppExport SEXP mango_everyotherline(SEXP overlapinSEXP, SEXP overlapoutSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type overlapin(overlapinSEXP );
        Rcpp::traits::input_parameter< std::string >::type overlapout(overlapoutSEXP );
        everyotherline(overlapin, overlapout);
    }
    return R_NilValue;
END_RCPP
}
// AddQvals
void AddQvals(std::string interactionfile, std::string interactionfilefinal, std::vector<double> Q, double maxPval);
RcppExport SEXP mango_AddQvals(SEXP interactionfileSEXP, SEXP interactionfilefinalSEXP, SEXP QSEXP, SEXP maxPvalSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type interactionfile(interactionfileSEXP );
        Rcpp::traits::input_parameter< std::string >::type interactionfilefinal(interactionfilefinalSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type Q(QSEXP );
        Rcpp::traits::input_parameter< double >::type maxPval(maxPvalSEXP );
        AddQvals(interactionfile, interactionfilefinal, Q, maxPval);
    }
    return R_NilValue;
END_RCPP
}
