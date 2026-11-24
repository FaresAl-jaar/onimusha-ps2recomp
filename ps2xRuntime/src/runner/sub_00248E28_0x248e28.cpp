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

// Function: sub_00248E28
// Address: 0x248e28 - 0x248fb8
void sub_00248E28_0x248e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248E28_0x248e28");
#endif

    switch (ctx->pc) {
        case 0x248e78u: goto label_248e78;
        case 0x248eacu: goto label_248eac;
        case 0x248eb4u: goto label_248eb4;
        case 0x248eb8u: goto label_248eb8;
        case 0x248ec0u: goto label_248ec0;
        case 0x248ed0u: goto label_248ed0;
        case 0x248ed8u: goto label_248ed8;
        case 0x248ee4u: goto label_248ee4;
        case 0x248efcu: goto label_248efc;
        case 0x248f1cu: goto label_248f1c;
        case 0x248f38u: goto label_248f38;
        case 0x248f48u: goto label_248f48;
        case 0x248f68u: goto label_248f68;
        case 0x248f84u: goto label_248f84;
        default: break;
    }

    ctx->pc = 0x248e28u;

    // 0x248e28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x248e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x248e2c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x248e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x248e30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x248e30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e34: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x248e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x248e38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x248e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e3c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x248e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x248e40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x248e40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e44: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x248e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x248e48: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x248e48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e4c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x248e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x248e50: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x248e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x248e54: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x248e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x248e58: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x248e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x248e5c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x248e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x248e60: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x248e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x248e64: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
    ctx->pc = 0x248E64u;
    {
        const bool branch_taken_0x248e64 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x248E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E64u;
        // 0x248e68: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e64) {
            ctx->pc = 0x248F58u;
            goto label_248f58;
        }
    }
    ctx->pc = 0x248E6Cu;
    // 0x248e6c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x248e70: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x248e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e74: 0x245e0b40  addiu       $fp, $v0, 0xB40
    ctx->pc = 0x248e74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
label_248e78:
    // 0x248e78: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x248e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x248e7c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x248e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x248e80: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x248e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x248e84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x248e88: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x248e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x248e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248e90: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x248e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x248e94: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248e98: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x248E98u;
    {
        const bool branch_taken_0x248e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E98u;
        // 0x248e9c: 0x3c13004d  lui         $s3, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e98) {
            ctx->pc = 0x248F48u;
            goto label_248f48;
        }
    }
    ctx->pc = 0x248EA0u;
    // 0x248ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ea4: 0xc09224e  jal         func_248938
    ctx->pc = 0x248EA4u;
    SET_GPR_U32(ctx, 31, 0x248EACu);
    ctx->pc = 0x248EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EA4u;
    // 0x248ea8: 0x26650c68  addiu       $a1, $s3, 0xC68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248EA4u, 0x248EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EACu;
label_248eac:
    // 0x248eac: 0xc091a44  jal         func_246910
    ctx->pc = 0x248EACu;
    SET_GPR_U32(ctx, 31, 0x248EB4u);
    ctx->pc = 0x248EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EACu;
    // 0x248eb0: 0x34049400  ori         $a0, $zero, 0x9400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248EACu, 0x248EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EB4u;
label_248eb4:
    // 0x248eb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x248eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248eb8:
    // 0x248eb8: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248EB8u;
    SET_GPR_U32(ctx, 31, 0x248EC0u);
    ctx->pc = 0x248EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EB8u;
    // 0x248ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248EB8u, 0x248EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EC0u;
label_248ec0:
    // 0x248ec0: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x248EC0u;
    {
        const bool branch_taken_0x248ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x248ec0) {
            ctx->pc = 0x248EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248eb8;
        }
    }
    ctx->pc = 0x248EC8u;
    // 0x248ec8: 0xc091a44  jal         func_246910
    ctx->pc = 0x248EC8u;
    SET_GPR_U32(ctx, 31, 0x248ED0u);
    ctx->pc = 0x248ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EC8u;
    // 0x248ecc: 0x34049401  ori         $a0, $zero, 0x9401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37889);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248EC8u, 0x248ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248ED0u;
label_248ed0:
    // 0x248ed0: 0xc091a44  jal         func_246910
    ctx->pc = 0x248ED0u;
    SET_GPR_U32(ctx, 31, 0x248ED8u);
    ctx->pc = 0x248ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248ED0u;
    // 0x248ed4: 0x34049500  ori         $a0, $zero, 0x9500 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248ED0u, 0x248ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248ED8u;
