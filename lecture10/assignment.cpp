#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int new_random()
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(0, 99);

  return dis(gen);
}

int new_date()
{
  time_t curr_time = time(NULL);

  struct tm *t = localtime(&curr_time);

  int curr_year = t->tm_year + 1900;
  int curr_month = t->tm_mon + 1;
  int curr_day = t->tm_mday;
  int curr_hour = t->tm_hour;
  int curr_minute = t->tm_min;
  int curr_second = t->tm_sec;

  int total_number = curr_year + curr_month + curr_day + curr_hour + curr_minute + curr_second;

  return total_number;
}

class Robot
{
public:
  Robot()
  {
    price = 0;
    company = 'A';
    id_public = new_date() + new_random();

    arms = 2;
    legs = 2;
    wheels = 0;
    id_protected = new_date();
  };
  Robot(int p, char c, int a_num, int l_num, int w_num)
  {
    price = p;
    company = c;
    id_public = new_date() + new_random();

    arms = a_num;
    legs = l_num;
    wheels = w_num;
    id_protected = new_date();
  }

  int price, id_public;
  char company;

  void show_info()
  {
    cout << "Robot Price: " << price << endl;
    cout << "Robot Company: " << company << endl;
    cout << "Robot ID: " << id_public << endl;
    cout << "Robot arms, legs, wheels: " << arms << " " << legs << " " << wheels << " " << endl;
    cout << endl;
  }
  virtual void say_robo()
  {
    cout << "Hello I'm " << company << " Company's Robot!" << endl;
    cout << "My ID is " << id_public << "." << endl;
    cout << "I can only introduce myself." << endl;
    cout << "If you want to do something different, you can choose other robot!" << endl;
    cout << endl;
  }

protected:
  int id_protected;
  int arms, legs, wheels;
};

class Cook_Robot : public Robot
{
public:
  Cook_Robot()
  {
    this->arms = 4;
    this->legs = 0;
    this->wheels = 4;

    recipe = 0;
    meat = 0;
    vegetables = 0;
    seasoning = 0;
  };
  Cook_Robot(int p, int c, int r, int m, int v, int s)
  {
    this->arms = 4;
    this->legs = 0;
    this->wheels = 4;
    this->price = p;
    this->company = c;

    recipe = r;
    meat = m;
    vegetables = v;
    seasoning = s;
  };

  void say_robo()
  {
    cout << "Hello I'm " << company << " Company's Cooking Robot!" << endl;
    cout << "My ID is " << id_public << "." << endl;
    cout << "I can tell you my all recipe and ingredients for cooking number." << endl;
    cout << "If you want to know cooking info, please enter and choose my cooking info." << endl;
    cout << endl;
  }

private:
  int recipe;
  int meat, vegetables, seasoning;
};

class Wash_Robot : public Robot
{
public:
  Wash_Robot()
  {
    this->arms = 2;
    this->legs = 0;
    this->wheels = 2;

    detergents = 0;
    cups = 0;
    plates = 0;
    bowls = 0;
  };
  Wash_Robot(int p, int c, int d, int cu, int pl, int bo)
  {
    this->arms = 2;
    this->legs = 0;
    this->wheels = 2;
    this->price = p;
    this->company = c;

    detergents = d;
    cups = cu;
    plates = pl;
    bowls = bo;
  };

  void say_robo()
  {
    cout << "Hello I'm " << company << " Company's Washing Robot!" << endl;
    cout << "My ID is " << id_public << "." << endl;
    cout << "I can tell you my all detergent and dishes for washing number." << endl;
    cout << "If you want to know washing info, please enter and choose my washing info." << endl;
    cout << endl;
  }

private:
  int detergents;
  int cups, plates, bowls;
};

class Talk_Robot : public Robot
{
public:
  Talk_Robot()
  {
    this->arms = 2;
    this->legs = 0;
    this->wheels = 2;

    scenarios = 0;
    emotions = 0;
    voices = 0;
    volumes = 0;
  };
  Talk_Robot(int p, int c, int sc, int em, int voi, int vol)
  {
    this->arms = 2;
    this->legs = 2;
    this->wheels = 0;
    this->price = p;
    this->company = c;

    scenarios = sc;
    emotions = em;
    voices = voi;
    volumes = vol;
  };

  void say_robo()
  {
    cout << "Hello I'm " << company << " Company's Talking Robot!" << endl;
    cout << "My ID is " << id_public << "." << endl;
    cout << "I can tell you my all scenarios and voices for talking number." << endl;
    cout << "If you want to know talking info, please enter and choose my talking info." << endl;
    cout << endl;
  }

private:
  int scenarios;
  int emotions, voices, volumes;
};

int main()
{
  Robot *my_robo, *my_robo2;
  Cook_Robot *my_cook_robo;
  Wash_Robot *my_wash_robo;
  Talk_Robot *my_talk_robo;

  my_robo = new Robot();
  my_robo2 = new Robot(5000, 'B', 5, 5, 2);
  my_cook_robo = new Cook_Robot(10000, 'C', 5, 3, 3, 5);
  my_wash_robo = new Wash_Robot(20000, 'D', 5, 3, 3, 5);
  my_talk_robo = new Talk_Robot(50000, 'E', 5, 3, 3, 5);

  my_robo2->show_info();
  my_robo2->say_robo();

  my_robo->show_info();
  my_robo->say_robo();

  my_cook_robo->show_info();
  my_cook_robo->say_robo();

  my_wash_robo->show_info();
  my_wash_robo->say_robo();

  my_talk_robo->show_info();
  my_talk_robo->say_robo();

  return 0;
}
