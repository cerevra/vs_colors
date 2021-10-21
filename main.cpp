int SOME_GLOBAL_VALUE = 42;

#define UNUSED(ARG) ((void)ARG)

namespace myspace {
    enum class SomeEnum {
        Enum1,
        Enum2,
    };

    class TBar {
    public:
        static bool Bar() {
            bool localVar = false;
            return localVar;
        }

        TBar& operator=(const TBar& other) {
            SomeAttr = other.SomeAttr;
            return *this;
        }

        int SomeAttr = 42;
    };

    void Foo(const char* str) {
        UNUSED(str);
    }
}

int main() {
    UNUSED(SOME_GLOBAL_VALUE);

    myspace::Foo("some string");

    myspace::TBar::Bar();

    auto* bar = new myspace::TBar;
    delete bar;

    return 0;
}
