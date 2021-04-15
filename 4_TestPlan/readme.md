# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |User should be able to give input choice| Choice Input |Calls that particular function|PASS|Technical  |
|  H_02       |User should be able to give input for maturity amount calculation|(1)principal(2)rate(3)time |Calculates Maturity amount for that function|PASS|Technical |
|  H_03       |User should be able to see the displayed maturity amount for a particular scheme|(1)principal(2)rate(3)time |Displays Maturity amount for that function|PASS|Technical |



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_01|During input check the the exit function of calculator. | EXIT Choice Input| Exits from the application| SUCCESS |Technical based |
|  L_02       |H_02|User should be able to get in-hand proper maturity amount i.e in rupees & paise |(1)principal(2)rate(3)time| Calculates result of  Maturity amount in rupees and paise|SUCCESS|Requirment based|
|  L_03       |H_02,H_03|Check if pricipal is zero then maturity amount will also be zero.|Prinicipal amount is zero|Displayed maturity amount is zero | SUCCESS |Technical|
|  L_04       |H02,H_03|Check if rate is zero then maturity amount will be same as principal. |rate is zero |Displayed maturity amount is same as prinicpal amount| SUCCESS |Technical,Requirement|
|  L_05       |H02,H_03|Check if time is zero then maturity amount will be same as principal. |time is zero| Displayed maturity amount is same as prinicpal amount | SUCCESS  |Technical,Requirment|
