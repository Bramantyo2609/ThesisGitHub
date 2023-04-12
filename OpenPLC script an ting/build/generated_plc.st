TYPE
  datatype0 : BOOL;
END_TYPE

PROGRAM FactoryIOtest
  VAR
    I_Start AT %IX100.0 : BOOL;
    I_Stop AT %IX100.1 : BOOL;
    Q_Conveyor AT %QX100.0 : BOOL;
  END_VAR

  Q_Conveyor := I_Stop AND (I_Start OR Q_Conveyor);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : FactoryIOtest;
  END_RESOURCE
END_CONFIGURATION
