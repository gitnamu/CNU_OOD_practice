#pragma once
#ifndef DECK_H
#define DECK_H
#include <stack>
#include "cardBuilder.h"
using namespace std;

class Deck {
 public:
  void Shuffle();
  void prints();
 private:
  cardBuilder builder;
  Card* Card1 =
      builder.setType(1).setWhere(3).setMonth(1).setName("1�� ��").build();
  Card* Card2 = 
      builder.setType(3).setWhere(3).setMonth(1).setRibbon(1).setName("1�� ȫ��").build();
  Card* Card3 =
      builder.setType(4).setWhere(3).setMonth(1).setName("1�� ��").build();
  Card* Card4 =
      builder.setType(4).setWhere(3).setMonth(1).setName("1�� ��").build();
  Card* Card5 = 
      builder.setType(2).setWhere(3).setMonth(2).setGodori().setName("2�� ����").build();
  Card* Card6 = 
      builder.setType(3).setWhere(3).setMonth(2).setRibbon(1).setName("2�� ȫ��").build();
  Card* Card7 =
      builder.setType(4).setWhere(3).setMonth(2).setName("2�� ��").build();
  Card* Card8 =
      builder.setType(4).setWhere(3).setMonth(2).setName("2�� ��").build();
  Card* Card9 =
      builder.setType(1).setWhere(3).setMonth(3).setName("3�� ��").build();
  Card* Card10 = 
      builder.setType(3).setWhere(3).setMonth(3).setRibbon(1).setName("3�� ȫ��").build();
  Card* Card11 =
      builder.setType(4).setWhere(3).setMonth(3).setName("3�� ��").build();
  Card* Card12 =
      builder.setType(4).setWhere(3).setMonth(3).setName("3�� ��").build();
  Card* Card13 = 
      builder.setType(2).setWhere(3).setMonth(4).setGodori().setName("4�� ����").build();
  Card* Card14 = 
      builder.setType(3).setWhere(3).setMonth(4).setRibbon(3).setName("4�� �ʴ�").build();
  Card* Card15 =
      builder.setType(4).setWhere(3).setMonth(4).setName("4�� ��").build();
  Card* Card16 =
      builder.setType(4).setWhere(3).setMonth(4).setName("4�� ��").build();
  Card* Card17 =
      builder.setType(2).setWhere(3).setMonth(5).setName("5�� ����").build();
  Card* Card18 = 
      builder.setType(3).setWhere(3).setMonth(5).setRibbon(3).setName("5�� �ʴ�").build();
  Card* Card19 =
      builder.setType(4).setWhere(3).setMonth(5).setName("5�� ��").build();
  Card* Card20 =
      builder.setType(4).setWhere(3).setMonth(5).setName("5�� ��").build();
  Card* Card21 =
      builder.setType(2).setWhere(3).setMonth(6).setName("6�� ����").build();
  Card* Card22 =
      builder.setType(3).setWhere(3).setMonth(6).setRibbon(2).setName("6�� û��").build();
  Card* Card23 =
      builder.setType(4).setWhere(3).setMonth(6).setName("6�� ��").build();
  Card* Card24 =
      builder.setType(4).setWhere(3).setMonth(6).setName("6�� ��").build();
  Card* Card25 = 
      builder.setType(2).setWhere(3).setMonth(7).setGodori().setName("7�� ����").build();
  Card* Card26 = 
      builder.setType(3).setWhere(3).setMonth(7).setRibbon(3).setName("7�� �ʴ�").build();
  Card* Card27 =
      builder.setType(4).setWhere(3).setMonth(7).setName("7�� ��").build();
  Card* Card28 =
      builder.setType(4).setWhere(3).setMonth(7).setName("7�� ��").build();
  Card* Card29 =
      builder.setType(1).setWhere(3).setMonth(8).setName("8�� ��").build();
  Card* Card30 = 
      builder.setType(2).setWhere(3).setMonth(8).setGodori().setName("8�� ����").build();
  Card* Card31 =
      builder.setType(4).setWhere(3).setMonth(8).setName("8�� ��").build();
  Card* Card32 =
      builder.setType(4).setWhere(3).setMonth(8).setName("8�� ��").build();
  Card* Card33 =
      builder.setType(4).setWhere(3).setMonth(9).setSsangP().setName("9�� ����").build();
  Card* Card34 =
      builder.setType(3).setWhere(3).setMonth(9).setRibbon(2).setName("9�� û��").build();
  Card* Card35 =
      builder.setType(4).setWhere(3).setMonth(9).setName("9�� ��").build();
  Card* Card36 =
      builder.setType(4).setWhere(3).setMonth(9).setName("9�� ��").build();
  Card* Card37 =
      builder.setType(2).setWhere(3).setMonth(10).setName("10�� ����").build();
  Card* Card38 =
      builder.setType(3).setWhere(3).setMonth(10).setRibbon(2).setName("10�� û��").build();
  Card* Card39 =
      builder.setType(4).setWhere(3).setMonth(10).setName("10�� ��").build();
  Card* Card40 =
      builder.setType(4).setWhere(3).setMonth(10).setName("10�� ��").build();
  Card* Card41 =
      builder.setType(1).setWhere(3).setMonth(11).setName("11�� ��").build();
  Card* Card42 = 
      builder.setType(4).setWhere(3).setMonth(11).setSsangP().setName("11�� ����").build();
  Card* Card43 =
      builder.setType(4).setWhere(3).setMonth(11).setName("11�� ��").build();
  Card* Card44 =
      builder.setType(4).setWhere(3).setMonth(11).setName("11�� ��").build();
  Card* Card45 = 
      builder.setType(1).setWhere(3).setMonth(12).setBgwang().setName("12�� ��").build();
  Card* Card46 =
      builder.setType(2).setWhere(3).setMonth(12).setName("12�� ����").build();
  Card* Card47 = 
      builder.setType(3).setWhere(3).setMonth(12).setRibbon(3).setName("12�� �ʴ�").build();
  Card* Card48 = 
      builder.setType(4).setWhere(3).setMonth(12).setSsangP().setName("12�� ����").build();

  Card cardset[48];
  stack<Card> c;
  
};

#endif