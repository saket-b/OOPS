Which of the following is true about constructors. 1) They cannot be virtual. 2) They cannot be private. 3) They are automatically called by new operator.

//output
// 1 & 2
//Question 15-Explanation: 
//1) True: Virtual constructors don't make sense, it is meaningless to the C++ compiler to create an object polymorphically. 2) False: Constructors can be private, for example, we make copy constructors private when we don't want to create copyable objects. The reason for not making copyable object could be to avoid shallow copy. 3) True: Constructors are automatically called by new operator, we can in-fact pass parameters to constructors.