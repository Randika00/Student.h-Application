
// ONLY WRITE THE PROTOTYPES OF THE TWO CONSTRUCTORS
//   AND THE DESTRUCTOR

class Item {
   private:
      int itemCode;
      int updateItem;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      // 1. Default Constructor
      Item();
      // 2. Overloaded Constructor
      Item(int pitemCode , float punitPrice);
      // 3. Destructor
      ~Item();
      

      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
