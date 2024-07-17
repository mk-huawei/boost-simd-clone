#ifndef BOOST_SIMD_ARCH_ARM_NEON64_TAGS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_TAGS_HPP_INCLUDED

#include <boost/simd/arch/common/tags.hpp>
#include <boost/simd/detail/support.hpp>
#include <boost/simd/detail/cpuid.hpp>

namespace boost { namespace simd
{

  /*!
    @ingroup group-hierarchy
    @brief ARM NEON SIMD architecture hierarchy tag

    This tag represent architectures implementing any ARM NEON SIMD instructions sets.
  **/
  struct neon64_   : simd_native_
  {
    using parent = simd_native_;
  };

  namespace detail
  {
    template<> struct support< ::boost::simd::neon64_>
    {
      support()
      {
        #if BOOST_ARCH_ARM
        // support_ =  detect_feature(25, 0x00000001, detail::edx);
        support_ = true;
        #else
        support_ = false;
        #endif
      }

      inline bool is_supported() const { return support_; }

      private:
      bool support_;
    };
  }

  /*!
    @ingroup  group-api
    Global object for accessing NEON support informations
  **/
  static detail::support<neon64_> const& get_neon64() {
      static detail::support<neon64_> const neon64 = {};
      return neon64;
  }
} }

#endif
