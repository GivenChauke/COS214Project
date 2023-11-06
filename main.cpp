#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

class CustomerState
{

    public:
    virtual std::string getStatus()=0;
    virtual void action()=0; 

};

class Happy: public CustomerState
{
    public:
        std::string getString(){return "HAPPY";}
        void action(){
            std::cout<<"Customer: THE FOOD HERE IS SO AMAZING" << std::endl;
        };

};

class Angry: public CustomerState
{
    public:
        std::string getString(){return "ANGRY";};
        void action(){
            std::cout<<"Customer: THE FOOD HERE SUCKS" << std::endl;
        };

};

class Review {
public:
    Review(const std::string& comment, int rating) {
        if (comment.length() <= 255) {
            ReviewComment = comment;
        } else {
            throw std::invalid_argument("Review comment exceeds 255 characters");
        }
        Rating = rating;
    }
    
    std::string getReviewComment() const {
        return ReviewComment;
    }
    
    int getRating() const {
        return Rating;
    }
    
    bool operator==(const Review& other) const {
        return (ReviewComment == other.ReviewComment) && (Rating == other.Rating);
    }

private:
    std::string ReviewComment;
    int Rating;
};

class TableState {
public:
    virtual std::string getStatus() = 0;
    virtual void action() {}
};

class ReadyToOrder : public TableState {
public:
    std::string getStatus() override {
        return "READYTOORDER";
    }
    void action() override {
        std::cout << "TABLE: WE'RE READY TO ORDER" << std::endl;
    }
};

class PayBill : public TableState {
public:
    std::string getStatus() override {
        return "PAYBILL";
    }
    void action() override {
        std::cout << "TABLE: CAN WE GET THE BILL" << std::endl;
    }
};

class NotOccupied : public TableState {
public:
    std::string getStatus() override {
        return "NotOccupied";
    }
    void action() override {}
};

class Waiting : public TableState {
public:
    std::string getStatus() override {
        return "WAITING";
    }
    void action() override {
        std::cout << "TABLE: HOW LONG TILL OUR ORDER IS DONE" << std::endl;
    }
};

class NotReadyToOrder : public TableState {
public:
    std::string getStatus() override {
        return "NOTREADYTOORDER";
    }
    void action() override {
        std::cout << "Customer: Give us a few minutes. We will call you when we're ready to order." << std::endl;
    }
};

class RandomString {
public:
    static std::string PositiveComment[10];
    static std::string NegativeComment[10];

    RandomString() {
        PositiveComment[0] = "kmnb";
        PositiveComment[1] = "kmnb";
        PositiveComment[2] = "kmnb";
        PositiveComment[3] = "kmnb";
        PositiveComment[4] = "kmnb";
        PositiveComment[5] = "kmnb";
        PositiveComment[6] = "kmnb";
        PositiveComment[7] = "kmnb";
        PositiveComment[8] = "kmnb";
        PositiveComment[9] = "kmnb";

        NegativeComment[0] = "kmnb";
        NegativeComment[1] = "kmnb";
        NegativeComment[2] = "kmnb";
        NegativeComment[3] = "kmnb";
        NegativeComment[4] = "kmnb";
        NegativeComment[5] = "kmnb";
        NegativeComment[6] = "kmnb";
        NegativeComment[7] = "kmnb";
        NegativeComment[8] = "kmnb";
        NegativeComment[9] = "kmnb";
    }
};

class Customer {
private:
    std::string ID;
    CustomerState* state;

public:
    std::string getID() {
        return ID;
    }

    void setID(std::string ID) {
        this->ID = ID;
    }

    void setState(CustomerState* state) {
        this->state = state;
    }

    CustomerState* getState() {
        return state;
    }

    std::string GiveComment_Food() {
        srand((unsigned)time(nullptr));
        int random = rand() % 10;
        if (this->state->getStatus() == "ANGRY") {
            return RandomString::NegativeComment[random];
        } else if (this->state->getStatus() == "HAPPY") {
            return RandomString::PositiveComment[random];
        } else {
            return "";
        }
    }

    std::string GiveComment_Service() {
        srand((unsigned)time(nullptr));
        int random = rand() % 10;
        if (this->state->getStatus() == "ANGRY") {
            return RandomString::NegativeComment[random];
        } else if (this->state->getStatus() == "HAPPY") {
            return RandomString::PositiveComment[random];
        } else {
            return "";
        }
        return "";
    }

