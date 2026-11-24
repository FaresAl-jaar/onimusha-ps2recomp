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

// Function: sub_00133F60
// Address: 0x133f60 - 0x134008
void sub_00133F60_0x133f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133F60_0x133f60");
#endif

    switch (ctx->pc) {
        case 0x133fccu: goto label_133fcc;
        case 0x133fe0u: goto label_133fe0;
        default: break;
    }

    ctx->pc = 0x133f60u;

    // 0x133f60: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x133f64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133f68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x133f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x133f6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133f70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133f78: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x133F78u;
    {
        const bool branch_taken_0x133f78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x133F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F78u;
        // 0x133f7c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f78) {
            ctx->pc = 0x133F88u;
            goto label_133f88;
        }
    }
    ctx->pc = 0x133F80u;
    // 0x133f80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x133F80u;
    {
        const bool branch_taken_0x133f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F80u;
        // 0x133f84: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f80) {
            ctx->pc = 0x133FF8u;
            goto label_133ff8;
        }
    }
    ctx->pc = 0x133F88u;
label_133f88:
    // 0x133f88: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x133f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x133f8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x133f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x133f90: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x133f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x133f94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x133f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x133f98: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x133f98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133f9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x133f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x133fa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x133fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x133fa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x133fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x133fa8: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x133fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x133fac: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x133facu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x133fb0: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x133fb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x133fb4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x133fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133fb8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x133FB8u;
    {
        const bool branch_taken_0x133fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133fb8) {
            ctx->pc = 0x133FD4u;
            goto label_133fd4;
        }
    }
    ctx->pc = 0x133FC0u;
    // 0x133fc0: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x133fc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x133fc4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x133FC4u;
    SET_GPR_U32(ctx, 31, 0x133FCCu);
    ctx->pc = 0x133FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FC4u;
    // 0x133fc8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x133FC4u, 0x133FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FCCu;
label_133fcc:
    // 0x133fcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133FCCu;
    {
        const bool branch_taken_0x133fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FCCu;
        // 0x133fd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fcc) {
            ctx->pc = 0x133FE4u;
            goto label_133fe4;
        }
    }
    ctx->pc = 0x133FD4u;
label_133fd4:
    // 0x133fd4: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x133fd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x133fd8: 0xc04d130  jal         func_1344C0
    ctx->pc = 0x133FD8u;
    SET_GPR_U32(ctx, 31, 0x133FE0u);
    ctx->pc = 0x133FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD8u;
    // 0x133fdc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x133FD8u, 0x133FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE0u;
label_133fe0:
    // 0x133fe0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x133fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_133fe4:
    // 0x133fe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x133fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x133fe8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x133fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x133fec: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x133fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x133ff0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x133ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x133ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ff8:
    // 0x133ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134000: 0x3e00008  jr          $ra
    ctx->pc = 0x134000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134000u;
        // 0x134004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134008u;
}
