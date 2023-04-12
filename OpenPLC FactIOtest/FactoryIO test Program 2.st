PROGRAM FactoryIO
  VAR
    Stop_Button AT %IX100.0 : BOOL;
    Start_Button AT %IX100.1 : BOOL;
    Conveyor AT %QX100.0 : BOOL;
  END_VAR

  Conveyor := Stop_Button AND (Conveyor OR Start_Button);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : FactoryIO;
  END_RESOURCE
END_CONFIGURATION
