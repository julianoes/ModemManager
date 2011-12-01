/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details:
 *
 * Copyright (C) 2011 - Google, Inc.
 */

/* NOTE: ideally, this file should be autogenerated by glib-mkenums, along with
 * mm-errors-types.[c|h], but currently glib-mkenums is not enough for the kind
 * of substitutions we need, specifically when generating the DBus paths of the
 * errors. See discussions at:
 *   https://bugzilla.gnome.org/show_bug.cgi?id=662693
 */

#include <gio/gio.h>

#include "ModemManager-errors.h"
#include "mm-errors-types.h"

#define ERROR_PREFIX "org.freedesktop.ModemManager1.Core.Error."
static const GDBusErrorEntry mm_core_error_entries[] = {
    { MM_CORE_ERROR_FAILED,       ERROR_PREFIX "Failed"       },
    { MM_CORE_ERROR_CANCELLED,    ERROR_PREFIX "Cancelled"    },
    { MM_CORE_ERROR_ABORTED,      ERROR_PREFIX "Aborted"      },
    { MM_CORE_ERROR_UNSUPPORTED,  ERROR_PREFIX "Unsupported"  },
    { MM_CORE_ERROR_NO_PLUGINS,   ERROR_PREFIX "NoPlugins"    },
    { MM_CORE_ERROR_UNAUTHORIZED, ERROR_PREFIX "Unauthorized" },
    { MM_CORE_ERROR_INVALID_ARGS, ERROR_PREFIX "InvalidArgs"  },
    { MM_CORE_ERROR_IN_PROGRESS,  ERROR_PREFIX "InProgress"   },
    { MM_CORE_ERROR_WRONG_STATE,  ERROR_PREFIX "WrongState"   },
    { MM_CORE_ERROR_CONNECTED,    ERROR_PREFIX "Connected"    },
};
#undef ERROR_PREFIX

GQuark
mm_core_error_quark (void)
{
    static volatile gsize quark_volatile = 0;

    if (!quark_volatile)
        g_dbus_error_register_error_domain ("mm-core-error-quark",
                                            &quark_volatile,
                                            mm_core_error_entries,
                                            G_N_ELEMENTS (mm_core_error_entries));

    return (GQuark) quark_volatile;
}

