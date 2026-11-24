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

// Function: sub_00301000
// Address: 0x301000 - 0x3010ec
void sub_00301000_0x301000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301000_0x301000");
#endif

    switch (ctx->pc) {
        case 0x301050u: goto label_301050;
        case 0x301078u: goto label_301078;
        case 0x3010a0u: goto label_3010a0;
        default: break;
    }

    ctx->pc = 0x301000u;

    // 0x301000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x301000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x301004: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x301004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x301008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x301008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30100c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x301010: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x301010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x301014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x301018: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x301018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30101c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x301020: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x301020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301028: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x301028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30102c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301030: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301034: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x301034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x301038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30103c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30103cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301040: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x301040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x301044: 0x25080f90  addiu       $t0, $t0, 0xF90
    ctx->pc = 0x301044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3984));
    // 0x301048: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x301048u;
    SET_GPR_U32(ctx, 31, 0x301050u);
    ctx->pc = 0x30104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301048u;
    // 0x30104c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x301048u, 0x301050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301050u;
label_301050:
    // 0x301050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301054: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x301054u;
    {
        const bool branch_taken_0x301054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301054u;
        // 0x301058: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301054) {
            ctx->pc = 0x3010C0u;
            goto label_3010c0;
        }
    }
    ctx->pc = 0x30105Cu;
    // 0x30105c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x30105cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301060: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x301060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301064: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x301064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30106c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x301070: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x301070u;
    SET_GPR_U32(ctx, 31, 0x301078u);
    ctx->pc = 0x301074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301070u;
    // 0x301074: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x301070u, 0x301078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301078u;
label_301078:
    // 0x301078: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x301078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30107c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x301080: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x301080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x301084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301088: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x301088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30108c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301090: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x301090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x301094: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x301094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x301098: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x301098u;
    SET_GPR_U32(ctx, 31, 0x3010A0u);
    ctx->pc = 0x30109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301098u;
    // 0x30109c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x301098u, 0x3010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010A0u;
label_3010a0:
    // 0x3010a0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3010a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3010a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3010a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3010a8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3010a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3010ac: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3010acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3010b0: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x3010b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x3010b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3010B4u;
    {
        const bool branch_taken_0x3010b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010B4u;
        // 0x3010b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010b4) {
            ctx->pc = 0x3010C8u;
            goto label_3010c8;
        }
    }
    ctx->pc = 0x3010BCu;
    // 0x3010bc: 0x0  nop
    ctx->pc = 0x3010bcu;
    // NOP
label_3010c0:
    // 0x3010c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3010c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3010c4: 0x0  nop
    ctx->pc = 0x3010c4u;
    // NOP
label_3010c8:
    // 0x3010c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3010c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3010cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3010ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3010d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3010d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3010d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3010d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3010d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3010d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3010dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3010dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3010e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3010e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3010e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3010E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3010E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010E4u;
        // 0x3010e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3010E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3010ECu;
}
