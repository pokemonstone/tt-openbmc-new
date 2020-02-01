FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRCREV = "c0dcf0d3f0a0865ccc9ff3ada2d3e70918377401"

SRC_URI += "file://sv300g3e-MB.json \
            file://sv300g3e-BIOS.json \
            file://Delta-DPS-500AB-PSU.json \
            file://Delta-DPS-550AB-PSU.json \
            file://Chicony-R550-PSU.json \
            file://fan-table.json \
            "

do_install_append(){
        install -d ${D}/usr/share/entity-manager/configurations
        install -m 0444 ${WORKDIR}/*.json ${D}/usr/share/entity-manager/configurations
}
