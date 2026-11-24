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

// Function: sub_0025E0E0
// Address: 0x25e0e0 - 0x25e18c
void sub_0025E0E0_0x25e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E0E0_0x25e0e0");
#endif

    switch (ctx->pc) {
        case 0x25e12cu: goto label_25e12c;
        case 0x25e154u: goto label_25e154;
        case 0x25e17cu: goto label_25e17c;
        default: break;
    }

    ctx->pc = 0x25e0e0u;

    // 0x25e0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e0e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x25e0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25e0e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e0ec: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x25E0ECu;
    {
        const bool branch_taken_0x25e0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0ECu;
        // 0x25e0f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0ec) {
            ctx->pc = 0x25E160u;
            goto label_25e160;
        }
    }
    ctx->pc = 0x25E0F4u;
    // 0x25e0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e0f8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25E0F8u;
    {
        const bool branch_taken_0x25e0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25e0f8) {
            ctx->pc = 0x25E138u;
            goto label_25e138;
        }
    }
    ctx->pc = 0x25E100u;
    // 0x25e100: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E100u;
    {
        const bool branch_taken_0x25e100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e100) {
            ctx->pc = 0x25E110u;
            goto label_25e110;
        }
    }
    ctx->pc = 0x25E108u;
    // 0x25e108: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25E108u;
    {
        const bool branch_taken_0x25e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e108) {
            ctx->pc = 0x25E180u;
            goto label_25e180;
        }
    }
    ctx->pc = 0x25E110u;
label_25e110:
    // 0x25e110: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x25e114: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x25e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x25e118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e11c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x25e11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25e120: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x25e120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x25e124: 0xc052214  jal         func_148850
    ctx->pc = 0x25E124u;
    SET_GPR_U32(ctx, 31, 0x25E12Cu);
    ctx->pc = 0x25E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E124u;
    // 0x25e128: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x25E124u, 0x25E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E12Cu;
label_25e12c:
    // 0x25e12c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25E12Cu;
    {
        const bool branch_taken_0x25e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e12c) {
            ctx->pc = 0x25E180u;
            goto label_25e180;
        }
    }
    ctx->pc = 0x25E134u;
    // 0x25e134: 0x0  nop
    ctx->pc = 0x25e134u;
    // NOP
label_25e138:
    // 0x25e138: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x25e138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x25e13c: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x25e140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e144: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x25e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25e148: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x25e14c: 0xc052214  jal         func_148850
    ctx->pc = 0x25E14Cu;
    SET_GPR_U32(ctx, 31, 0x25E154u);
    ctx->pc = 0x25E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E14Cu;
    // 0x25e150: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x25E14Cu, 0x25E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E154u;
label_25e154:
    // 0x25e154: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E154u;
    {
        const bool branch_taken_0x25e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e154) {
            ctx->pc = 0x25E180u;
            goto label_25e180;
        }
    }
    ctx->pc = 0x25E15Cu;
    // 0x25e15c: 0x0  nop
    ctx->pc = 0x25e15cu;
    // NOP
label_25e160:
    // 0x25e160: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x25e164: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x25e168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e16c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x25e16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x25e170: 0x24070f00  addiu       $a3, $zero, 0xF00
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x25e174: 0xc052214  jal         func_148850
    ctx->pc = 0x25E174u;
    SET_GPR_U32(ctx, 31, 0x25E17Cu);
    ctx->pc = 0x25E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E174u;
    // 0x25e178: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x25E174u, 0x25E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E17Cu;
label_25e17c:
    // 0x25e17c: 0x0  nop
    ctx->pc = 0x25e17cu;
    // NOP
label_25e180:
    // 0x25e180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e184: 0x3e00008  jr          $ra
    ctx->pc = 0x25E184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E184u;
        // 0x25e188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E18Cu;
}
