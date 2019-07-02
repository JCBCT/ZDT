/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] integration_test : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action]]
   void store( zdtio::name from, zdtio::name to, uint64_t num );

   struct [[zdtio::table("payloads")]] payload {
      uint64_t              key;
      std::vector<uint64_t> data;

      uint64_t primary_key()const { return key; }

      ZDTLIB_SERIALIZE( payload, (key)(data) )
   };

   using payloads_table = zdtio::multi_index< "payloads"_n,  payload >;

};
