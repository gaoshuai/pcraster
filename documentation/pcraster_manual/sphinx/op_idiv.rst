

.. index::
   single: idiv
.. index::
   single: //
.. _idiv:

********
idiv, //
********
.. topic:: idiv, //

   Quotient of integer division of values on first expression by values on second expression

::

  Result = expression1 idiv expression2 # pcrcalc
  Result = expression1 // expression2 # python

expression1
   spatial, non spatial
   scalar

expression2
   spatial, non spatial
   scalar

Result
   spatial; non spatial if expression1 and expression2 are non spatial
   scalar

Operation
=========


For each cell, the value on expression1 is divided (integer division) by the value on expression2. This quotient is assigned to the corresponding cell on Result.  

Notes
=====


A cell with 0 on expression2 is assigned a missing value on Result. A cell with missing value on expression1 and/or expression2 is assigned a missing value on Result.  

Group
=====
This operation belongs to the group of  Arithmetic operators 

See Also
========
:ref:`slash`, :ref:`mod`

Examples
========
#. 
   | • pcrcalc
   |   binding
   |    Result = Result.map;
   |    Expr1 = Expr1.map;
   |    Expr2 = Expr2.map;
   |   initial
   |    report Result = Expr1 idiv Expr2;
   |   
   | • python
   |   Expr1 = readmap("Expr1.map")
   |   Expr2 = readmap("Expr2.map")
   |   Result = Expr1 // Expr2

   ======================================= ======================================= =======================================
   Result.map                              Expr1.map                               Expr2.map                              
   .. image::  ../examples/idiv_Result.png .. image::  ../examples/slash_Expr1.png .. image::  ../examples/slash_Expr2.png
   ======================================= ======================================= =======================================

   | 

