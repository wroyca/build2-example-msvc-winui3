# include <libhello/version.hxx>
# include <libhello/hello.hxx>

# ifdef NDEBUG
# undef NDEBUG
# endif

# include <cassert>

int
main ()
{
  using namespace hello;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
