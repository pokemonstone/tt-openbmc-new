FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

EXTRA_OECMAKE += "-DSEL_LOGGER_MONITOR_THRESHOLD_EVENTS=ON"

SRC_URI += "file://0001-Reset-the-SEL-ID-to-1-after-clearing-the-SEL.patch \
            file://0002-Set-BMC-status-LED-while-critical-events-occur.patch \
            file://0003-Synchronize-time-with-ME.patch \
           "
