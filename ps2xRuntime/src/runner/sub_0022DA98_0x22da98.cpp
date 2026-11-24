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

// Function: sub_0022DA98
// Address: 0x22da98 - 0x22db60
void sub_0022DA98_0x22da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DA98_0x22da98");
#endif

    switch (ctx->pc) {
        case 0x22dadcu: goto label_22dadc;
        default: break;
    }

    ctx->pc = 0x22da98u;

    // 0x22da98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22da9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22daa0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22daa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22daa4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22daa8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x22daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22daac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22dab0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22dab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dab4: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x22dab8: 0x27a80012  addiu       $t0, $sp, 0x12
    ctx->pc = 0x22dab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x22dabc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x22dabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22dac0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x22dac4: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22dac8: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x22dac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22dacc: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x22daccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x22dad0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x22dad4: 0xc08b6d8  jal         func_22DB60
    ctx->pc = 0x22DAD4u;
    SET_GPR_U32(ctx, 31, 0x22DADCu);
    ctx->pc = 0x22DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAD4u;
    // 0x22dad8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DB60u, 0x22DAD4u, 0x22DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DADCu;
label_22dadc:
    // 0x22dadc: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x22dadcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22dae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dae8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DAE8u;
    {
        const bool branch_taken_0x22dae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAE8u;
        // 0x22daec: 0x97a50010  lhu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dae8) {
            ctx->pc = 0x22DAF8u;
            goto label_22daf8;
        }
    }
    ctx->pc = 0x22DAF0u;
    // 0x22daf0: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x22daf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x22daf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22daf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22daf8:
    // 0x22daf8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22DAF8u;
    {
        const bool branch_taken_0x22daf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF8u;
        // 0x22dafc: 0xa6050000  sh          $a1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daf8) {
            ctx->pc = 0x22DB40u;
            goto label_22db40;
        }
    }
    ctx->pc = 0x22DB00u;
    // 0x22db00: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x22db00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22db04: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x22db04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22db08: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x22db08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22db0c: 0x24a807ff  addiu       $t0, $a1, 0x7FF
    ctx->pc = 0x22db0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x22db10: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22db10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db14: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x22db14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22db18: 0x104180b  movn        $v1, $t0, $a0
    ctx->pc = 0x22db18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x22db1c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x22db20: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x22db20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x22db24: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22db28: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22db2c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x22db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22db30: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x22db30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x22db34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DB34u;
    {
        const bool branch_taken_0x22db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB34u;
        // 0x22db38: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db34) {
            ctx->pc = 0x22DB48u;
            goto label_22db48;
        }
    }
    ctx->pc = 0x22DB3Cu;
    // 0x22db3c: 0x0  nop
    ctx->pc = 0x22db3cu;
    // NOP
label_22db40:
    // 0x22db40: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22db40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22db44: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22db44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_22db48:
    // 0x22db48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22db48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22db4c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22db4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22db50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22db50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22db54: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db58: 0x3e00008  jr          $ra
    ctx->pc = 0x22DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB58u;
        // 0x22db5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DB60u;
}
