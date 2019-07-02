/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>
#include <vector>

class [[zdtio::contract]] deferred_test : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action]]
   void defercall( zdtio::name payer, uint64_t sender_id, zdtio::name contract, uint64_t payload );

   [[zdtio::action]]
   void deferfunc( uint64_t payload );
   using deferfunc_action = zdtio::action_wrapper<"deferfunc"_n, &deferred_test::deferfunc>;

   [[zdtio::action]]
   void inlinecall( zdtio::name contract, zdtio::name authorizer, uint64_t payload );

   [[zdtio::on_notify("zdtio::onerror")]]
   void on_error( uint128_t sender_id, zdtio::ignore<std::vector<char>> sent_trx );
};