    int GiveRating_Food() {
        srand((unsigned)time(nullptr));
        int random = rand() % 5;

        if (this->state->getStatus() == "ANGRY") {
            return random;
        } else if (this->state->getStatus() == "HAPPY") {
            return random + 6;
        }
        return 5;
    }

    int GiveRating_Service() {
        srand((unsigned)time(nullptr));
        int random = rand() % 5;

        if (this->state->getStatus() == "ANGRY") {
            return random;
        } else if (this->state->getStatus() == "HAPPY") {
            return random + 6;
        }
        return 5;
    }

    Customer(std::string name) : ID(name) {
        // Constructor implementation, if needed
    }

    Customer() {
        ID = "";
        std::string alphabets = "abcdefghijklmnopqrstuvwxyz";
        srand((unsigned)time(nullptr));
        for (int i = 0; i < 10; i++) {
            ID += alphabets.substr(rand() % 26, 1);
        }
    }

    /*void receiveOrder(Order order) {
        // Implement order reception logic
    }*/
};

class CustomerGroup {
protected:
    std::vector<Customer> customers;
    int RandomState;
    //std::vector<Order> orders;

public:
    std::vector<Customer> getCustomers() {
        return customers;
    }

    void setCustomers(std::vector<Customer> customer) {
        this->customers = customer;
    }

    int getRandomState() {
        return RandomState;
    }

    void setRandomState(int RandomState) {
        this->RandomState = RandomState;
    }

    int NumOfCustomer() {
        return customers.size();
    }

    Customer CustomerAt(int index) {
        return customers.at(index);
    }

    /*std::vector<Bill> mergeBill() {
        std::vector<Bill> bills;
        srand((unsigned)time(nullptr));
        int random = (rand() % orders.size()) + 1;
        // Implement bill merging logic
        return bills;
    }*/

    bool addCustomer(Customer customer) {
        customers.push_back(customer);
        return true;
    }

    CustomerGroup() {
        // Constructor implementation, if needed
    }

    /*void receiveOrder(std::vector<Order> orders) {
        // Implement order reception logic
    }*/

    bool PayBill() {
        // Implement bill payment logic
        return true;
    }

    std::vector<Review> ReviewFood() {
        // Implement food review logic
        std::vector<Review> reviews;
        return reviews;
    }

    std::vector<Review> ReviewService() {
        // Implement service review logic
        std::vector<Review> reviews;
        return reviews;
    }
};

class Department {
public:
    virtual void TakeReview(const Review& review) = 0;
    virtual void DisplayReviews() = 0;
    virtual double CalculateAverageRating() const = 0;
    virtual void DeleteReview(const Review& review) = 0;

protected:
    std::vector<Review> reviews;
};

class FloorDepartment : public Department {
public:
    void TakeReview(const Review& review) override {
        reviews.push_back(review);
        std::cout << "Review processed by FloorDepartment." << std::endl;
    }

    void DisplayReviews() override {
        std::cout << "FloorDepartment Reviews:" << std::endl;
        for (const Review& review : reviews) {
            std::cout << "Comment: " << review.getReviewComment() << ", Rating: " << review.getRating() << std::endl;
        }
    }

    double CalculateAverageRating() const override {
        double totalRating = 0.0;
        for (const Review& review : reviews) {
            totalRating += review.getRating();
        }
        double averageRating = reviews.empty() ? 0.0 : totalRating / reviews.size();
        return averageRating;
    }

    void DeleteReview(const Review& review) override {
        auto it = std::remove(reviews.begin(), reviews.end(), review);
        if (it != reviews.end()) {
            reviews.erase(it, reviews.end());
            std::cout << "Review deleted from FloorDepartment." << std::endl;
        }
    }
};

class KitchenDepartment : public Department {
public:
    void TakeReview(const Review& review) override {
        reviews.push_back(review);
        std::cout << "Review processed by KitchenDepartment." << std::endl;
    }

    void DisplayReviews() override {
        std::cout << "KitchenDepartment Reviews:" << std::endl;
        for (const Review& review : reviews) {
            std::cout << "Comment: " << review.getReviewComment() << ", Rating: " << review.getRating() << std::endl;
        }
    }

    double CalculateAverageRating() const override {
        double totalRating = 0.0;
        for (const Review& review : reviews) {
            totalRating += review.getRating();
        }
        double averageRating = reviews.empty() ? 0.0 : totalRating / reviews.size();
        return averageRating;
    }

    void DeleteReview(const Review& review) override {
        auto it = std::remove(reviews.begin(), reviews.end(), review);
        if (it != reviews.end()) {
            reviews.erase(it, reviews.end());
            std::cout << "Review deleted from KitchenDepartment." << std::endl;
        }
    }
};

