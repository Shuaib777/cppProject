#include <cctype>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void clearScreen() {
#ifdef _WIN32
  system("cls");

#endif
}

class Order {
private:
  char option;
  int quantity;
  string customerName;
  string customerAddress;
  vector<int> orderQuantity;
  vector<string> orderNames;
  vector<float> orderPrices;
  int n = 0;

public:
  void orderAgain();
  void startMenu();
  void confirmOrder();
  void cancelOrder();
  void confirmShow();
  void showOrder();
  void receipt();
  void errorPrompt();
  void northIndian();
  void southIndian();
  void chinese();
  void italian();
  void fastFood();
  void desserts();
  void drinks();
};

void Order::northIndian() {
  clearScreen();

  cout << "\n\t NORTH INDIAN";

  cout << "\n\n\t [Choice 1] Chole Bhature \t Rs 150";
  cout << "\n\t [Choice 2] Kadai Paneer \t Rs 250";
  cout << "\n\t [Choice 3] Chole kulche \t Rs 120";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Chole Bhature");
    orderPrices.push_back(quantity * 150.00);
    break;

  case '2':
    orderNames.push_back("Kadai Paneer");
    orderPrices.push_back(quantity * 250.00);
    break;

  case '3':
    orderNames.push_back("Chole Kulche");
    orderPrices.push_back(quantity * 120.00);
    break;

  default:
    errorPrompt();
    break;
  }
  confirmShow();
}

