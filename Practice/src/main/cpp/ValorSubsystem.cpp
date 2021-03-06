/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ValorSubsystem.h"

ValorSubsystem::ValorSubsystem() {
    init();
    setDefaultState();
}

void ValorSubsystem::Periodic() {
    assessInputs();
    assignOutputs();
}

ValorSubsystem& ValorSubsystem::GetInstance() {
    static ValorSubsystem instance;
    return instance;
}

void ValorSubsystem::init() {
    // init subsystem
}

void ValorSubsystem::setDefaultState() {
    // Assign default states
}

void ValorSubsystem::assessInputs() {
    // Assess inputs and assign states
}

void ValorSubsystem::assignOutputs() {
    // Assess states and assign outputs
}

void ValorSubsystem::resetState() {
    // reset state
}
