#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"

TEST_CASE("Testing Lab6 Task B")
{
CHECK(encryptCaesar("doggo", 10) == "nyqqy");
CHECK(encryptCaesar("goodbye", 1) == "hppeczf");
CHECK(encryptCaesar("hunter", 7) == "obualy");
CHECK(encryptCaesar("apple", 6) == "gvvrk");
CHECK(encryptCaesar("Keyboard", 9) == "Tnhkxjam");
}

TEST_CASE("Testing Lab6 Task C")
{
CHECK(encryptVigenere("doggo", "yes") == "bsyes");
CHECK(encryptVigenere("Woof!", "yes") == "Usgd?");
CHECK(encryptVigenere("Tomatos", "bruh") == "Ufghufm");
CHECK(encryptVigenere("moment", "bruh") == "nfglok");
CHECK(encryptVigenere("NZXT", "eh") == "RGBA");
}

TEST_CASE("Testing Lab6 Task Decrypt Viginere"){
CHECK(decryptVigenere("bsyes", "yes") == "doggo");
CHECK(decryptVigenere("dfwvoln", "bruh") == "coconut");
CHECK(decryptVigenere("nfglok", "bruh") == "moment");
CHECK(decryptVigenere("rgba", "eh") == "nzxt");
CHECK(decryptVigenere("piezcw pbdjs", "yeah") == "reeses puffs");
}

TEST_CASE("Testing Lab6 Task Decrypt Caesar"){
CHECK(decryptCaesar("nyqqy", 10) == "doggo");
CHECK(decryptCaesar("hppeczf", 1) == "goodbye");
CHECK(decryptCaesar("obualy", 7) == "hunter");
CHECK(decryptCaesar("cuxjyavutcuxjy", 6) == "wordsuponwords");
CHECK(decryptCaesar("Qhmaxlxacrbxwn", 9) == "Hydrocortisone");
}