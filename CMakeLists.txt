cmake_minimum_required( VERSION 2.6 )
project( staticlib )
add_library( fib STATIC fib.c )

## コンパイラオプション
set(CMAKE_C_FLAGS_RELEASE "-Wall" )

## 実行ファイル
add_executable( test_static main.c )

## ライブラリのリンク
target_link_libraries( test_static fib )
