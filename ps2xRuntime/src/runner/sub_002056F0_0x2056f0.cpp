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

// Function: sub_002056F0
// Address: 0x2056f0 - 0x205750
void sub_002056F0_0x2056f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002056F0_0x2056f0");
#endif

    switch (ctx->pc) {
        case 0x205714u: goto label_205714;
        case 0x20572cu: goto label_20572c;
        case 0x205744u: goto label_205744;
        default: break;
    }

    ctx->pc = 0x2056f0u;

    // 0x2056f0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x2056f4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x2056f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2056f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2056fc: 0x24e76ee0  addiu       $a3, $a3, 0x6EE0
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28384));
    // 0x205700: 0x24a5bf80  addiu       $a1, $a1, -0x4080
    ctx->pc = 0x205700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    // 0x205704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20570c: 0xc082d98  jal         func_20B660
    ctx->pc = 0x20570Cu;
    SET_GPR_U32(ctx, 31, 0x205714u);
    ctx->pc = 0x205710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20570Cu;
    // 0x205710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B660u, 0x20570Cu, 0x205714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x205718: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x205718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x20571c: 0x2484bf98  addiu       $a0, $a0, -0x4068
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950808));
    // 0x205720: 0x24c66ef8  addiu       $a2, $a2, 0x6EF8
    ctx->pc = 0x205720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28408));
    // 0x205724: 0xc082dc8  jal         func_20B720
    ctx->pc = 0x205724u;
    SET_GPR_U32(ctx, 31, 0x20572Cu);
    ctx->pc = 0x205728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205724u;
    // 0x205728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B720u, 0x205724u, 0x20572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20572Cu;
label_20572c:
    // 0x20572c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x205730: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x205730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x205734: 0x2484bfe8  addiu       $a0, $a0, -0x4018
    ctx->pc = 0x205734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950888));
    // 0x205738: 0x24c66f10  addiu       $a2, $a2, 0x6F10
    ctx->pc = 0x205738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
    // 0x20573c: 0xc082db2  jal         func_20B6C8
    ctx->pc = 0x20573Cu;
    SET_GPR_U32(ctx, 31, 0x205744u);
    ctx->pc = 0x205740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20573Cu;
    // 0x205740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6C8u, 0x20573Cu, 0x205744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205744u;
label_205744:
    // 0x205744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205748: 0x8082dde  j           func_20B778
    ctx->pc = 0x205748u;
    ctx->pc = 0x20574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205748u;
    // 0x20574c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B778u;
    sub_0020B778_0x20b778(rdram, ctx, runtime); return;
    ctx->pc = 0x205750u;
}