class AbstractTable
{
    protected:
        int maxPeople;
        //TableState* tableState;
        //CustomerGroup customerGroup;
        int currentPeople;
        int RandomState;
        static int counter;
        int tableID;
        bool occupied=false;

    public:
        virtual void getTableNumber()=0;
        virtual bool AddTable(AbstractTable* table)=0;
        virtual AbstractTable* SeparateTable()=0;
};

int AbstractTable::counter=0;

class Table : public AbstractTable
{
    private:
        
    public:
    Table() : tableNumber(++tableCount) {}
    


        ~Table(){

        };
        void getTableNumber() {
            std::cout << "This is table number " << tableNumber << std::endl;
        }

        bool AddTable(AbstractTable* table){
            return false;
        }
        AbstractTable* SeparateTable(){
            return NULL;
        }

    static int tableCount;
    int tableNumber;
        
};

int Table::tableCount = 0;

class CombinedTable : public AbstractTable {
private:
    std::vector<AbstractTable*> tables;

public:
    CombinedTable() {
        // Constructor implementation, if needed
    }

    ~CombinedTable() {
        // Destructor implementation, if needed
    }

    bool AddTable(AbstractTable* table) {
        if (table) {
            tables.push_back(table);
            return true;
        }
        return false;
    }

    AbstractTable* SeparateTable() {
        if (!tables.empty()) {
            AbstractTable* separatedTable = tables.back();
            tables.pop_back();
            return separatedTable;
        }
        return nullptr;
    }

    /*std::vector<Order> PlaceOrder() {
        std::vector<Order> orders;
        // Implementation of PlaceOrder, if needed
        return orders;
    }*/
};

class Iterator {
public:
    virtual AbstractTable* first() = 0;
    virtual AbstractTable* next() = 0;
    virtual bool hasNext() = 0;
    virtual AbstractTable* current() = 0;
};

class TableIterator : public Iterator {
public:
    TableIterator(const std::vector<AbstractTable*>& tables) : tables(tables), currentPos(0) {}
    
    AbstractTable* first() {
        if (!tables.empty()) {
            currentPos = 0;
            return tables[0];
        }
        return nullptr;
    }

    AbstractTable* next() {
        if (hasNext()) {
            currentPos++;
            return tables[currentPos];
        }
        return nullptr;
    }

    bool hasNext() {
        return currentPos + 1 < tables.size();
    }

    AbstractTable* current() {
        if (currentPos < tables.size()) {
            return tables[currentPos];
        }
        return nullptr;
    }

private:
    std::vector<AbstractTable*> tables;
    int currentPos;
};

class Employee {
public:
    Employee(int id) : department(nullptr), tables(nullptr), currTable(nullptr), tableIterator(nullptr), employeeId(id) {}
    
    void assignTables(std::vector<AbstractTable*>& tables) {
        tableIterator = new TableIterator(tables);
    }

    void iterateTables() {
        if (tableIterator) {
            AbstractTable* table = tableIterator->first();
            while (table) {
                table->getTableNumber();
                table = tableIterator->next();
            }
        }
    }

    void moveToNextTable() {
        if (tableIterator) {
            tableIterator->next();
        }
    }

    Department* getDepartment() {
        return department;
    }

    AbstractTable* getCurrentTable() {
        if (tableIterator) {
            return tableIterator->current();
        }
        return nullptr;
    }

    void setDepartment(Department* dep) {
        department = dep;
    }

    void setCurrTable(Table* currTab) {
        currTable = currTab;
    }

    void GetReview(const std::vector<Review*>& reviewList) {
        if (department) {
            for (const Review* review : reviewList) {
                department->TakeReview(*review);
            }
        }
    }

    void TakeOrder(Table* table) {
        if (table) {
            // Process the order and add it to the queue
        }
    }

    ~Employee() {
        if (tableIterator) {
            delete tableIterator;
        }
    }

private:
    Department* department;
    Table* tables;
    Table* currTable;
    TableIterator* tableIterator;
    int employeeId;
};

class Waiter : public Employee {
public:
    Waiter(int id) : Employee(id) {}
    
    void getReviewsForKitchenDepartment() {
        if (getDepartment()) {
            KitchenDepartment* kitchenDept = dynamic_cast<KitchenDepartment*>(getDepartment());
            if (kitchenDept) {
                kitchenDept->DisplayReviews();
            } else {
                std::cout << "Waiter can only get reviews for the Kitchen Department." << std::endl;
            }
        }
    }
};

