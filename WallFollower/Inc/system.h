/*****************************************************************************
* Model: WallFollower.qm
* File:  Inc/system.h
*
* This code has been generated by QM tool (see state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*****************************************************************************/
/*${Inc::system.h} .........................................................*/
#ifndef SYSTEM_H
#define SYSTEM_H

#include "signals.h"

extern QActive *AO_System;


#if ((QP_VERSION < 580) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8)))
#error qpc version 5.8.0 or higher required
#endif

/*${AOs::System} ...........................................................*/
typedef struct {
/* protected: */
    QActive super;

/* public: */
    QTimeEvt LEDToggleEvt;
} System;

/* public: */
void System_ctor(void);

/* protected: */
QState System_initial(System * const me, QEvt const * const e);
QState System_Active(System * const me, QEvt const * const e);


#endif
