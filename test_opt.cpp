#include <experimental/optional>
int main() {
    std::experimental::optional<int> o = 5;
    return o.value_or(0);
}
