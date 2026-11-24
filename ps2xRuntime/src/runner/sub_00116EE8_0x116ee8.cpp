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

// Function: sub_00116EE8
// Address: 0x116ee8 - 0x116f78
void sub_00116EE8_0x116ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116EE8_0x116ee8");
#endif

    switch (ctx->pc) {
        case 0x116f00u: goto label_116f00;
        case 0x116f10u: goto label_116f10;
        case 0x116f54u: goto label_116f54;
        default: break;
    }

    ctx->pc = 0x116ee8u;

    // 0x116ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116eec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x116eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116ef0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116ef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ef8: 0xc0459f8  jal         func_1167E0
    ctx->pc = 0x116EF8u;
    SET_GPR_U32(ctx, 31, 0x116F00u);
    ctx->pc = 0x116EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EF8u;
    // 0x116efc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1167E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167E0u, 0x116EF8u, 0x116F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F00u;
label_116f00:
    // 0x116f00: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116F00u;
    {
        const bool branch_taken_0x116f00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x116F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F00u;
        // 0x116f04: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f00) {
            ctx->pc = 0x116F64u;
            goto label_116f64;
        }
    }
    ctx->pc = 0x116F08u;
    // 0x116f08: 0xc045a38  jal         func_1168E0
    ctx->pc = 0x116F08u;
    SET_GPR_U32(ctx, 31, 0x116F10u);
    ctx->pc = 0x1168E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168E0u, 0x116F08u, 0x116F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F10u;
label_116f10:
    // 0x116f10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116F10u;
    {
        const bool branch_taken_0x116f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F10u;
        // 0x116f14: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f10) {
            ctx->pc = 0x116F24u;
            goto label_116f24;
        }
    }
    ctx->pc = 0x116F18u;
    // 0x116f18: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116f1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x116F1Cu;
    {
        const bool branch_taken_0x116f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F1Cu;
        // 0x116f20: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f1c) {
            ctx->pc = 0x116F64u;
            goto label_116f64;
        }
    }
    ctx->pc = 0x116F24u;
label_116f24:
    // 0x116f24: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116f28: 0x26070640  addiu       $a3, $s0, 0x640
    ctx->pc = 0x116f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x116f2c: 0xae110640  sw          $s1, 0x640($s0)
    ctx->pc = 0x116f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 17));
    // 0x116f30: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x116f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x116f34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116f38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f40: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x116f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116f44: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x116f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f48: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116f4c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116F4Cu;
    SET_GPR_U32(ctx, 31, 0x116F54u);
    ctx->pc = 0x116F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F4Cu;
    // 0x116f50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116F4Cu, 0x116F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F54u;
label_116f54:
    // 0x116f54: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F54u;
            // 0x116f58: 0x8e020640  lw          $v0, 0x640($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F64u;
            goto label_116f64;
        }
    }
    ctx->pc = 0x116F5Cu;
    // 0x116f5c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116f60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x116f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_116f64:
    // 0x116f64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116f68: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116f6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116f70: 0x3e00008  jr          $ra
    ctx->pc = 0x116F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F70u;
        // 0x116f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F78u;
}
