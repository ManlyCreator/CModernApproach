cmake_minimum_required(VERSION 3.5)

project(Chapter17)

add_executable(SandBox sandBox.c)
add_executable(Remind2 remind2.c)
add_executable(DynamicArrays dynamicArrays.c)
add_executable(LinkedLists linkedLists.c)
add_executable(PartsInventory2 partsInventory2.c)
add_executable(FunctionPointers functionPointers.c)

add_executable(TabulateTrig tabulateTrig.c)
target_link_libraries(TabulateTrig m)

add_executable(VoidPointers voidPointers.c)
add_executable(Excercises excercises.c)
add_executable(Stack stack.c)
add_executable(SortStrings sortStrings.c)
