#pragma once
#include <ntddk.h>
#include <wdf.h>
#define IO_DUALMAP_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0444, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)



NTSTATUS IOCloseCall(PDEVICE_OBJECT pDeviceObject, PIRP IRP);
NTSTATUS IOCreateCall(PDEVICE_OBJECT pDeviceObject, PIRP IRP);
NTSTATUS IOControlCall(PDEVICE_OBJECT pDeviceObject, PIRP IRP);