# SDLC Activity Based Learning
![Banner](https://github.com/shubh-77/LnT_Mini_Project/blob/main/1_Requirements/banner1.png)

Visit [Pages for Report -optional](using github.io option)

|Build|Unit Test|cppcheck|Valgrind|Coverage|Git Inspector|
|:--:|:--:|:--:|:--:|:--:|:--:|
| [![C Build Status](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/cbuild.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/cbuild.yml) |[![Unit Testing](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/unitTesting.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/unitTesting.yml)|[![cppcheck-action](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/cppcheck.yml)|[![Dynamic Analysis](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/dynamic_code_quality.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/dynamic_code_quality.yml)|[![CI-Coverage](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/coverage.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/coverage.yml)|[![Contribution check](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/shubh-77/LnT_Mini_Project/actions/workflows/gitinspector.yml)|






## Savings Maturity Amount Calculator
It provides you with quick calculation of below mentioned services:

* Term Deposit Calculator
* Recurring Deposit Calculator
* Public Provident Fund Calculator







## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures









## Contributors List and Summary
PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No of Test Cases|Test Case Pass
---------|-------------|----------------|----------------|---------------|-------------|--------------
`260031` | Shubham Phansekar  | SC1, SC2, SC3, SC4, SC5, SC6, SC7| 0   | 0  | 03   | 03     

| No |Feature  |
|--|--|
| SC1 |Calculating the Term Deposit Maturity Amount |
| SC2 |Calculating the Recurring Deposit Maturity Amount |
| SC3 |Calculating the Public Provident Fund Maturity Amount |
| SC4 |Unit Testing the code with various testcases |
| SC5 |Building the all workflows In Git |
| SC6 |Designing each module with readme files |
| SC7 |Gathering all requirments and designing each phase |



## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | There is no such mutli scheme Maturity-calculator right now in the market | Implemented successfully with the help of functions
|2. | For Term and Recurring deposit various rate schemes can be applied, which thus result into maturity amount which is always not available in the current market.| Implemented successfully with the help of storage space of c variables. |
| 3. | Make file not working even after following all steps  | Added make to environment variables  |



# Usage of the project
```sh
# For Building the main application
make
# For Running the main application
make run
# For Building the test file
make test
```    
   


