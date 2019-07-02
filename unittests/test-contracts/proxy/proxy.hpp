/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>
#include <zdtio/singleton.hpp>
#include <zdtio/asset.hpp>

// Extacted from zdtio.token contract:
namespace zdtio {
   class [[zdtio::contract("zdtio.token")]] token : public zdtio::contract {
   public:
      using zdtio::contract::contract;

      [[zdtio::action]]
      void transfer( zdtio::name        from,
                     zdtio::name        to,
                     zdtio::asset       quantity,
                     const std::string& memo );
      using transfer_action = zdtio::action_wrapper<"transfer"_n, &token::transfer>;
   };
}

// This contract:
class [[zdtio::contract]] proxy : public zdtio::contract {
public:
   proxy( zdtio::name self, zdtio::name first_receiver, zdtio::datastream<const char*> ds );

   [[zdtio::action]]
   void setowner( zdtio::name owner, uint32_t delay );

   [[zdtio::on_notify("zdtio.token::transfer")]]
   void on_transfer( zdtio::name        from,
                     zdtio::name        to,
                     zdtio::asset       quantity,
                     const std::string& memo );

   [[zdtio::on_notify("zdtio::onerror")]]
   void on_error( uint128_t sender_id, zdtio::ignore<std::vector<char>> sent_trx );

   struct [[zdtio::table]] config {
      zdtio::name owner;
      uint32_t    delay   = 0;
      uint32_t    next_id = 0;

      ZDTLIB_SERIALIZE( config, (owner)(delay)(next_id) )
   };

   using config_singleton = zdtio::singleton< "config"_n,  config >;

protected:
   config_singleton _config;
};
