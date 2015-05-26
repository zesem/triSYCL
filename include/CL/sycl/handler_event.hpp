#ifndef TRISYCL_SYCL_HANDLER_EVENT_HPP
#define TRISYCL_SYCL_HANDLER_EVENT_HPP

#include "CL/sycl/access.hpp"
#include "CL/sycl/accessor/detail/accessor.hpp"

/** \file The handler event

    Implement parallel constructions to launch kernels

    Ronan at keryell dot FR

    This file is distributed under the University of Illinois Open Source
    License. See LICENSE.TXT for details.
*/

// SYCL dwells in the cl::sycl namespace
namespace cl {
namespace sycl {

/** \todo To be implemented */
/** Handler event

    \todo To be implemented
*/
class handler_event {
/*
 public:
  event get_kernel() const;
  event get_complete() const;
  event get_end() const;
*/
public:
    detail::accessor<void, 0, access::mode::atomic, access::target::handler_event>
        get_access()
    {
        return{ *this };
    }        
};

}
}

/*
    # Some Emacs stuff:
    ### Local Variables:
    ### ispell-local-dictionary: "american"
    ### eval: (flyspell-prog-mode)
    ### End:
*/

#endif // TRISYCL_SYCL_HANDLER_EVENT_HPP
