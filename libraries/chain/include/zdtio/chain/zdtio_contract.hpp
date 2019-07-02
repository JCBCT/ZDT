/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/chain/types.hpp>
#include <zdtio/chain/contract_types.hpp>

namespace zdtio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_zdtio_newaccount(apply_context&);
   void apply_zdtio_updateauth(apply_context&);
   void apply_zdtio_deleteauth(apply_context&);
   void apply_zdtio_linkauth(apply_context&);
   void apply_zdtio_unlinkauth(apply_context&);

   /*
   void apply_zdtio_postrecovery(apply_context&);
   void apply_zdtio_passrecovery(apply_context&);
   void apply_zdtio_vetorecovery(apply_context&);
   */

   void apply_zdtio_setcode(apply_context&);
   void apply_zdtio_setabi(apply_context&);

   void apply_zdtio_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace zdtio::chain
