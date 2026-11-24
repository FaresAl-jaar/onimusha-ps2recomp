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

// Function: sub_003CEAA0
// Address: 0x3ceaa0 - 0x3cebac
void sub_003CEAA0_0x3ceaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEAA0_0x3ceaa0");
#endif

    switch (ctx->pc) {
        case 0x3ceb00u: goto label_3ceb00;
        case 0x3ceb28u: goto label_3ceb28;
        case 0x3ceb50u: goto label_3ceb50;
        default: break;
    }

    ctx->pc = 0x3ceaa0u;

    // 0x3ceaa0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ceaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ceaa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ceaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ceaa8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ceaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ceaac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ceaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3ceab0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3ceab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ceab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ceab8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ceab8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceabc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ceabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ceac0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3ceac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceac4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ceac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ceac8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ceac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceacc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ceaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cead0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3cead0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cead4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3cead4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cead8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ceadc: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3ceadcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3ceae0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3ceae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ceae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ceae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceaec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ceaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceaf0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3ceaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3ceaf4: 0x2508ea30  addiu       $t0, $t0, -0x15D0
    ctx->pc = 0x3ceaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961712));
    // 0x3ceaf8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3CEAF8u;
    SET_GPR_U32(ctx, 31, 0x3CEB00u);
    ctx->pc = 0x3CEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEAF8u;
    // 0x3ceafc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3CEAF8u, 0x3CEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEB00u;
label_3ceb00:
    // 0x3ceb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ceb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb04: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3CEB04u;
    {
        const bool branch_taken_0x3ceb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB04u;
        // 0x3ceb08: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb04) {
            ctx->pc = 0x3CEB78u;
            goto label_3ceb78;
        }
    }
    ctx->pc = 0x3CEB0Cu;
    // 0x3ceb0c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3ceb0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb10: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3ceb10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb14: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3ceb14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ceb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb1c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3ceb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ceb20: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3CEB20u;
    SET_GPR_U32(ctx, 31, 0x3CEB28u);
    ctx->pc = 0x3CEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEB20u;
    // 0x3ceb24: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3CEB20u, 0x3CEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEB28u;
label_3ceb28:
    // 0x3ceb28: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3ceb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3ceb2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ceb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ceb30: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3ceb30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ceb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ceb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb38: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3ceb38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ceb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ceb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ceb40: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3ceb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ceb44: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3ceb44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ceb48: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3CEB48u;
    SET_GPR_U32(ctx, 31, 0x3CEB50u);
    ctx->pc = 0x3CEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEB48u;
    // 0x3ceb4c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3CEB48u, 0x3CEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEB50u;
label_3ceb50:
    // 0x3ceb50: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3ceb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3ceb54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ceb58: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3ceb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3ceb5c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3ceb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3ceb60: 0xa2170559  sb          $s7, 0x559($s0)
    ctx->pc = 0x3ceb60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 23));
    // 0x3ceb64: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3ceb64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ceb68: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3ceb68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3ceb6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEB6Cu;
    {
        const bool branch_taken_0x3ceb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB6Cu;
        // 0x3ceb70: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb6c) {
            ctx->pc = 0x3CEB80u;
            goto label_3ceb80;
        }
    }
    ctx->pc = 0x3CEB74u;
    // 0x3ceb74: 0x0  nop
    ctx->pc = 0x3ceb74u;
    // NOP
label_3ceb78:
    // 0x3ceb78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ceb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb7c: 0x0  nop
    ctx->pc = 0x3ceb7cu;
    // NOP
label_3ceb80:
    // 0x3ceb80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ceb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ceb84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ceb84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ceb88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ceb88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ceb8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ceb8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ceb90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ceb90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ceb94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ceb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ceb98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ceb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ceb9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ceb9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ceba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ceba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ceba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CEBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBA4u;
        // 0x3ceba8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CEBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CEBACu;
}