class Manager : public Employee {
public:
    Manager(int id) : Employee(id) {}

    void getReviewsForFloorDepartment() {
        if (getDepartment()) {
            FloorDepartment* floorDept = dynamic_cast<FloorDepartment*>(getDepartment());
            if (floorDept) {
                floorDept->DisplayReviews();
            } else {
                std::cout << "Manager can only get reviews for the Floor Department." << std::endl;
            }
        }
    }
};

int main() {
    // Create Kitchen and Floor departments
    KitchenDepartment kitchen;
    FloorDepartment floor;

    // Create an employee using a pointer
    Employee* employee = new Employee(1);

    // Assign departments to the employee
    employee->setDepartment(&kitchen);

    // Create some hard-coded reviews
    Review review1("Good food and service", 5);
    Review review2("Excellent experience", 5);
    Review review3("Average service", 3);
    Review review4("Tasty but slow", 4);
    Review review5("Terrible experience", 1);

    // Add the reviews to the department
    kitchen.TakeReview(review1);
    kitchen.TakeReview(review2);
    kitchen.TakeReview(review3);
    kitchen.TakeReview(review4);
    kitchen.TakeReview(review5);

    // Display the current reviews in the kitchen department
    std::cout << "Kitchen Department Reviews:" << std::endl;
    kitchen.DisplayReviews();

    // Delete a review from the kitchen department
    std::cout << "\nDeleting a review from Kitchen Department..." << std::endl;
    kitchen.DeleteReview(review3);

    // Display the updated reviews in the kitchen department
    std::cout << "\nKitchen Department Reviews (after deletion):" << std::endl;
    kitchen.DisplayReviews();

    // Switch the department to the floor
    employee->setDepartment(&floor);

    // Display the current reviews in the floor department
    std::cout << "\nFloor Department Reviews:" << std::endl;
    floor.DisplayReviews();

    // Delete a review from the floor department
    std::cout << "\nDeleting a review from Floor Department..." << std::endl;
    floor.DeleteReview(review2);

    // Display the updated reviews in the floor department
    std::cout << "\nFloor Department Reviews (after deletion):" << std::endl;
    floor.DisplayReviews();

    // Clean up memory by deleting the employee
    delete employee;

    std::vector<AbstractTable*> tables;
    for (int i = 0; i < 5; i++) {
        tables.push_back(new Table());
    }

    // Create a Manager and assign tables
    Manager manager(2);
    manager.assignTables(tables);

    // Create a Waiter and assign tables
    Waiter waiter(3);
    waiter.setDepartment(&kitchen);
    waiter.assignTables(tables);

    // Iterate through tables for the Manager
    std::cout << "\nManager iterating through tables:" << std::endl;
    for (int i = 0; i < 6; i++) {
        AbstractTable* currentTable = manager.getCurrentTable();
        if (currentTable) {
            currentTable->getTableNumber();
        }
        manager.moveToNextTable();
    }

    // Get reviews for the Floor Department as the Manager
    std::cout << "\nManager getting reviews for the Floor Department:" << std::endl;
    manager.getReviewsForFloorDepartment();

    // Get reviews for the Kitchen Department as the Waiter
    std::cout << "\nWaiter getting reviews for the Kitchen Department:" << std::endl;
    waiter.getReviewsForKitchenDepartment();

    // Clean up memory
    for (AbstractTable* table : tables) {
        delete table;
    }

    std::vector<AbstractTable*> globalTables;

    // Create some tables
    Table table1;
    Table table2;
    Table table3;
    Table table4;

    // Add tables to the global vector
    globalTables.push_back(&table1);
    globalTables.push_back(&table2);
    globalTables.push_back(&table3);
    globalTables.push_back(&table4);

    // Create waiter instances
    Waiter waiter1(1);
    Waiter waiter2(2);

    // Assign tables to waiters
    std::vector<AbstractTable*> waiter1Tables;
    waiter1Tables.push_back(globalTables[0]);
    waiter1Tables.push_back(globalTables[1]);
    waiter1.assignTables(waiter1Tables);

    std::vector<AbstractTable*> waiter2Tables;
    waiter2Tables.push_back(globalTables[2]);
    waiter2Tables.push_back(globalTables[3]);
    waiter2.assignTables(waiter2Tables);

    // Iterate through tables for Waiter 1
    std::cout << "Waiter 1's Tables:" << std::endl;
    waiter1.iterateTables();

    // Iterate through tables for Waiter 2
    std::cout << "Waiter 2's Tables:" << std::endl;
    waiter2.iterateTables();

    return 0;
}

