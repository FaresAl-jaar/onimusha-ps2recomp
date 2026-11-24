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

// Function: sub_001EEF20
// Address: 0x1eef20 - 0x1ef03c
void sub_001EEF20_0x1eef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEF20_0x1eef20");
#endif

    switch (ctx->pc) {
        case 0x1eef5cu: goto label_1eef5c;
        case 0x1eef90u: goto label_1eef90;
        case 0x1eefe0u: goto label_1eefe0;
        default: break;
    }

    ctx->pc = 0x1eef20u;

    // 0x1eef20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1eef24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1eef28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1eef2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eef30: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1eef30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eef38: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1eef38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eef40: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1eef40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eef48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1eef48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eef50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eef54: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x1EEF54u;
    SET_GPR_U32(ctx, 31, 0x1EEF5Cu);
    ctx->pc = 0x1EEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF54u;
    // 0x1eef58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x1EEF54u, 0x1EEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF5Cu;
label_1eef5c:
    // 0x1eef5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEF5Cu;
    {
        const bool branch_taken_0x1eef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef5c) {
            ctx->pc = 0x1EEF70u;
            goto label_1eef70;
        }
    }
    ctx->pc = 0x1EEF64u;
    // 0x1eef64: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EEF64u;
    {
        const bool branch_taken_0x1eef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF64u;
        // 0x1eef68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef64) {
            ctx->pc = 0x1EF010u;
            goto label_1ef010;
        }
    }
    ctx->pc = 0x1EEF6Cu;
    // 0x1eef6c: 0x0  nop
    ctx->pc = 0x1eef6cu;
    // NOP
label_1eef70:
    // 0x1eef70: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1eef74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eef74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef78: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eef78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eef7c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1eef7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eef80: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EEF80u;
    {
        const bool branch_taken_0x1eef80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF80u;
        // 0x1eef84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef80) {
            ctx->pc = 0x1EF008u;
            goto label_1ef008;
        }
    }
    ctx->pc = 0x1EEF88u;
    // 0x1eef88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eef88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef90:
    // 0x1eef90: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1eef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1eef94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eef98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eef9c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEF9Cu;
    {
        const bool branch_taken_0x1eef9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef9c) {
            ctx->pc = 0x1EEFE8u;
            goto label_1eefe8;
        }
    }
    ctx->pc = 0x1EEFA4u;
    // 0x1eefa4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEFA4u;
    {
        const bool branch_taken_0x1eefa4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA4u;
        // 0x1eefa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefa4) {
            ctx->pc = 0x1EEFB4u;
            goto label_1eefb4;
        }
    }
    ctx->pc = 0x1EEFACu;
    // 0x1eefac: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1eefacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1eefb0: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1eefb4:
    // 0x1eefb4: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1eefb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eefb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eefbc: 0x86c20018  lh          $v0, 0x18($s6)
    ctx->pc = 0x1eefbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1eefc0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1eefc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eefc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1eefc8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1eefcc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1eefccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eefd0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eefd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eefd4: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x1eefd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eefd8: 0xc076eac  jal         func_1DBAB0
    ctx->pc = 0x1EEFD8u;
    SET_GPR_U32(ctx, 31, 0x1EEFE0u);
    ctx->pc = 0x1EEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFD8u;
    // 0x1eefdc: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBAB0u, 0x1EEFD8u, 0x1EEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFE0u;
label_1eefe0:
    // 0x1eefe0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1eefe4: 0x0  nop
    ctx->pc = 0x1eefe4u;
    // NOP
label_1eefe8:
    // 0x1eefe8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1eefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1eefec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eefecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1eeff0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1eeff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1eeff4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eeff8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eeff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eeffc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EEFFCu;
    {
        const bool branch_taken_0x1eeffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFFCu;
        // 0x1ef000: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeffc) {
            ctx->pc = 0x1EEF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eef90;
        }
    }
    ctx->pc = 0x1EF004u;
    // 0x1ef004: 0x0  nop
    ctx->pc = 0x1ef004u;
    // NOP
label_1ef008:
    // 0x1ef008: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ef008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef00c: 0x0  nop
    ctx->pc = 0x1ef00cu;
    // NOP
label_1ef010:
    // 0x1ef010: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ef010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ef014: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ef014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef018: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ef018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef01c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef034: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF034u;
        // 0x1ef038: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF03Cu;
}
