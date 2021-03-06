# Options for selecting the modules to build.
# PCRASTER_BUILD_<module>

# Options for selecting features.
# PCRASTER_WITH_<feature>

# option(PCRASTER_BUILD_ALL
#     "Build everything, except for documentation and tests" FALSE)
# option(PCRASTER_WITH_ALL "Support all features" FALSE)

option(
    PCRASTER_BUILD_MULTICORE
    "Build Python multicore module"
    ON)
option(
    PCRASTER_BUILD_AGUILA
    "Build Aguila"
    ON)
option(
    PCRASTER_BUILD_MODFLOW
    "Build Modflow module"
    ON)
option(
    PCRASTER_BUILD_OLDCALC
    "Build oldcalc"
    ON)
option(
    PCRASTER_BUILD_TEST
    "Build tests"
    OFF)
option(
    PCRASTER_BUILD_DOCUMENTATION
    "Build documentation"
    OFF)
option(
    PCRASTER_BUILD_BLOCKPYTHON
    "Build blockpython module"
    OFF)
option(
    PCRASTER_BUILD_MOC
    "Build moc"
    OFF)
option(
    PCRASTER_BUILD_MLDD
    "Build mldd"
    OFF)


set(DEVBASE_BOOST_REQUIRED TRUE)


if(PCRASTER_BUILD_TEST)
    set(DEVBASE_BUILD_TEST TRUE)
    list(APPEND DEVBASE_REQUIRED_BOOST_COMPONENTS
        system unit_test_framework)

    # The ones below are required in case a developer needs to
    # regenerate one of the pcraster_model_engine's XML files
    # set(DEVBASE_LIB_XSLT_XSLTPROC_REQUIRED TRUE)
    # set(DEVBASE_LIB_XML2_REQUIRED TRUE)
    # set(DEVBASE_LIB_XSLT_REQUIRED TRUE)
    #
    # ... or XSD
    # set(DEVBASE_XSD_REQUIRED TRUE)
endif()

list(APPEND DEVBASE_REQUIRED_BOOST_COMPONENTS
    date_time filesystem program_options timer)

set(DEVBASE_OPENGL_REQUIRED TRUE)
set(DEVBASE_QT_REQUIRED TRUE)
set(DEVBASE_REQUIRED_QT_VERSION 5)
set(DEVBASE_REQUIRED_QT_COMPONENTS
    Core Gui OpenGL Sql Widgets Xml)
if(PCRASTER_BUILD_AGUILA)
    set(DEVBASE_QWT_REQUIRED TRUE)
endif()

set(DEVBASE_XERCES_REQUIRED TRUE)

set(DEVBASE_GDAL_REQUIRED TRUE)  # Version >= 2.0.0.


find_package(PythonInterp)
find_package(Boost)

set(DEVBASE_PYTHON_LIBS_REQUIRED TRUE)
set(DEVBASE_NUMPY_REQUIRED TRUE)

find_python_module(numpy REQUIRED)
if(PCRASTER_BUILD_TEST)
    find_python_module(psutil REQUIRED)
endif()

if(WIN32)
    find_package(PDCurses REQUIRED)
    set(CURSES_INCLUDE_DIRS ${PDCURSES_INCLUDE_DIR})
    set(CURSES_LIBRARIES ${PDCURSES_LIBRARIES})
else()
    set(DEVBASE_CURSES_REQUIRED TRUE)
    set(DEVBASE_CURSES_WIDE_CHARACTER_SUPPORT_REQUIRED FALSE)
endif()


if(PCRASTER_BUILD_TEST)
    # sqlite executable is used by dal's testrun.prolog
    find_package(SQLite3)

    find_program(SQLITE3_EXECUTABLE
        sqlite3
        # HINTS ${SQLITE3_INCLUDE_DIRS}/../bin
        HINTS $<$<BOOL:${SQLITE_FOUND}>:${SQLITE3_INCLUDE_DIRS}/../bin>
    )

    if(NOT SQLITE3_EXECUTABLE)
        message(FATAL_ERROR "sqlite3 executable not found")
    endif()
endif()


if(PCRASTER_BUILD_DOCUMENTATION)
    set(DEVBASE_DOXYGEN_REQUIRED TRUE)
    set(DEVBASE_SPHINX_REQUIRED TRUE)
    set(SPHINX_HTML_THEME "classic")
endif()



find_package(PythonLibs)
set (CMAKE_REQUIRED_INCLUDES "${PYTHON_INCLUDE_DIR};${CMAKE_REQUIRED_INCLUDES}")
# Python.h needs to be known to pass the test
check_include_file_cxx("pybind11/pybind11.h" PYBIND11_SYSTEM_INCLUDE)

if(NOT PYBIND11_SYSTEM_INCLUDE)
    FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11
        GIT_TAG        v2.2.4
    )

    FetchContent_GetProperties(pybind11)
    if(NOT pybind11_POPULATED)
        FetchContent_Populate(pybind11)
        add_subdirectory(${pybind11_SOURCE_DIR} ${pybind11_BINARY_DIR})
    endif()
else()
    find_package(pybind11 REQUIRED)
endif()
