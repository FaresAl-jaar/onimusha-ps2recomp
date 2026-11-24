#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002087C0
// Address: 0x2087c0 - 0x208870
void sub_002087C0_0x2087c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002087C0_0x2087c0");
#endif

    switch (ctx->pc) {
        case 0x2087e8u: goto label_2087e8;
        case 0x2087f8u: goto label_2087f8;
        case 0x208804u: goto label_208804;
        case 0x208814u: goto label_208814;
        case 0x208820u: goto label_208820;
        case 0x20883cu: goto label_20883c;
        case 0x20884cu: goto label_20884c;
        default: break;
    }

    ctx->pc = 0x2087c0u;

    // 0x2087c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2087c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2087c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2087c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2087c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2087c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2087ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2087d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2087d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2087d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2087d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2087d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2087dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2087e0: 0xc082276  jal         func_2089D8
    ctx->pc = 0x2087E0u;
    SET_GPR_U32(ctx, 31, 0x2087E8u);
    ctx->pc = 0x2087E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087E0u;
    // 0x2087e4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089D8u, 0x2087E0u, 0x2087E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087E8u;
label_2087e8:
    // 0x2087e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2087e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2087f0: 0xc08228e  jal         func_208A38
    ctx->pc = 0x2087F0u;
    SET_GPR_U32(ctx, 31, 0x2087F8u);
    ctx->pc = 0x2087F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087F0u;
    // 0x2087f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A38u, 0x2087F0u, 0x2087F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2087f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087fc: 0xc0822c2  jal         func_208B08
    ctx->pc = 0x2087FCu;
    SET_GPR_U32(ctx, 31, 0x208804u);
    ctx->pc = 0x208800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087FCu;
    // 0x208800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B08u, 0x2087FCu, 0x208804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208804u;
label_208804:
    // 0x208804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20880c: 0xc0822ca  jal         func_208B28
    ctx->pc = 0x20880Cu;
    SET_GPR_U32(ctx, 31, 0x208814u);
    ctx->pc = 0x208810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20880Cu;
    // 0x208810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B28u, 0x20880Cu, 0x208814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208814u;
label_208814:
    // 0x208814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208818: 0xc0822dc  jal         func_208B70
    ctx->pc = 0x208818u;
    SET_GPR_U32(ctx, 31, 0x208820u);
    ctx->pc = 0x20881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208818u;
    // 0x20881c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B70u, 0x208818u, 0x208820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208820u;
label_208820:
    // 0x208820: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x208824: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x208828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20882c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x20882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x208830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208834: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x208834u;
    SET_GPR_U32(ctx, 31, 0x20883Cu);
    ctx->pc = 0x208838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208834u;
    // 0x208838: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E8u, 0x208834u, 0x20883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20883Cu;
label_20883c:
    // 0x20883c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208840: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x208840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x208844: 0xc082262  jal         func_208988
    ctx->pc = 0x208844u;
    SET_GPR_U32(ctx, 31, 0x20884Cu);
    ctx->pc = 0x208848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208844u;
    // 0x208848: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208988u, 0x208844u, 0x20884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20884Cu;
label_20884c:
    // 0x20884c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208850: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x208850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x208854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20885c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20885cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208868: 0x808221c  j           func_208870
    ctx->pc = 0x208868u;
    ctx->pc = 0x20886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208868u;
    // 0x20886c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208870u;
    sub_00208870_0x208870(rdram, ctx, runtime); return;
    ctx->pc = 0x208870u;
}
