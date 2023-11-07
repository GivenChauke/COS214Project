# Cheat GBT

Our Practical Project for COS214 at the University of Pretoria (2023). From the specification document:
> This assignment will require you to design a restaurant simulator. A fair bit of the assignment is up to the team to design including the implementation as a pure simulation or as a ”restaurant tycoon” game. A restaurant is a chaotic ensemble of various processes happening at the same time (Multithreading is not required) to result in the production and sale of food to customers. These processes can be small, from being seated at a table, to massive processes such as the cooking of food at various workstations and being passed between chefs. For the purpose of this assignment we will be dealing primarily with two distinct areas, the floor and the kitchen, of the restaurant and how they must communicate.

## Contributions by:
Name  | Student Number
------------- | -------------
Ms. Nerina Borchard  | u21537144
Mr. Given Chauke  | u21595969
Mx. Zion van Wyk  | u21655325
Mr. Siyabonga Mbuyisa  | u20491621
Mr. Lesedi Kekana  | u20486473
Mr. Atidaishe Mupanemunda  | u22747886
Mr. Thabiso Matau  | u22609254

## Our final report
https://docs.google.com/document/d/1JjSkhLFV_IW5YNy85zgs4b0PSP8FCJd3Fxzd7wT0m7g/edit?usp=sharing

## Our implemented patterns
- Composite (Table)
- State (TableState, CustomerState, and OrderStatus)
- Iterator (Floor and Employee)
- Bridge (Department)
- Memento (Billing System)
- Observer (Waiter & Kitchen)
- Chain of Responsibility (Chef)
- Strategy (Chef)
- Template Method (Chef)
- Decorator (Food)
- Builder (DishBuilder)
- Facade (Engine)

## Assigned patterns
* Siya
  * Composite (Table)
  * State (TableState and CustomerState)


* Zion
  * Memento (Billing System)
  * State (OrderStatus)

* Lesedi
  * Strategy (Chef)
  * Template Method (Chef)

* Nerina
  * Builder (DishBuilder)
  * Decorator (Food)

* Thabiso
  * Bridge (Department)

* Ati
  * Iterator (Floor and Employee)
  * Observer (Waiter & Kitchen)

* Given
  * Facade (Engine)
  * Chain of Responsibility (Chef)

## 4 stage deadlines

### 30th of October
Name  | Responsibility
------------- | -------------
Siya | AbstractTable interface
Zion | Bill and Order classes
Lesedi | AbstractTable and its children (with Siya)
Nerina | DishbBilder class and its Abstract interface
Thabiso | Employee class and its children, as well as Floor and AbstractFloor (with Ati)
Given | work with Thabiso on Chef class
Ati | work with Thabiso to make Employee class and its children, as well as Floor and AbstractFloor. for integration with Employee iterator

### 31st of October
Name  | Responsibility
------------- | -------------
Siya | Concrete table implementations and Customer State pattern
Zion | BillMemento and BillState
Lesedi | Strategy based on Given’s work on Chef
Nerina | Food and its children
Thabiso | Department and its children
Given | create Subclasses of Chef
Ati | create Kitchen class and Observer classes for it

### 1st of November
Name  | Responsibility
------------- | -------------
Siya | Table State pattern and CustomerGroup
Zion | BillCaretaker and Order State pattern
Lesedi | Template based on Given’s work on Chef
Nerina | Decorator pattern in Food
Thabiso | Review and Bridge pattern
Given | Create Chain of Responsibility and work with Ati on Iterator for Chefs
Ati | complete Observer pattern

### 3rd of November
- everyone will need to have tested their code mostly and uploaded their unit testing and i will start doing full integration.