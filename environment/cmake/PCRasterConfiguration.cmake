# Options for selecting the modules to build.
# PCRASTER_BUILD_<module>

# Options for selecting features.
# PCRASTER_WITH_<feature>

# option(PCRASTER_BUILD_ALL
#     "Build everything, except for documentation and tests" FALSE)
# option(PCRASTER_WITH_ALL "Support all features" FALSE)
option(PCRASTER_BUILD_DOCUMENTATION "Build documentation" FALSE)
option(PCRASTER_BUILD_TEST "Build tests" FALSE)


if(PCRASTER_BUILD_DOCUMENTATION)
    set(DEVBASE_DOXYGEN_REQUIRED TRUE)
    set(DEVBASE_SPHINX_REQUIRED TRUE)
    set(PCRASTER_TEST_REQUIRED TRUE)
endif()


# if(PCRASTER_BUILD_ALL)
    set(DEVBASE_BOOST_REQUIRED TRUE)
    list(APPEND DEVBASE_REQUIRED_BOOST_COMPONENTS
        date_time filesystem math_c99 program_options python regex system)
# endif()

if(PCRASTER_BUILD_TEST)
    set(PCRASTER_TEST_REQUIRED TRUE)
    set(DEVBASE_BOOST_REQUIRED TRUE)
    list(APPEND DEVBASE_REQUIRED_BOOST_COMPONENTS
        unit_test_framework)
endif()


set(DEVBASE_CURL_REQUIRED TRUE)
set(DEVBASE_CURSES_REQUIRED TRUE)
set(DEVBASE_CURSES_WIDE_CHARACTER_SUPPORT_REQUIRED FALSE)
set(DEVBASE_GDAL_REQUIRED TRUE)  # Version >= 2.0.0.
set(DEVBASE_GEOS_REQUIRED TRUE)
set(DEVBASE_IMAGE_MAGICK_REQUIRED TRUE)
set(DEVBASE_LIB_XML2_REQUIRED TRUE)
set(DEVBASE_LIB_XSLT_REQUIRED TRUE)
set(DEVBASE_LIB_XSLT_XSLTPROC_REQUIRED TRUE)
set(DEVBASE_OPENGL_REQUIRED TRUE)
set(DEVBASE_PCRASTER_RASTER_FORMAT_REQUIRED TRUE)

set(DEVBASE_PYTHON_INTERP_REQUIRED TRUE)
set(DEVBASE_REQUIRED_PYTHON_VERSION "2.7")
set(DEVBASE_PYTHON_LIBS_REQUIRED TRUE)

set(DEVBASE_QT_REQUIRED TRUE)
set(DEVBASE_REQUIRED_QT_VERSION "4")
set(QT4_NO_LINK_QTMAIN TRUE)
set(QT_USE_QTSQL TRUE)  # Dal, Aguila
set(QT_USE_QTOPENGL TRUE)  # Aguila
set(QT_USE_QTXML TRUE)  # Aguila, pcrxml
# set(CMAKE_AUTOMOC ON)

set(DEVBASE_QWT_REQUIRED TRUE)

set(DEVBASE_SQLITE_REQUIRED TRUE)
if(PCRASTER_TEST_REQUIRED)
    # Used by dal's testrun.prolog.
    set(DEVBASE_SQLITE_EXECUTABLE_REQUIRED TRUE)
endif()

set(DEVBASE_XERCES_REQUIRED TRUE)
set(DEVBASE_XSD_REQUIRED TRUE)
