/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#include <zdtiolib/zdtio.hpp>

#include "test_api.hpp"

void test_types::types_size() {

   zdtio_assert( sizeof(int64_t)   ==  8, "int64_t size != 8"   );
   zdtio_assert( sizeof(uint64_t)  ==  8, "uint64_t size != 8"  );
   zdtio_assert( sizeof(uint32_t)  ==  4, "uint32_t size != 4"  );
   zdtio_assert( sizeof(int32_t)   ==  4, "int32_t size != 4"   );
   zdtio_assert( sizeof(uint128_t) == 16, "uint128_t size != 16");
   zdtio_assert( sizeof(int128_t)  == 16, "int128_t size != 16" );
   zdtio_assert( sizeof(uint8_t)   ==  1, "uint8_t size != 1"   );

   zdtio_assert( sizeof(zdtio::name) ==  8, "name size !=  8");
}

void test_types::char_to_symbol() {

   zdtio_assert( zdtio::name::char_to_value('1') ==  1, "zdtio::char_to_symbol('1') !=  1" );
   zdtio_assert( zdtio::name::char_to_value('2') ==  2, "zdtio::char_to_symbol('2') !=  2" );
   zdtio_assert( zdtio::name::char_to_value('3') ==  3, "zdtio::char_to_symbol('3') !=  3" );
   zdtio_assert( zdtio::name::char_to_value('4') ==  4, "zdtio::char_to_symbol('4') !=  4" );
   zdtio_assert( zdtio::name::char_to_value('5') ==  5, "zdtio::char_to_symbol('5') !=  5" );
   zdtio_assert( zdtio::name::char_to_value('a') ==  6, "zdtio::char_to_symbol('a') !=  6" );
   zdtio_assert( zdtio::name::char_to_value('b') ==  7, "zdtio::char_to_symbol('b') !=  7" );
   zdtio_assert( zdtio::name::char_to_value('c') ==  8, "zdtio::char_to_symbol('c') !=  8" );
   zdtio_assert( zdtio::name::char_to_value('d') ==  9, "zdtio::char_to_symbol('d') !=  9" );
   zdtio_assert( zdtio::name::char_to_value('e') == 10, "zdtio::char_to_symbol('e') != 10" );
   zdtio_assert( zdtio::name::char_to_value('f') == 11, "zdtio::char_to_symbol('f') != 11" );
   zdtio_assert( zdtio::name::char_to_value('g') == 12, "zdtio::char_to_symbol('g') != 12" );
   zdtio_assert( zdtio::name::char_to_value('h') == 13, "zdtio::char_to_symbol('h') != 13" );
   zdtio_assert( zdtio::name::char_to_value('i') == 14, "zdtio::char_to_symbol('i') != 14" );
   zdtio_assert( zdtio::name::char_to_value('j') == 15, "zdtio::char_to_symbol('j') != 15" );
   zdtio_assert( zdtio::name::char_to_value('k') == 16, "zdtio::char_to_symbol('k') != 16" );
   zdtio_assert( zdtio::name::char_to_value('l') == 17, "zdtio::char_to_symbol('l') != 17" );
   zdtio_assert( zdtio::name::char_to_value('m') == 18, "zdtio::char_to_symbol('m') != 18" );
   zdtio_assert( zdtio::name::char_to_value('n') == 19, "zdtio::char_to_symbol('n') != 19" );
   zdtio_assert( zdtio::name::char_to_value('o') == 20, "zdtio::char_to_symbol('o') != 20" );
   zdtio_assert( zdtio::name::char_to_value('p') == 21, "zdtio::char_to_symbol('p') != 21" );
   zdtio_assert( zdtio::name::char_to_value('q') == 22, "zdtio::char_to_symbol('q') != 22" );
   zdtio_assert( zdtio::name::char_to_value('r') == 23, "zdtio::char_to_symbol('r') != 23" );
   zdtio_assert( zdtio::name::char_to_value('s') == 24, "zdtio::char_to_symbol('s') != 24" );
   zdtio_assert( zdtio::name::char_to_value('t') == 25, "zdtio::char_to_symbol('t') != 25" );
   zdtio_assert( zdtio::name::char_to_value('u') == 26, "zdtio::char_to_symbol('u') != 26" );
   zdtio_assert( zdtio::name::char_to_value('v') == 27, "zdtio::char_to_symbol('v') != 27" );
   zdtio_assert( zdtio::name::char_to_value('w') == 28, "zdtio::char_to_symbol('w') != 28" );
   zdtio_assert( zdtio::name::char_to_value('x') == 29, "zdtio::char_to_symbol('x') != 29" );
   zdtio_assert( zdtio::name::char_to_value('y') == 30, "zdtio::char_to_symbol('y') != 30" );
   zdtio_assert( zdtio::name::char_to_value('z') == 31, "zdtio::char_to_symbol('z') != 31" );

   for(unsigned char i = 0; i<255; i++) {
      if( (i >= 'a' && i <= 'z') || (i >= '1' || i <= '5') ) continue;
      zdtio_assert( zdtio::name::char_to_value((char)i) == 0, "zdtio::char_to_symbol() != 0" );
   }
}

void test_types::string_to_name() {
   return;
   zdtio_assert( zdtio::name("a") == "a"_n, "zdtio::string_to_name(a)" );
   zdtio_assert( zdtio::name("ba") == "ba"_n, "zdtio::string_to_name(ba)" );
   zdtio_assert( zdtio::name("cba") == "cba"_n, "zdtio::string_to_name(cba)" );
   zdtio_assert( zdtio::name("dcba") == "dcba"_n, "zdtio::string_to_name(dcba)" );
   zdtio_assert( zdtio::name("edcba") == "edcba"_n, "zdtio::string_to_name(edcba)" );
   zdtio_assert( zdtio::name("fedcba") == "fedcba"_n, "zdtio::string_to_name(fedcba)" );
   zdtio_assert( zdtio::name("gfedcba") == "gfedcba"_n, "zdtio::string_to_name(gfedcba)" );
   zdtio_assert( zdtio::name("hgfedcba") == "hgfedcba"_n, "zdtio::string_to_name(hgfedcba)" );
   zdtio_assert( zdtio::name("ihgfedcba") == "ihgfedcba"_n, "zdtio::string_to_name(ihgfedcba)" );
   zdtio_assert( zdtio::name("jihgfedcba") == "jihgfedcba"_n, "zdtio::string_to_name(jihgfedcba)" );
   zdtio_assert( zdtio::name("kjihgfedcba") == "kjihgfedcba"_n, "zdtio::string_to_name(kjihgfedcba)" );
   zdtio_assert( zdtio::name("lkjihgfedcba") == "lkjihgfedcba"_n, "zdtio::string_to_name(lkjihgfedcba)" );
   zdtio_assert( zdtio::name("mlkjihgfedcba") == "mlkjihgfedcba"_n, "zdtio::string_to_name(mlkjihgfedcba)" );
}
