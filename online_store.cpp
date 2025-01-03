#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    // vector to store products details
    vector<Product> products={
        {101, "Laptop", "Electronics"},
        {102, "Mouse", "Electronics"},
        {103, "Keyboard", "Electronics"},
        {104, "Smartphone", "Electronics"},
        {105, "Headphones", "Electronics"},
        {106, "Monitor", "Electronics"},
        {107, "Mousepad", "Electronics"},
        {108, "Mouse Mat", "Electronics"},
        {109, "Keyboard Mat", "Electronics"},
        {110, "Chair", "Furniture"},
        {111 ,"Blender", "Kitchen"},
        {112,"Desk lamp","Home"},
    };
    
    // recent customer visits
    deque<string>recentCustomer={"C001","C002","C003"};
    
    recentCustomer.push_back("C004");
    recentCustomer.push_front("C005");

    //list to store order history

    list<Order>orderHistory;

    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,3,"C002",time(0)});
    orderHistory.push_back({3,103,5,"C003",time(0)});

    
     // to store unique category of product
     set<string>categories;

     for(const auto& product:products){
           categories.insert(product.category);
     }
     
     // to store the product stocks
     map<int,int>productStock={
         {101,10},
         {102,20},
         {103,10},
         {104,30},
         {105,40},
         {106,10},
         {107,20},
         {108,10},
         {109,15},
         {110,10},
         {111,9},
         {112,7},
     };

    // one customer can order multiple things -> using multimap

    multimap<string,Order>customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID,order});
    }

    // customer data
    unordered_map<string,string>customerData={
                {"C001","Vishal Patel"},
                {"C002","Alice"},
                {"C003","Bob"},
                {"C004","Vidya"},
                {"C005","Vineet"},
    };
    
    // to store unique product
    unordered_set<int>uniqueProductIDs;
    for(const auto &product:products){
        uniqueProductIDs.insert(product.productID);
    }
    
    //printing unique product IDs
    cout<<"Unique Product IDs:"<<endl;
    for(const auto &Pid:uniqueProductIDs){
        cout<<Pid<<endl;
    }
    
    // Printing order history
    cout<<"\nOrder History:"<<endl;
    for(const auto &order:orderHistory){
        cout<<"Order ID: "<<order.orderID<<", Product ID: "<<
        order.productID<<", Quantity: "<<order.quantity<<", Customer ID: "<<order.customerID<<
        ", Order Date: "<<ctime(&order.orderDate)<<endl;
    }
    
    // Printing recent customer visits
    cout<<"\nRecent Customer Visits:"<<endl;
    for(const auto &visit:recentCustomer){
        cout<<visit<<endl;
    }
    return 0;
}
