project('colorpp', 'cpp')

colorpp_dep = declare_dependency(
    include_directories : include_directories('.')
)

if get_option('example')
    executable('colorpp-example', 'example.cpp', dependencies : [colorpp_dep])
endif