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

// Function: sub_00149DF0
// Address: 0x149df0 - 0x149f7c
void sub_00149DF0_0x149df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DF0_0x149df0");
#endif

    switch (ctx->pc) {
        case 0x149e64u: goto label_149e64;
        case 0x149eb0u: goto label_149eb0;
        case 0x149ed8u: goto label_149ed8;
        default: break;
    }

    ctx->pc = 0x149df0u;

    // 0x149df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x149df4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x149df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x149df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x149dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149e08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x149e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149e14: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x149e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x149e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149e1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149e20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x149e24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149e28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x149e2c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x149e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x149e30: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x149e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x149e34: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x149E34u;
    {
        const bool branch_taken_0x149e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E34u;
        // 0x149e38: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e34) {
            ctx->pc = 0x149EC8u;
            goto label_149ec8;
        }
    }
    ctx->pc = 0x149E3Cu;
    // 0x149e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149e40: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149E40u;
    {
        const bool branch_taken_0x149e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x149e40) {
            ctx->pc = 0x149E98u;
            goto label_149e98;
        }
    }
    ctx->pc = 0x149E48u;
    // 0x149e48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149E48u;
    {
        const bool branch_taken_0x149e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e48) {
            ctx->pc = 0x149E58u;
            goto label_149e58;
        }
    }
    ctx->pc = 0x149E50u;
    // 0x149e50: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x149E50u;
    {
        const bool branch_taken_0x149e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e50) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149E58u;
label_149e58:
    // 0x149e58: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x149e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x149e5c: 0xc048566  jal         func_121598
    ctx->pc = 0x149E5Cu;
    SET_GPR_U32(ctx, 31, 0x149E64u);
    ctx->pc = 0x149E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E5Cu;
    // 0x149e60: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x149E5Cu, 0x149E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E64u;
label_149e64:
    // 0x149e64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149E64u;
    {
        const bool branch_taken_0x149e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149e64) {
            ctx->pc = 0x149E78u;
            goto label_149e78;
        }
    }
    ctx->pc = 0x149E6Cu;
    // 0x149e6c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x149E6Cu;
    {
        const bool branch_taken_0x149e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E6Cu;
        // 0x149e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e6c) {
            ctx->pc = 0x149F60u;
            goto label_149f60;
        }
    }
    ctx->pc = 0x149E74u;
    // 0x149e74: 0x0  nop
    ctx->pc = 0x149e74u;
    // NOP
label_149e78:
    // 0x149e78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x149e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149e80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x149e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149e84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x149e88: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x149e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x149e8c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x149e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x149e90: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x149e90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x149e94: 0x0  nop
    ctx->pc = 0x149e94u;
    // NOP
label_149e98:
    // 0x149e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x149e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ea0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x149ea4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x149ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x149ea8: 0xc0485ae  jal         func_1216B8
    ctx->pc = 0x149EA8u;
    SET_GPR_U32(ctx, 31, 0x149EB0u);
    ctx->pc = 0x149EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EA8u;
    // 0x149eac: 0x26080014  addiu       $t0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216B8u, 0x149EA8u, 0x149EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EB0u;
label_149eb0:
    // 0x149eb0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x149EB0u;
    {
        const bool branch_taken_0x149eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149eb0) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149EB8u;
    // 0x149eb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149ec0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x149EC0u;
    {
        const bool branch_taken_0x149ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EC0u;
        // 0x149ec4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ec0) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149EC8u;
label_149ec8:
    // 0x149ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149ecc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x149eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x149ed0: 0xc048566  jal         func_121598
    ctx->pc = 0x149ED0u;
    SET_GPR_U32(ctx, 31, 0x149ED8u);
    ctx->pc = 0x149ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149ED0u;
    // 0x149ed4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x149ED0u, 0x149ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149ED8u;
label_149ed8:
    // 0x149ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149edc: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x149EDCu;
    {
        const bool branch_taken_0x149edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x149edc) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149EE4u;
    // 0x149ee4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x149ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x149ee8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x149eec: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x149EECu;
    {
        const bool branch_taken_0x149eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EECu;
        // 0x149ef0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149eec) {
            ctx->pc = 0x149F28u;
            goto label_149f28;
        }
    }
    ctx->pc = 0x149EF4u;
    // 0x149ef4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149EF4u;
    {
        const bool branch_taken_0x149ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149ef4) {
            ctx->pc = 0x149F28u;
            goto label_149f28;
        }
    }
    ctx->pc = 0x149EFCu;
    // 0x149efc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149f00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149F00u;
    {
        const bool branch_taken_0x149f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149f00) {
            ctx->pc = 0x149F18u;
            goto label_149f18;
        }
    }
    ctx->pc = 0x149F08u;
    // 0x149f08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F18u;
            goto label_149f18;
        }
    }
    ctx->pc = 0x149F10u;
    // 0x149f10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149F10u;
    {
        const bool branch_taken_0x149f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f10) {
            ctx->pc = 0x149F28u;
            goto label_149f28;
        }
    }
    ctx->pc = 0x149F18u;
label_149f18:
    // 0x149f18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x149f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x149f1c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x149f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149f20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x149F20u;
    {
        const bool branch_taken_0x149f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F20u;
        // 0x149f24: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f20) {
            ctx->pc = 0x149F60u;
            goto label_149f60;
        }
    }
    ctx->pc = 0x149F28u;
label_149f28:
    // 0x149f28: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x149f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149F2Cu;
    {
        const bool branch_taken_0x149f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F2Cu;
        // 0x149f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f2c) {
            ctx->pc = 0x149F48u;
            goto label_149f48;
        }
    }
    ctx->pc = 0x149F34u;
    // 0x149f34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149f38: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x149f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x149f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149F40u;
    {
        const bool branch_taken_0x149f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F40u;
        // 0x149f44: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f40) {
            ctx->pc = 0x149F58u;
            goto label_149f58;
        }
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x149f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x149f4c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x149f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149F50u;
    {
        const bool branch_taken_0x149f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F50u;
        // 0x149f54: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f50) {
            ctx->pc = 0x149F60u;
            goto label_149f60;
        }
    }
    ctx->pc = 0x149F58u;
label_149f58:
    // 0x149f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149f5c: 0x0  nop
    ctx->pc = 0x149f5cu;
    // NOP
label_149f60:
    // 0x149f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x149f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f74: 0x3e00008  jr          $ra
    ctx->pc = 0x149F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F74u;
        // 0x149f78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F7Cu;
}
