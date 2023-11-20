// FAIL (To Be Continued)

// (Class) Employee
// >> (name)
// >> (showName / getPay / showPayInfo)

//// (Class) TemporaryWorker : public Employee
//// >>>> (workTime / payPerHour)
//// >>>> (AddWorkTime / getPay / showPayInfo)

//// (Class) PermanentWorker : public Employee
//// >>>> (pay)
//// >>>> (getPay / showPayInfo)

//////// (Class) SalesWorker : public PermanentWorker
//////// >>>>>>>> (salesResult / bonusRatio)
//////// >>>>>>>> (AddSalesResult / getPay / showPayInfo)

//////////////// (Class) ForeignSalesWorker : public SalesWorker
//////////////// >>>>>>>>>>>>>>>> (riskLevel)
//////////////// >>>>>>>>>>>>>>>> (getPay / showPayInfo)

// (Class) EmployeeManger
// >> (empNum)
// >> (AddEmployee / showAllPay / showTotalPay)
