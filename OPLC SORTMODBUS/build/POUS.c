void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void OPLC_SORTBYMOD_init__(OPLC_SORTBYMOD *data__, BOOL retain) {
  __INIT_VAR(data__->ATENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATBACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOWBOX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HIGHBOX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLEENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADPOS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->UNLOADPOS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATFRONT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIGHTENT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEFTENT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIGHTEXIT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEFTEXIT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->START,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EMERGENCY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MACH_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MACH_OFF,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FEEDERCONV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENTRYCONV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOAD,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->UNLOAD,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEFTCONV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIGHTCONV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GREENIND,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YELLOWIND,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->REDIND,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LSTART,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LRESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LSTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUERIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUELEFT,__BOOL_LITERAL(FALSE),retain)
  TOF_init__(&data__->TOF0,retain);
  __INIT_VAR(data__->ET,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  CTU_init__(&data__->CTU0,retain);
  __INIT_VAR(data__->PV,0,retain)
  __INIT_VAR(data__->CV,0,retain)
  __INIT_VAR(data__->MEMOLEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MEMORIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->UNTURN,__BOOL_LITERAL(FALSE),retain)
  SR_init__(&data__->SR0,retain);
  SR_init__(&data__->SR1,retain);
  TOF_init__(&data__->TOF1,retain);
  TOF_init__(&data__->TOF2,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
}

// Code part
void OPLC_SORTBYMOD_body__(OPLC_SORTBYMOD *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,LSTART,,(__GET_VAR(data__->START,) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->,LSTOP,,(__GET_VAR(data__->STOP,) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->,LRESET,,(__GET_VAR(data__->RESET,) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->TOF0.,IN,,((!(__GET_VAR(data__->ATENTRY,)) && ((__GET_VAR(data__->CONT,) || __GET_VAR(data__->FEEDERCONV,)) || __GET_VAR(data__->START,))) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 2000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,FEEDERCONV,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,GREENIND,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,ET,,__GET_VAR(data__->TOF0.ET,));
  __SET_VAR(data__->,ENTRYCONV,,(((((!(__GET_VAR(data__->UNLOADPOS,)) && !(__GET_VAR(data__->ATFRONT,))) && !(__GET_VAR(data__->TURN,))) && (__GET_VAR(data__->ATENTRY,) || __GET_VAR(data__->ENTRYCONV,))) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->,REDIND,,!(__GET_VAR(data__->GREENIND,)));
  __SET_VAR(data__->,LOAD,,((((__GET_VAR(data__->MEMOLEFT,) && __GET_VAR(data__->UNLOADPOS,)) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,)) || (((!(__GET_VAR(data__->ATFRONT,)) && (__GET_VAR(data__->LOAD,) || __GET_VAR(data__->TURNTABLEENTRY,))) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,))));
  __SET_VAR(data__->SR0.,S1,,((__GET_VAR(data__->HIGHBOX,) && __GET_VAR(data__->STOP,)) && (__GET_VAR(data__->MACH_ON,) || __GET_VAR(data__->MACH_ON,))));
  __SET_VAR(data__->SR0.,R,,((__GET_VAR(data__->CONTINUELEFT,) || __GET_VAR(data__->MEMORIGHT,)) || __GET_VAR(data__->RESET,)));
  SR_body__(&data__->SR0);
  __SET_VAR(data__->,MEMOLEFT,,__GET_VAR(data__->SR0.Q1,));
  __SET_VAR(data__->SR1.,S1,,((!(__GET_VAR(data__->MEMOLEFT,)) && __GET_VAR(data__->LOWBOX,)) && (__GET_VAR(data__->MACH_ON,) || __GET_VAR(data__->MACH_ON,))));
  __SET_VAR(data__->SR1.,R,,((__GET_VAR(data__->CONTINUERIGHT,) || __GET_VAR(data__->MEMOLEFT,)) || __GET_VAR(data__->RESET,)));
  SR_body__(&data__->SR1);
  __SET_VAR(data__->,MEMORIGHT,,__GET_VAR(data__->SR1.Q1,));
  __SET_VAR(data__->,UNLOAD,,(((__GET_VAR(data__->MEMORIGHT,) && (__GET_VAR(data__->UNLOAD,) || __GET_VAR(data__->UNLOADPOS,))) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->,TURN,,(((!(__GET_VAR(data__->UNTURN,)) && (__GET_VAR(data__->ATFRONT,) || __GET_VAR(data__->TURN,))) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->,UNTURN,,(((__GET_VAR(data__->CONTINUELEFT,) || __GET_VAR(data__->CONTINUERIGHT,)) && __GET_VAR(data__->UNLOADPOS,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->TOF1.,IN,,((((!(__GET_VAR(data__->LEFTEXIT,)) && __GET_VAR(data__->MEMOLEFT,)) && (__GET_VAR(data__->LEFTCONV,) || __GET_VAR(data__->LEFTENT,))) && __GET_VAR(data__->UNLOADPOS,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 10000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,LEFTCONV,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->,ET,,__GET_VAR(data__->TOF1.ET,));
  __SET_VAR(data__->TOF2.,IN,,((((!(__GET_VAR(data__->RIGHTEXIT,)) && __GET_VAR(data__->MEMORIGHT,)) && (__GET_VAR(data__->RIGHTCONV,) || __GET_VAR(data__->RIGHTENT,))) && __GET_VAR(data__->UNLOADPOS,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->TOF2.,PT,,__time_to_timespec(1, 10000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF2);
  __SET_VAR(data__->,RIGHTCONV,,__GET_VAR(data__->TOF2.Q,));
  __SET_VAR(data__->,ET,,__GET_VAR(data__->TOF2.ET,));
  __SET_VAR(data__->,CONT,,(((__GET_VAR(data__->CONTINUELEFT,) || __GET_VAR(data__->CONTINUERIGHT,)) && __GET_VAR(data__->STOP,)) && __GET_VAR(data__->MACH_ON,)));
  __SET_VAR(data__->R_TRIG1.,CLK,,(__GET_VAR(data__->LEFTEXIT,) || __GET_VAR(data__->RIGHTEXIT,)));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->RESET,));
  CTU_body__(&data__->CTU0);

  goto __end;

__end:
  return;
} // OPLC_SORTBYMOD_body__() 