#define ERROR_PREFIX "org.freedesktop.ModemManager1.MobileEquipment.Error."
static const GDBusErrorEntry mm_mobile_equipment_error_entries[] = {
    /* General errors */
    { MM_MOBILE_EQUIPMENT_ERROR_PHONE_FAILURE,        ERROR_PREFIX "PhoneFailure" },
    { MM_MOBILE_EQUIPMENT_ERROR_NO_CONNECTION,        ERROR_PREFIX "NoConnection" },
    { MM_MOBILE_EQUIPMENT_ERROR_LINK_RESERVED,        ERROR_PREFIX "LinkReserved" },
    { MM_MOBILE_EQUIPMENT_ERROR_NOT_ALLOWED,          ERROR_PREFIX "NotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_NOT_SUPPORTED,        ERROR_PREFIX "NotSupported" },
    { MM_MOBILE_EQUIPMENT_ERROR_PH_SIM_PIN,           ERROR_PREFIX "PhSimPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_PH_FSIM_PIN,          ERROR_PREFIX "PhFsimPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_PH_FSIM_PUK,          ERROR_PREFIX "PhFsimPuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_NOT_INSERTED,     ERROR_PREFIX "SimNotInserted" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_PIN,              ERROR_PREFIX "SimPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_PUK,              ERROR_PREFIX "SimPuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_FAILURE,          ERROR_PREFIX "SimFailure" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_BUSY,             ERROR_PREFIX "SimBusy" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_WRONG,            ERROR_PREFIX "SimWrong" },
    { MM_MOBILE_EQUIPMENT_ERROR_INCORRECT_PASSWORD,   ERROR_PREFIX "IncorrectPassword" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_PIN2,             ERROR_PREFIX "SimPin2" },
    { MM_MOBILE_EQUIPMENT_ERROR_SIM_PUK2,             ERROR_PREFIX "SimPuk2" },
    { MM_MOBILE_EQUIPMENT_ERROR_MEMORY_FULL,          ERROR_PREFIX "MemoryFull" },
    { MM_MOBILE_EQUIPMENT_ERROR_INVALID_INDEX,        ERROR_PREFIX "InvalidIndex" },
    { MM_MOBILE_EQUIPMENT_ERROR_NOT_FOUND,            ERROR_PREFIX "NotFound" },
    { MM_MOBILE_EQUIPMENT_ERROR_MEMORY_FAILURE,       ERROR_PREFIX "MemoryFailure" },
    { MM_MOBILE_EQUIPMENT_ERROR_TEXT_TOO_LONG,        ERROR_PREFIX "TextTooLong" },
    { MM_MOBILE_EQUIPMENT_ERROR_INVALID_CHARS,        ERROR_PREFIX "InvalidChars" },
    { MM_MOBILE_EQUIPMENT_ERROR_DIAL_STRING_TOO_LONG, ERROR_PREFIX "DialStringTooLong" },
    { MM_MOBILE_EQUIPMENT_ERROR_DIAL_STRING_INVALID,  ERROR_PREFIX "DialStringInvalid" },
    { MM_MOBILE_EQUIPMENT_ERROR_NO_NETWORK,           ERROR_PREFIX "NoNetwork" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_TIMEOUT,      ERROR_PREFIX "NetworkTimeout" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_NOT_ALLOWED,  ERROR_PREFIX "NetworkNotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_PIN,          ERROR_PREFIX "NetworkPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_PUK,          ERROR_PREFIX "NetworkPuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_SUBSET_PIN,   ERROR_PREFIX "NetworkSubsetPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_NETWORK_SUBSET_PUK,   ERROR_PREFIX "NetworkSubsetPuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_SERVICE_PIN,          ERROR_PREFIX "ServicePin" },
    { MM_MOBILE_EQUIPMENT_ERROR_SERVICE_PUK,          ERROR_PREFIX "ServicePuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_CORP_PIN,             ERROR_PREFIX "CorpPin" },
    { MM_MOBILE_EQUIPMENT_ERROR_CORP_PUK,             ERROR_PREFIX "CorpPuk" },
    { MM_MOBILE_EQUIPMENT_ERROR_UNKNOWN,              ERROR_PREFIX "Unknown" },
    /* GPRS related errors */
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_MS,                    ERROR_PREFIX "GPRS.IllegalMs" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_ME,                    ERROR_PREFIX "GPRS.IllegalMe" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_NOT_ALLOWED,           ERROR_PREFIX "GPRS.ServiceNotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_PLMN_NOT_ALLOWED,              ERROR_PREFIX "GPRS.PlmnNotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_LOCATION_NOT_ALLOWED,          ERROR_PREFIX "GPRS.LocationNotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_ROAMING_NOT_ALLOWED,           ERROR_PREFIX "GPRS.RomaingNotAllowed" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUPPORTED,  ERROR_PREFIX "GPRS.ServiceOptionNotSupported" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUBSCRIBED, ERROR_PREFIX "GPRS.ServiceOptionNotSubscribed" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_OUT_OF_ORDER,   ERROR_PREFIX "GPRS.ServiceOptionOutOfOrder" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNKNOWN,                       ERROR_PREFIX "GPRS.Unknown" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_PDP_AUTH_FAILURE,              ERROR_PREFIX "GPRS.PdpAuthFailure" },
    { MM_MOBILE_EQUIPMENT_ERROR_GPRS_INVALID_MOBILE_CLASS,          ERROR_PREFIX "GPRS.InvalidMobileClass" }
};
#undef ERROR_PREFIX

GQuark
mm_mobile_equipment_error_quark (void)
{
    static volatile gsize quark_volatile = 0;

    if (!quark_volatile)
        g_dbus_error_register_error_domain ("mm-mobile-equipment-error-quark",
                                            &quark_volatile,
                                            mm_mobile_equipment_error_entries,
                                            G_N_ELEMENTS (mm_mobile_equipment_error_entries));

    return (GQuark) quark_volatile;
}

#define ERROR_PREFIX "org.freedesktop.ModemManager1.Connection.Error."
static const GDBusErrorEntry mm_connection_error_entries[] = {
    { MM_CONNECTION_ERROR_UNKNOWN,     ERROR_PREFIX "Unknown"    },
    { MM_CONNECTION_ERROR_NO_CARRIER,  ERROR_PREFIX "NoCarrier"  },
    { MM_CONNECTION_ERROR_NO_DIALTONE, ERROR_PREFIX "NoDialtone" },
    { MM_CONNECTION_ERROR_BUSY,        ERROR_PREFIX "Busy"       },
    { MM_CONNECTION_ERROR_NO_ANSWER,   ERROR_PREFIX "NoAnswer"   },
};
#undef ERROR_PREFIX

GQuark
mm_connection_error_quark (void)
{
    static volatile gsize quark_volatile = 0;

    if (!quark_volatile)
        g_dbus_error_register_error_domain ("mm-connection-error-quark",
                                            &quark_volatile,
                                            mm_connection_error_entries,
                                            G_N_ELEMENTS (mm_connection_error_entries));

    return (GQuark) quark_volatile;
}

#define ERROR_PREFIX "org.freedesktop.ModemManager1.Serial.Error."
static const GDBusErrorEntry mm_serial_error_entries[] = {
    { MM_SERIAL_ERROR_UNKNOWN,               ERROR_PREFIX "Unknown"            },
    { MM_SERIAL_ERROR_OPEN_FAILED,           ERROR_PREFIX "OpenFailed"         },
    { MM_SERIAL_ERROR_SEND_FAILED,           ERROR_PREFIX "SendFailed"         },
    { MM_SERIAL_ERROR_RESPONSE_TIMEOUT,      ERROR_PREFIX "ResponseTimeout"    },
    { MM_SERIAL_ERROR_OPEN_FAILED_NO_DEVICE, ERROR_PREFIX "OpenFailedNoDevice" },
    { MM_SERIAL_ERROR_FLASH_FAILED,          ERROR_PREFIX "FlashFailed"        },
    { MM_SERIAL_ERROR_NOT_OPEN,              ERROR_PREFIX "NotOpen"            },
};
#undef ERROR_PREFIX

GQuark
mm_serial_error_quark (void)
{
    static volatile gsize quark_volatile = 0;

    if (!quark_volatile)
        g_dbus_error_register_error_domain ("mm-serial-error-quark",
                                            &quark_volatile,
                                            mm_serial_error_entries,
                                            G_N_ELEMENTS (mm_serial_error_entries));

    return (GQuark) quark_volatile;
}

#define ERROR_PREFIX "org.freedesktop.ModemManager1.Message.Error."
static const GDBusErrorEntry mm_message_error_entries[] = {
    { MM_MESSAGE_ERROR_ME_FAILURE,             ERROR_PREFIX "MeFailure"            },
    { MM_MESSAGE_ERROR_SMS_SERVICE_RESERVED,   ERROR_PREFIX "SmsServiceReserved"   },
    { MM_MESSAGE_ERROR_NOT_ALLOWED,            ERROR_PREFIX "NotAllowed"           },
    { MM_MESSAGE_ERROR_NOT_SUPPORTED,          ERROR_PREFIX "NotSupported"         },
    { MM_MESSAGE_ERROR_INVALID_PDU_PARAMETER,  ERROR_PREFIX "InvalidPduParameter"  },
    { MM_MESSAGE_ERROR_INVALID_TEXT_PARAMETER, ERROR_PREFIX "InvalidTextParameter" },
    { MM_MESSAGE_ERROR_SIM_NOT_INSERTED,       ERROR_PREFIX "SimNotInserted"       },
    { MM_MESSAGE_ERROR_SIM_PIN,                ERROR_PREFIX "SimPin"               },
    { MM_MESSAGE_ERROR_PH_SIM_PIN,             ERROR_PREFIX "PhSimPin"             },
    { MM_MESSAGE_ERROR_SIM_FAILURE,            ERROR_PREFIX "SimFailure"           },
    { MM_MESSAGE_ERROR_SIM_BUSY,               ERROR_PREFIX "SimBusy"              },
    { MM_MESSAGE_ERROR_SIM_WRONG,              ERROR_PREFIX "SimWrong"             },
    { MM_MESSAGE_ERROR_SIM_PUK,                ERROR_PREFIX "SimPuk"               },
    { MM_MESSAGE_ERROR_SIM_PIN2,               ERROR_PREFIX "SimPin2"              },
    { MM_MESSAGE_ERROR_SIM_PUK2,               ERROR_PREFIX "SimPuk2"              },
    { MM_MESSAGE_ERROR_MEMORY_FAILURE,         ERROR_PREFIX "MemoryFailure"        },
    { MM_MESSAGE_ERROR_INVALID_INDEX,          ERROR_PREFIX "InvalidIndex"         },
    { MM_MESSAGE_ERROR_MEMORY_FULL,            ERROR_PREFIX "MemoryFull"           },
    { MM_MESSAGE_ERROR_SMSC_ADDRESS_UNKNOWN,   ERROR_PREFIX "SmscAddressUnknown"   },
    { MM_MESSAGE_ERROR_NO_NETWORK,             ERROR_PREFIX "NoNetwork"            },
    { MM_MESSAGE_ERROR_NETWORK_TIMEOUT,        ERROR_PREFIX "NetworkTimeout"       },
    { MM_MESSAGE_ERROR_NO_CNMA_ACK_EXPECTED,   ERROR_PREFIX "NoCdmaAckExpected"    },
    { MM_MESSAGE_ERROR_UNKNOWN,                ERROR_PREFIX "Unknown"              }
};
#undef ERROR_PREFIX

GQuark
mm_message_error_quark (void)
{
    static volatile gsize quark_volatile = 0;

    if (!quark_volatile)
        g_dbus_error_register_error_domain ("mm-message-error-quark",
                                            &quark_volatile,
                                            mm_message_error_entries,
                                            G_N_ELEMENTS (mm_message_error_entries));

    return (GQuark) quark_volatile;
}
