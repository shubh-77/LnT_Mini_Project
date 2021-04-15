# Requirements
## Introduction
 * During COVID-19 Pandemic, Many countries such as US,UK and India imposed lockdown in their country to curb the virus. However,this virus has not caused people physically or mentally only , but also financially. But in India it has drastically affected people of every class. However, the people who are most affected are the people belonging to poor and lower-middle class families. The Indian Post Office or Public sector banks auch as SBI play a very important role during these times, as they allow people to have a various savings scheme under their policy in which people from these classes can deposit their monetary funds it and can get money at the time of maturity (The maturity date may arrive during pandemic).These funds can help those people from poverty or during pandemic. This system will help people to calculate their maturity amount for different saving schemes available in the Indian Post Office.     
 * This topic was chosen because it gives me an opportunity to understand multiple C programming concepts and thus contribute to the welfare of the nation.

## Research
### Post Office Savings Scheme Maturity Amount Calculator's Features and Benefits
An Indian Post Office Savings Department's main aim is,helping people from poor and lower-middle class families to invest their money in the banks rather than keeping it in their homes. 
What is Post Office Savings Scheme? 
It allows people from poor and lower-middle class families to invest their money in the public-sector / centralized-goverment banks.These monetary funds will help in future i.e. they encourage people for long-term investments or short-term investments.

The system focuses on various schemes under the [Post Office Savings Department](https://www.indiapost.gov.in/Financial/pages/content/post-office-saving-schemes.aspx). For this project purpose, only certain schemes are undertaken.

### Benefits
Post Office Savings Scheme Maturity Amount Calculator offer a range of benefits to the people depending upon their funds as well as term of investments.

### Amount Calculation
A Savings Scheme Maturity Amount Calculator helps people to calculate their maturity amount based on their money invested for a stipulated amount of time.

### Provides various schemes
There is a wide range of schemes available based on different types of individuals. It calculates amount for various saving schemes as Public Provident Fund(PPF),Recurring Deposit(RD),Term Deposit(TD) etc.






## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 1950-1970    | It calculated amount for small pricipal amount at lesser rate and had fewer savings schemes | ₹ 10000  |
| 1970-2000    | It calculated amount for big pricipal amount at good rate and had more savings schemes| ₹ 5000  |
| 2000-Present | It calculates amount for bigger pricipal amount at great rate and has more savings schemes| ₹ 500  |




## Defining Our System
### Certain assumptions:
* Few systems already exists with which our system will interact
    * Indian Post Office Savings Department
    * Goverment-Centralised Bank 
    
![Description](https://github.com/shubh-77/LnT_Mini_Project/blob/main/1_Requirements/System_Diagram.png)
### Explanation:
* Savings Scheme Maturity Amount Calculator have few inbuilt features like:
    * Calculate maturity amount for different period of time.
    * Calculates maturity amount for various saving schemes.(For convenience purpose, this system includes few savings schemes)

* Since we have assumed that few systems already exists we can say that in future sprints new features could be added i.e there would be one calculator for calculating the differnt maturity amount for different schemes to secure your financial future at minimal risk.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/shubh-77/LnT_Mini_Project/blob/main/1_Requirements/SWOT.png)

# 4W&#39;s and 1&#39;H

## Who:
* For all people.But the Poor and Lower-Middle class people are ones who'll be beneficial as they tend to invest more in Post-Office or Centralised-Goverment Banks.

## What:
* Calculates the maturity amount for different schemes which are provided by Goverment of India through Indian Post Office or Centralised-Goverment Banks.

## When:
* Whenever a common man wants to invest into a Goverment-funded scheme.

## Where:
* Whenever someone wants to invest in any of the Goverment-funded scheme into their nearest post-office.

## How:
* This will help the common-man about taking decision to invest in which scheme,during that period of time.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to input onto the terminal| Techincal | Implemented | 
| HR02 | User shall be able to select a particular scheme under available schemes | Techincal | Implemented |
| HR03 | User should see the output on the terminal. | Technical | Implemented |
| HR04 | Term Deposit Calculator. | Technical | Implemented |
| HR05 | Recurring Deposit Calculator. | Technical | Implemented |
| HR06 | Public Provident Fund Calculator. | Technical | Implemented |






##  Low level Requirements:
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | User should be able to input the principal amount,time and rate | HR01 | Implemented |
| LR02 | User should be able to select particular scheme and  input the principal amount,time and rate.| HR02 | Implemented |
| LR03 | User should see data displayed on terminal with expected maturity amount. | HR03 | Implemented |
| LR04 | Function to calculate Term-Deposit | HR04 | Implemented |
| LR05 | Function to calculate Recurring-Deposit | HR05 | Implemented |
| LR06 | Function to calculate Public Provident Fund | HR03 | Implemented |
| LR07 | Test cases for Term-Deposit   | HR04 | Implemented |
| LR08 | Test cases for Recurring-Deposit   | HR05 | Implemented |
| LR09 | Test cases for Public Provident Fund  | HR05 | Implemented |
| LR10 | Implementation Testing  | HR01,HR02,HR03,HR04,HR05,HR06 | Implemented |






