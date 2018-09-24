/**============================================================================
 * @file         pidController.cpp
 * Author      : Rishabh Choudhary
 * Version     : 1.0
 * @Copyright  : GNU Public License
 * Copyright 2018 RishabhChoudhary
 * @brief        Class definition for pidController
 *============================================================================
 */

#include "../include/pidController.h"

pidController::pidController()
    : kp(0.0),
      ki(0.0),
      kd(0.0),
      dt(0),
      prevError(0) {
}

double pidController::getParamkp() {
  return kp;
}

double pidController::getParamki() {
  return ki;
}

double pidController::getParamkd() {
  return kd;
}

void pidController::setParamkp(double kp_) {
  kp = kp_;
}

void pidController::setParamki(double ki_) {
  ki = ki_;
}

void pidController::setParamkd(double kd_) {
  kd = kd_;
}

void pidController::setParamdt(double dt_) {
  dt = dt_;
}

void pidController::setParampE(double pE_) {
  prevError = pE_;
}

pidController::~pidController() {
}

double pidController::compute(double setPoint, double cV) {
  return 15.0;                                  // return output
}
