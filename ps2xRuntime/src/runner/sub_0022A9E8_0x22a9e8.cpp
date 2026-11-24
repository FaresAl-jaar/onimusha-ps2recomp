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

// Function: sub_0022A9E8
// Address: 0x22a9e8 - 0x22aaf8
void sub_0022A9E8_0x22a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A9E8_0x22a9e8");
#endif

    switch (ctx->pc) {
        case 0x22aa58u: goto label_22aa58;
        default: break;
    }

    ctx->pc = 0x22a9e8u;

    // 0x22a9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a9ec: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x22a9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22a9f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22a9f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22a9fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22a9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22aa04: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x22aa04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22aa0c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x22aa0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22aa14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22aa14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22aa1c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22aa1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa20: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22aa24: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x22aa24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa28: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x22aa2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22aa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa30: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x22aa30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x22aa34: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x22aa34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x22aa38: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x22aa38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x22aa3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AA3Cu;
    {
        const bool branch_taken_0x22aa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA3Cu;
        // 0x22aa40: 0x8faa0060  lw          $t2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa3c) {
            ctx->pc = 0x22AA50u;
            goto label_22aa50;
        }
    }
    ctx->pc = 0x22AA44u;
    // 0x22aa44: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x22aa44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22aa48: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x22AA48u;
    {
        const bool branch_taken_0x22aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA48u;
        // 0x22aa4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa48) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AA50u;
label_22aa50:
    // 0x22aa50: 0xc08a99e  jal         func_22A678
    ctx->pc = 0x22AA50u;
    SET_GPR_U32(ctx, 31, 0x22AA58u);
    ctx->pc = 0x22A678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A678u, 0x22AA50u, 0x22AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA58u;
label_22aa58:
    // 0x22aa58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22aa58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22aa60: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x22AA60u;
    {
        const bool branch_taken_0x22aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA60u;
        // 0x22aa64: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa60) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AA68u;
    // 0x22aa68: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x22aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22aa6c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22AA6Cu;
    {
        const bool branch_taken_0x22aa6c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x22AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA6Cu;
        // 0x22aa70: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa6c) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AA74u;
    // 0x22aa74: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aa78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22aa78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22aa7c: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x22aa7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22aa80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22aa80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa84: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x22aa84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22aa88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22aa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa8c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x22aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x22aa90: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x22aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22aa94: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x22aa94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22aa98: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x22aa98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22aa9c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22aaa0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22aaa4: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x22aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22aaa8: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22aaac: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x22aaacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22aab0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22aab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22aab4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22aab4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22aab8: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x22aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x22aabc: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x22aabcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22aac0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x22aac4: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x22aac4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22aac8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22aacc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_22aad0:
    // 0x22aad0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22aad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aad4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22aad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22aad8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22aad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aadc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22aadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22aae0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22aae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aae4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22aae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22aae8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22aae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22aaec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22aaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22aaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22AAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF0u;
        // 0x22aaf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AAF8u;
}
