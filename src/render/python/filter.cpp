#include <mitsuba/render/filter.h>
#include <mitsuba/core/properties.h>
#include <mitsuba/python/python.h>

MI_PY_EXPORT(filter) {
    nb::enum_<FilterType>(m, "FilterType", D(FilterType))
        .def_value(FilterType, Include)
        .def_value(FilterType, Ignore);

    auto e = nb::enum_<SensorFilterFlags>(m, "SensorFilterFlags", D(SensorFilterFlags))
        .def_value(SensorFilterFlags, None)
        .def_value(SensorFilterFlags, Depth)
        .def_value(SensorFilterFlags, BSDF)
        .def_value(SensorFilterFlags, Shape)
        .def_value(SensorFilterFlags, Phase)
        .def_value(SensorFilterFlags, Exclusive)
        .def_value(SensorFilterFlags, Surface)
        .def_value(SensorFilterFlags, All);
}