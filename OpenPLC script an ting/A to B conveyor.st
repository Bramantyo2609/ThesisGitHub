PROGRAM program0
  VAR
    I_Sensor AT %IX0.0 : BOOL;
    Q_Conveyor AT %QX0.0 : BOOL;
  END_VAR

  Q_Conveyor := I_Sensor;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
