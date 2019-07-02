/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] test_api_db : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action("pg")]]
   void primary_i64_general();

   [[zdtio::action("pl")]]
   void primary_i64_lowerbound();

   [[zdtio::action("pu")]]
   void primary_i64_upperbound();

   [[zdtio::action("s1g")]]
   void idx64_general();

   [[zdtio::action("s1l")]]
   void idx64_lowerbound();

   [[zdtio::action("s1u")]]
   void idx64_upperbound();

   [[zdtio::action("tia")]]
   void test_invalid_access( zdtio::name code, uint64_t val, uint32_t index, bool store );

   [[zdtio::action("sdnancreate")]]
   void idx_double_nan_create_fail();

   [[zdtio::action("sdnanmodify")]]
   void idx_double_nan_modify_fail();

   [[zdtio::action("sdnanlookup")]]
   void idx_double_nan_lookup_fail( uint32_t lookup_type );

   [[zdtio::action("sk32align")]]
   void misaligned_secondary_key256_tests();

};
