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

// Function: sub_0032DCE0
// Address: 0x32dce0 - 0x32ddc4
void sub_0032DCE0_0x32dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DCE0_0x32dce0");
#endif

    switch (ctx->pc) {
        case 0x32dd68u: goto label_32dd68;
        default: break;
    }

    ctx->pc = 0x32dce0u;

    // 0x32dce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32dce4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x32dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x32dce8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32dcec: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32dcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32dcf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32dcf4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x32dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x32dcf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32dcfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32dcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd00: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x32dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x32dd04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32dd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32dd08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DD08u;
    {
        const bool branch_taken_0x32dd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD08u;
        // 0x32dd0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd08) {
            ctx->pc = 0x32DD18u;
            goto label_32dd18;
        }
    }
    ctx->pc = 0x32DD10u;
    // 0x32dd10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32DD10u;
    {
        const bool branch_taken_0x32dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD10u;
        // 0x32dd14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd10) {
            ctx->pc = 0x32DD30u;
            goto label_32dd30;
        }
    }
    ctx->pc = 0x32DD18u;
label_32dd18:
    // 0x32dd18: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x32dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x32dd1c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x32dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x32dd20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32dd24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32DD24u;
    {
        const bool branch_taken_0x32dd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd24) {
            ctx->pc = 0x32DD30u;
            goto label_32dd30;
        }
    }
    ctx->pc = 0x32DD2Cu;
    // 0x32dd2c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x32dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32dd30:
    // 0x32dd30: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x32DD30u;
    {
        const bool branch_taken_0x32dd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd30) {
            ctx->pc = 0x32DDB0u;
            goto label_32ddb0;
        }
    }
    ctx->pc = 0x32DD38u;
    // 0x32dd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32dd3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32dd40: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32dd44: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32dd48: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x32dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x32dd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32dd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32dd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32dd58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32dd5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32DD60u;
    SET_GPR_U32(ctx, 31, 0x32DD68u);
    ctx->pc = 0x32DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD60u;
    // 0x32dd64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32DD60u, 0x32DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD68u;
label_32dd68:
    // 0x32dd68: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32dd6c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32dd70: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x32dd70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x32dd74: 0x8224000b  lb          $a0, 0xB($s1)
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32dd78: 0x8223000c  lb          $v1, 0xC($s1)
    ctx->pc = 0x32dd78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32dd7c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x32dd7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32dd80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DD80u;
    {
        const bool branch_taken_0x32dd80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd80) {
            ctx->pc = 0x32DD90u;
            goto label_32dd90;
        }
    }
    ctx->pc = 0x32DD88u;
    // 0x32dd88: 0x8223000d  lb          $v1, 0xD($s1)
    ctx->pc = 0x32dd88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32dd8c: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x32dd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
label_32dd90:
    // 0x32dd90: 0x8224000b  lb          $a0, 0xB($s1)
    ctx->pc = 0x32dd90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32dd94: 0x8223000d  lb          $v1, 0xD($s1)
    ctx->pc = 0x32dd94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32dd98: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32dd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32dd9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DD9Cu;
    {
        const bool branch_taken_0x32dd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd9c) {
            ctx->pc = 0x32DDB0u;
            goto label_32ddb0;
        }
    }
    ctx->pc = 0x32DDA4u;
    // 0x32dda4: 0x8223000c  lb          $v1, 0xC($s1)
    ctx->pc = 0x32dda4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32dda8: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x32dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ddac: 0x0  nop
    ctx->pc = 0x32ddacu;
    // NOP
label_32ddb0:
    // 0x32ddb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ddb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ddb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ddb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32ddb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ddbc: 0x3e00008  jr          $ra
    ctx->pc = 0x32DDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDBCu;
        // 0x32ddc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DDC4u;
}
