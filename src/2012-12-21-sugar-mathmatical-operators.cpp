/**
 * @title Using Sugar Mathmatical Operators
 * @author Ross Bennett
 * @license GPL (>= 2)
 * @tags sugar
 * @summary Illustrates the use of standard mathmatic operators on R
 *   vectors using Rcpp sugar
 * 
 * The mathematical operators (+, -, \*, /) work just like they do in 
 * R thanks to a little magic with Rcpp sugar. Here are some simple
 * examples of their usage:
 */

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void applyOperators(NumericVector x, NumericVector y) {
   
   // add a vector and a scalar
   NumericVector result = x + 5.0;
   
   // add 2 vectors of the same length
   result = x + y;
   
   // subtract a vector and a scalar
   result = 5.0 - x;
   
   // subtract 2 vectors of the same length
   result = x - y;
   
   // multiply a vector and a scalar
   result = 3.5 * x;
   
   // multiple 2 vectors of the same length
   result = x * y;
   
   // divide a vector and a scalar
   result = x / 8.0;
   
   // divide 2 vectors of the same length
   result = x / y;  
}

/**
 * The above examples are rather simple, but it's also possible to 
 * combine operators into more complex expressions. For example:
 */

// [[Rcpp::export]]
NumericVector computeResult(NumericVector x, NumericVector y) {
   return x + 5.0 * 2.0 - 1.0 / y;
}

/*** R
computeResult(c(1,2,3), c(4,5,6))
*/

