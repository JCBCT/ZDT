/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] test_api_multi_index : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action("s1g")]]
   void idx64_general();

   [[zdtio::action("s1store")]]
   void idx64_store_only();

   [[zdtio::action("s1check")]]
   void idx64_check_without_storing();

   [[zdtio::action("s1findfail1")]]
   void idx64_require_find_fail();

   [[zdtio::action("s1findfail2")]]
   void idx64_require_find_fail_with_msg();

   [[zdtio::action("s1findfail3")]]
   void idx64_require_find_sk_fail();

   [[zdtio::action("s1findfail4")]]
   void idx64_require_find_sk_fail_with_msg();

   [[zdtio::action("s1pkend")]]
   void idx64_pk_iterator_exceed_end();

   [[zdtio::action("s1skend")]]
   void idx64_sk_iterator_exceed_end();

   [[zdtio::action("s1pkbegin")]]
   void idx64_pk_iterator_exceed_begin();

   [[zdtio::action("s1skbegin")]]
   void idx64_sk_iterator_exceed_begin();

   [[zdtio::action("s1pkref")]]
   void idx64_pass_pk_ref_to_other_table();

   [[zdtio::action("s1skref")]]
   void idx64_pass_sk_ref_to_other_table();

   [[zdtio::action("s1pkitrto")]]
   void idx64_pass_pk_end_itr_to_iterator_to();

   [[zdtio::action("s1pkmodify")]]
   void idx64_pass_pk_end_itr_to_modify();

   [[zdtio::action("s1pkerase")]]
   void idx64_pass_pk_end_itr_to_erase();

   [[zdtio::action("s1skitrto")]]
   void idx64_pass_sk_end_itr_to_iterator_to();

   [[zdtio::action("s1skmodify")]]
   void idx64_pass_sk_end_itr_to_modify();

   [[zdtio::action("s1skerase")]]
   void idx64_pass_sk_end_itr_to_erase();

   [[zdtio::action("s1modpk")]]
   void idx64_modify_primary_key();

   [[zdtio::action("s1exhaustpk")]]
   void idx64_run_out_of_avl_pk();

   [[zdtio::action("s1skcache")]]
   void idx64_sk_cache_pk_lookup();

   [[zdtio::action("s1pkcache")]]
   void idx64_pk_cache_sk_lookup();

   [[zdtio::action("s2g")]]
   void idx128_general();

   [[zdtio::action("s2store")]]
   void idx128_store_only();

   [[zdtio::action("s2check")]]
   void idx128_check_without_storing();

   [[zdtio::action("s2autoinc")]]
   void idx128_autoincrement_test();

   [[zdtio::action("s2autoinc1")]]
   void idx128_autoincrement_test_part1();

   [[zdtio::action("s2autoinc2")]]
   void idx128_autoincrement_test_part2();

   [[zdtio::action("s3g")]]
   void idx256_general();

   [[zdtio::action("sdg")]]
   void idx_double_general();

   [[zdtio::action("sldg")]]
   void idx_long_double_general();

};