void Order::southIndian() {
  clearScreen();

  cout << "\n\t SOUTH INDIAN";

  cout << "\n\n\t [Choice 1] Dosa \t Rs 160.00";
  cout << "\n\t [Choice 2] Hyderabadi Biryani \t Rs 350.00";
  cout << "\n\t [Choice 3] Idli \t Rs 100.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Dosa");
    orderPrices.push_back(quantity * 160.00);
    break;

  case '2':
    orderNames.push_back("Hyderabadi Biryani");
    orderPrices.push_back(quantity * 350.00);
    break;

  case '3':
    orderNames.push_back("Idli");
    orderPrices.push_back(quantity * 100.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::chinese() {
  clearScreen();

  cout << "\n\t CHINESE";

  cout << "\n\n\t [Choice 1] Spring Roll \t Rs 100.00";
  cout << "\n\t [Choice 2] Fried Momos \t Rs 60.00";
  cout << "\n\t [Choice 3] Chowmein \t Rs 80.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Spring Roll");
    orderPrices.push_back(quantity * 100.00);
    break;

  case '2':
    orderNames.push_back("Fried Momos");
    orderPrices.push_back(quantity * 60.00);
    break;

  case '3':
    orderNames.push_back("Chowmein");
    orderPrices.push_back(quantity * 80.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::italian() {
  clearScreen();

  cout << "\n\t ";

  cout << "\n\n\t [Choice 1] Red Sauce Pasta\t Rs 150.00";
  cout << "\n\t [Choice 2] Margherita Pizza \t Rs 100.00";
  cout << "\n\t [Choice 3] Capsicum Pizza \t Rs 150.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Red Sauce Pasta");
    orderPrices.push_back(quantity * 150.00);
    break;

  case '2':
    orderNames.push_back("Margherita Pizza");
    orderPrices.push_back(quantity * 100.00);
    break;

  case '3':
    orderNames.push_back("Capsicum Pizza");
    orderPrices.push_back(quantity * 150.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::fastFood() {
  clearScreen();

  cout << "\n\t FAST FOOD";

  cout << "\n\n\t [Choice 1]  Cheese Burger\t Rs 60.00";
  cout << "\n\t [Choice 2] Sandwich \t Rs 60.00";
  cout << "\n\t [Choice 3] Hotdog \t Rs 60.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Cheese Burger");
    orderPrices.push_back(quantity * 60.00);
    break;

  case '2':
    orderNames.push_back("Sandwich");
    orderPrices.push_back(quantity * 60.00);
    break;

  case '3':
    orderNames.push_back("Hotdog");
    orderPrices.push_back(quantity * 60.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::desserts() {
  clearScreen();

  cout << "\n\t ";

  cout << "\n\n\t [Choice 1]  Bread and butter pudding\t Rs 150.00";
  cout << "\n\t [Choice 2]  Cherry ripe truffles \t Rs 150.00";
  cout << "\n\t [Choice 3] Baklava rolls \t Rs 100.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Bread and butter pudding");
    orderPrices.push_back(quantity * 150.00);
    break;

  case '2':
    orderNames.push_back("Cherry ripe truffles");
    orderPrices.push_back(quantity * 1500.00);
    break;

  case '3':
    orderNames.push_back("Baklava rolls ");
    orderPrices.push_back(quantity * 100.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::drinks() {
  clearScreen();

  cout << "\n\t DRINKS";

  cout << "\n\n\t [Choice 1] 250 ml Mango Shake \t\t Rs 60.00";
  cout << "\n\t [Choice 2] 250 ml Melon Shake \t\t Rs 60.00";
  cout << "\n\t [Choice 3] 250 ml Coconut Shake \t Rs 65.00";
  cout << "\n\t [Choice 4] 250 ml Coca-Cola Softdrink \t Rs 70.00";
  cout << "\n\t [Choice 5] 250 ml Sprite Softdrink \t Rs 30.00";
  cout << "\n\t [Choice 6] 250 ml Royal Softdrink \t Rs 40.00";
  cout << "\n\t [Choice 7] 250 ml Vitamilk Vitamin Drink \t Rs 50.00";
  cout << "\n\t [Choice 8] 250 ml Cobra Energy Drink \t Rs 50.00";
  cout << "\n\t [Choice 9] 250 ml Sting Energy Drink \t Rs 30.00";

  cout << "\n\n\t Enter your choice: ";
  cin >> option;

  cout << "\n\t How many quantities? ";
  cin >> quantity;

  orderQuantity.push_back(quantity);

  n++;

  switch (option) {
  case '1':
    orderNames.push_back("Mango Shake");
    orderPrices.push_back(quantity * 60.00);
    break;

  case '2':
    orderNames.push_back("Melon Shake");
    orderPrices.push_back(quantity * 60.00);
    break;

  case '3':
    orderNames.push_back("Coconut Shake");
    orderPrices.push_back(quantity * 65.00);
    break;

  case '4':
    orderNames.push_back("Coca-cola Softdrink");
    orderPrices.push_back(quantity * 70.00);
    break;

  case '5':
    orderNames.push_back("Sprite Softdrink");
    orderPrices.push_back(quantity * 30.00);
    break;

  case '6':
    orderNames.push_back("Royal Softdrink");
    orderPrices.push_back(quantity * 40.00);
    break;

  case '7':
    orderNames.push_back("Vitamilk Vitamin Drink");
    orderPrices.push_back(quantity * 50.00);
    break;

  case '8':
    orderNames.push_back("Cobra Energy Drink");
    orderPrices.push_back(quantity * 50.00);
    break;

  case '9':
    orderNames.push_back("Sting Energy Drink");
    orderPrices.push_back(quantity * 30.00);
    break;

  default:
    errorPrompt();
    break;
  }

  confirmShow();
}

void Order::orderAgain() {
  char choice;

  cout << "\n\t Order another food? (Y/N)? ";
  cin >> choice;

  switch (toupper(choice)) {
  case 'Y':
    startMenu();
    break;

  case 'N':
    cout << "\n\t Confirm all food orders? (Y/N)? ";
    cin >> choice;

    switch (toupper(choice)) {
    case 'Y':
      confirmOrder();
      break;

    case 'N':
      n = 0;
      orderQuantity.clear();
      orderNames.clear();
      orderPrices.clear();

      cout << "\n\t Your all food orders has been cancelled.";
      cout << "\n\t Thank you for using Brogrammers!";

      cout << "\n\n\t Press enter to return to main menu...";

      cin.ignore();
      getchar();

      startMenu();
      break;

    default:
      errorPrompt();
      break;
    }

  default:
    errorPrompt();
    break;
  }
}

void Order::confirmShow() {
  char choice;

  cout << "\n\t Show all food order? (Y/N)? ";
  cin >> choice;

  switch (toupper(choice)) {
  case 'Y':
    showOrder();
    break;

  case 'N':
    orderAgain();
    break;

  default:
    errorPrompt();
    break;
  }
}

void Order::receipt() {
  clearScreen();

  cout << "RECEIPT: \n";

  cout << "\n--------------------------------------------------------------\n";

  cout << "\n\t --- BROGRAMMERS ---";
  cout << "\n BENNETT UNIVERSITY GREATER NOIDA UP";

  cout << "\n\n Customer Name: " << customerName;
  cout << "\n Address: " << customerAddress;

  cout << "\n\n Orders: \n";

  for (int i = 0; i < n; i++) {
    cout << "\t" << orderQuantity[i] << " " << orderNames[i] << "\t "
         << "Rs " << orderPrices[i] << ".00";
    cout << "\n";
  }

  cout << "\n TOTAL PRICE: Rs "
       << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00";

  cout << "\n\n Thank you for ordering in Brogrammers!\n";

  cout << "\n--------------------------------------------------------------\n";

  n = 0;
  orderQuantity.clear();
  orderNames.clear();
  orderPrices.clear();

  cout << "\n NOTE: Your order will be delivered in 40 minutes.\n";
  cout << "\n Press enter to continue...";
  getchar();
  startMenu();
}

void Order::showOrder() {
  clearScreen();

  cout << "\n\t --- BROGRAMMERS --- ";
  cout << "\n\t\t *** Show Orders ***";

  if (n == 0) {
    cout << "\n\n\t You have no order yet!";

    cout << "\n\t Go back to main menu? (Y/N)? ";
    cin >> option;

    switch (toupper(option)) {
    case 'Y':
      startMenu();
      break;

    case 'N':
      cout << "\n\t Thank you for using BROGRAMMERS!";
      exit(0);
      break;

    default:
      errorPrompt();
      break;
    }
  }

  else {
    cout << "\n\n\t Orders: \n";

    for (int i = 0; i < n; i++) {
      cout << "\t\t" << orderQuantity[i] << " " << orderNames[i] << "\t "
           << "Rs " << orderPrices[i] << ".00";
      cout << "\n";
    }

    cout << "\n\t TOTAL PRICE: Rs "
         << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00\n";

    orderAgain();
  }
}

void Order::cancelOrder() {
  clearScreen();

  cout << "\n\t --- BROGRAMMERS --- ";
  cout << "\n\t\t *** Cancel Order ***";

  if (n == 0) {
    cout << "\n\n\t You have no order yet!";

    cout << "\n\t Go back to main menu? (Y/N)? ";
    cin >> option;

    switch (toupper(option)) {
    case 'Y':
      startMenu();
      break;

    case 'N':
      cout << "\n\t Thank you for using BROGRAMMERS!";
      exit(0);
      break;

    default:
      errorPrompt();
      break;
    }
  }

  else {
    cout << "\n\n\t Cancel all orders? (Y/N)? ";
    cin >> option;

    switch (toupper(option)) {
      n = 0;
      orderQuantity.clear();
      orderNames.clear();
      orderPrices.clear();

      cout << "\n\t Your order has been cancelled.";

      cout << "\n\t Go back to main menu? (Y/N)? ";
      cin >> option;

      switch (toupper(option)) {
      case 'Y':
        startMenu();
        break;

      case 'N':
        cout << "\n\t Thank you for using BROGRAMMERS!";
        exit(0);
        break;

      default:
        errorPrompt();
        break;
      }
      break;

    case 'N':
      cout << "\n\t Your order is not cancelled.";
      cout << "\n\t Press enter to return to main menu...";
      cin.ignore();
      getchar();
      startMenu();
      break;

    default:
      errorPrompt();
      break;
    }
  }
}

void Order::confirmOrder() {
  clearScreen();

  cout << "\n\t --- BROGRAMMERS --- ";
  cout << "\n\t\t *** Confirm Order ***";

  if (n == 0) {
    cout << "\n\n\t You have no order yet!";

    cout << "\n\t Go back to main menu? (Y/N)? ";
    cin >> option;

    switch (toupper(option)) {
    case 'Y':
      startMenu();
      break;

    case 'N':
      cout << "\n\t Thank you for using BROGRAMMERS!";
      exit(0);
      break;

    default:
      errorPrompt();
      break;
    }
  }

  else {
    cin.ignore();

    cout << "\n\n Enter your full name: ";
    getline(cin, customerName);

    cout << " Enter the address where to deliver: ";
    getline(cin, customerAddress);

    receipt();
  }
}

void Order::errorPrompt() {
  cout << "\n\t ERROR! Invalid Input!";
  cout << "\n\t ALL FOOD ORDERS HAS BEEN CANCELLED!";
  cout << "\n\n\t Exiting the program...\n";
  exit(1);
}

void Order::startMenu() {
  clearScreen();

  cout << "\n\t --- BROGRAMMERS ---";
  cout << "\n\t\t *** Main Menu ***";

  cout << "\n\n\t [Option 1] NORTH INDIAN";
  cout << "\n\t [Option 2] SOUTH INDIAN";
  cout << "\n\t [Option 3] CHINESE";
  cout << "\n\t [Option 4] ITALIAN";
  cout << "\n\t [Option 5] FAST FOOD";
  cout << "\n\t [Option 6] DESSERTS";
  cout << "\n\t [Option 7] Drinks";

  cout << "\n\n\t [Option A] CONFIRM ORDER";
  cout << "\n\t [Option B] CANCEL ORDER";
  cout << "\n\t [Option C] SHOW ORDERS";

  cout << "\n\n\t Enter your option: ";
  cin >> option;

  switch (toupper(option)) {
  case '1':
    northIndian();
    break;

  case '2':
    southIndian();
    break;

  case '3':
    chinese();
    break;

  case '4':
    italian();
    break;

  case '5':
    fastFood();
    break;

  case '6':
    desserts();
    break;

  case '7':
    drinks();
    break;

  case 'A':
    confirmOrder();
    break;

  case 'B':
    cancelOrder();
    break;

  case 'C':
    showOrder();
    break;

  default:
    errorPrompt();
    break;
  }
}

int main() {
  Order myOrder;

  myOrder.startMenu();
  return 0;
}