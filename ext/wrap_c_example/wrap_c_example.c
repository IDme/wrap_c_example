#include <stdlib.h>
#include <ruby.h>

static VALUE rb_mWrapCExample;
static VALUE rb_cGreeting;

static VALUE
greeting_hello(VALUE self) {
  char *  greeting(char *);

  return rb_str_new2(greeting(RSTRING_PTR(rb_iv_get(self, "@name"))));
}

static VALUE
greeting_init(VALUE self, VALUE name) {
  rb_iv_set(self, "@name", name);

  return self;
}

void
Init_wrap_c_example_c() {
  rb_mWrapCExample = rb_define_module("WrapCExample");
  rb_cGreeting     = rb_define_class_under(rb_mWrapCExample, "Greeting", rb_cObject);

  rb_define_method(rb_cGreeting, "initialize", greeting_init, 1);
  rb_define_method(rb_cGreeting, "hello", greeting_hello, 0);
}
