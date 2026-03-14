#ifndef COMPAT_OPTIONAL_H
#define COMPAT_OPTIONAL_H

#if __cplusplus >= 201703L || (defined(__GNUC__) && __GNUC__ >= 7) || (defined(_MSC_VER) && _MSC_VER >= 1910)
#include <optional>
namespace compat {
    using std::optional;
    using std::nullopt;
}
#else
#include <experimental/optional>
namespace compat {
    using std::experimental::optional;
    using std::experimental::nullopt;
}
#endif

#endif // COMPAT_OPTIONAL_H
