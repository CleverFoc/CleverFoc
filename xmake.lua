add_rules("mode.debug", "mode.release")

target("cleverfoc")
    set_kind("binary")
    add_files("src/*.c")
    add_files("test/*.c")
    add_includedirs("include")
    add_includedirs("test")
    add_includedirs("./")
