// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.;
  for (uint64_t i = 0; i < n; i++)
    res *= val;
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  for (uint64_t i = 2; i <= n; i++)
    res *= i;
  return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / (double)fact(n);
}

double expn(double x, uint16_t count) {
  double s = 0.;
  for (uint64_t n = 0; n < count; n++)
    s += calcItem(x, n);
  return s;
}

double sinn(double x, uint16_t count) {
  double s = 0.;
  for (uint64_t n = 1; n <= count; n++) {
    uint64_t e = 2 * n - 1;
    double t = pown(x, e) / (double)fact(e);
    if (n % 2 == 0) {
      s -= t;
    } else {
      s += t;
    }
  }
  return s;
}

double cosn(double x, uint16_t count) {
  double s = 0.;
  for (uint64_t n = 1; n <= count; n++) {
    uint64_t e = 2 * n - 2;
    double t = pown(x, e) / (double)fact(e);
    if (n % 2 == 0) {
      s -= t;
    } else {
      s += t;
    }
  }
  return s;
}