label_248ed8:
    // 0x248ed8: 0x26650c68  addiu       $a1, $s3, 0xC68
    ctx->pc = 0x248ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    // 0x248edc: 0xc091f58  jal         func_247D60
    ctx->pc = 0x248EDCu;
    SET_GPR_U32(ctx, 31, 0x248EE4u);
    ctx->pc = 0x248EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EDCu;
    // 0x248ee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x248EDCu, 0x248EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EE4u;
label_248ee4:
    // 0x248ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248ee8: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x248EE8u;
    {
        const bool branch_taken_0x248ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x248ee8) {
            ctx->pc = 0x248EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248EE8u;
            // 0x248eec: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248F28u;
            goto label_248f28;
        }
    }
    ctx->pc = 0x248EF0u;
    // 0x248ef0: 0x34049501  ori         $a0, $zero, 0x9501
    ctx->pc = 0x248ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38145);
    // 0x248ef4: 0xc091a44  jal         func_246910
    ctx->pc = 0x248EF4u;
    SET_GPR_U32(ctx, 31, 0x248EFCu);
    ctx->pc = 0x248EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EF4u;
    // 0x248ef8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248EF4u, 0x248EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EFCu;
label_248efc:
    // 0x248efc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x248f00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x248f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248f04: 0x2444d078  addiu       $a0, $v0, -0x2F88
    ctx->pc = 0x248f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955128));
    // 0x248f08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x248f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x248f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f10: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x248f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x248f14: 0xc08d460  jal         func_235180
    ctx->pc = 0x248F14u;
    SET_GPR_U32(ctx, 31, 0x248F1Cu);
    ctx->pc = 0x248F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F14u;
    // 0x248f18: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x248F14u, 0x248F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F1Cu;
label_248f1c:
    // 0x248f1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x248F1Cu;
    {
        const bool branch_taken_0x248f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F1Cu;
        // 0x248f20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f1c) {
            ctx->pc = 0x248F4Cu;
            goto label_248f4c;
        }
    }
    ctx->pc = 0x248F24u;
    // 0x248f24: 0x0  nop
    ctx->pc = 0x248f24u;
    // NOP
label_248f28:
    // 0x248f28: 0x34049502  ori         $a0, $zero, 0x9502
    ctx->pc = 0x248f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
    // 0x248f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x248f30: 0xc091a44  jal         func_246910
    ctx->pc = 0x248F30u;
    SET_GPR_U32(ctx, 31, 0x248F38u);
    ctx->pc = 0x248F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F30u;
    // 0x248f34: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248F30u, 0x248F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F38u;
label_248f38:
    // 0x248f38: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x248f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x248f3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f40: 0xc08d460  jal         func_235180
    ctx->pc = 0x248F40u;
    SET_GPR_U32(ctx, 31, 0x248F48u);
    ctx->pc = 0x248F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F40u;
    // 0x248f44: 0x2444d090  addiu       $a0, $v0, -0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x248F40u, 0x248F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F48u;
label_248f48:
    // 0x248f48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x248f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_248f4c:
    // 0x248f4c: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x248f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x248f50: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x248F50u;
    {
        const bool branch_taken_0x248f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F50u;
        // 0x248f54: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f50) {
            ctx->pc = 0x248E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e78;
        }
    }
    ctx->pc = 0x248F58u;
label_248f58:
    // 0x248f58: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x248f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x248f5c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x248f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f60: 0xc08d460  jal         func_235180
    ctx->pc = 0x248F60u;
    SET_GPR_U32(ctx, 31, 0x248F68u);
    ctx->pc = 0x248F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F60u;
    // 0x248f64: 0x2484d0a8  addiu       $a0, $a0, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x248F60u, 0x248F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F68u;
label_248f68:
    // 0x248f68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x248f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248f6c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x248F6Cu;
    {
        const bool branch_taken_0x248f6c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x248F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F6Cu;
        // 0x248f70: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f6c) {
            ctx->pc = 0x248F88u;
            goto label_248f88;
        }
    }
    ctx->pc = 0x248F74u;
    // 0x248f74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x248f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x248f78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x248f7c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x248F7Cu;
    SET_GPR_U32(ctx, 31, 0x248F84u);
    ctx->pc = 0x248F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F7Cu;
    // 0x248f80: 0x2484d0c0  addiu       $a0, $a0, -0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x248F7Cu, 0x248F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F84u;
label_248f84:
    // 0x248f84: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x248f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_248f88:
    // 0x248f88: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x248f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248f8c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x248f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248f90: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x248f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x248f94: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x248f98: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x248f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248f9c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248fa0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x248fa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248fa4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x248fa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fa8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x248fa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248fac: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x248facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x248fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x248FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FB0u;
        // 0x248fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FB8u;
}
