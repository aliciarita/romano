// Copyright 2021 <Alícia Rita Oliveira dos Reis>
#define CATCH_CONFIG_MAIN
#include"catch.hpp"
#include"romano.hpp"

TEST_CASE("Numeros romanos com um simbolo romano", "[romano]") {
  REQUIRE(romanoParainteiro("I") == 1);
  REQUIRE(romanoParainteiro("V") == 5);
  REQUIRE(romanoParainteiro("X") == 10);
  REQUIRE(romanoParainteiro("L") == 50);
  REQUIRE(romanoParainteiro("C") == 100);
  REQUIRE(romanoParainteiro("D") == 500);
  REQUIRE(romanoParainteiro("M") == 1000);
}

TEST_CASE("Numeros romanos com dois simbolos romanos", "[romano]") {
  REQUIRE(romanoParainteiro("II") == 2);
  REQUIRE(romanoParainteiro("VI") == 6);
  REQUIRE(romanoParainteiro("XV") == 15);
  REQUIRE(romanoParainteiro("LV") == 55);
  REQUIRE(romanoParainteiro("CL") == 150);
  REQUIRE(romanoParainteiro("DX") == 510);
  REQUIRE(romanoParainteiro("MM") == 2000);
}

TEST_CASE("Numeros romanos com três simbolos romanos", "[romano]") {
  REQUIRE(romanoParainteiro("III") == 3);
  REQUIRE(romanoParainteiro("XXI") == 21);
  REQUIRE(romanoParainteiro("XXX") == 30);
  REQUIRE(romanoParainteiro("LXI") == 61);
  REQUIRE(romanoParainteiro("CXL") == 140);
  REQUIRE(romanoParainteiro("DXC") == 590);
  REQUIRE(romanoParainteiro("MMM") == 3000);
}
