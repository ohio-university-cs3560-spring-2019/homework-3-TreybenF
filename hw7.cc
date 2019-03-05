#include <iostream>
#include <cstdarg>
#include <complex>

double stddev( int n, ... ){
  va_list args;
  double sum = 0;
  double var = 0;
  double mean = 0;

  //calculate sum so we can find the mean
  va_start(args, n);
  for (int i = 0; i < n; i++) {
    int value = va_arg(args, int);
    sum += value;
  }
  va_end(args);

  //calculate average
  mean = sum / n;

  //calculate varience
  va_start(args, n);
  for (int i = 0; i < n; i++) {
    int value = va_arg(args, int);
    var += ((value - mean) * (value - mean));
  }

  va_end(args);

  var /= n;
  
  //return standard deviation
  return sqrt(var);
}
