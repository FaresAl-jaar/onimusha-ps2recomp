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

// Function: sub_0023EEA8
// Address: 0x23eea8 - 0x23f05c
void sub_0023EEA8_0x23eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EEA8_0x23eea8");
#endif

    switch (ctx->pc) {
        case 0x23eeecu: goto label_23eeec;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef80u: goto label_23ef80;
        case 0x23efe0u: goto label_23efe0;
        default: break;
    }

    ctx->pc = 0x23eea8u;

    // 0x23eea8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23eeac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23eeacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23eeb0: 0x8c43c4c0  lw          $v1, -0x3B40($v0)
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CC4C0u));
    // 0x23eeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23eeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23eeb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23eeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23eec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23eec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23eec8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23eec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eecc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23eeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23eed0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23eed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eed4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23eed8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x23eed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eedc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EEDCu;
    {
        const bool branch_taken_0x23eedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEDCu;
        // 0x23eee0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eedc) {
            ctx->pc = 0x23EEECu;
            goto label_23eeec;
        }
    }
    ctx->pc = 0x23EEE4u;
    // 0x23eee4: 0xc08fb9a  jal         func_23EE68
    ctx->pc = 0x23EEE4u;
    SET_GPR_U32(ctx, 31, 0x23EEECu);
    ctx->pc = 0x23EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EE68u, 0x23EEE4u, 0x23EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEECu;
label_23eeec:
    // 0x23eeec: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x23eeecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x23eef0: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x23eef0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x23eef4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EEF4u;
    {
        const bool branch_taken_0x23eef4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF4u;
        // 0x23eef8: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef4) {
            ctx->pc = 0x23EF04u;
            goto label_23ef04;
        }
    }
    ctx->pc = 0x23EEFCu;
    // 0x23eefc: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x23EEFCu;
    {
        const bool branch_taken_0x23eefc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEFCu;
        // 0x23ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eefc) {
            ctx->pc = 0x23F03Cu;
            goto label_23f03c;
        }
    }
    ctx->pc = 0x23EF04u;
label_23ef04:
    // 0x23ef04: 0x3c0b0067  lui         $t3, 0x67
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)103 << 16));
    // 0x23ef08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23ef08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef0c: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x23ef10: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF10u;
        // 0x23ef14: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF74u;
            goto label_23ef74;
        }
    }
    ctx->pc = 0x23EF18u;
    // 0x23ef18: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23ef18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef1c: 0x0  nop
    ctx->pc = 0x23ef1cu;
    // NOP
label_23ef20:
    // 0x23ef20: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x23ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x23ef24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23ef28: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23ef28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ef2c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x23ef2cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23ef30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23ef34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23ef38: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x23ef3c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x23ef3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ef40: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x23ef44: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x23ef44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23ef48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23ef48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef4c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x23ef4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x23ef50: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x23ef50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x23ef54: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x23ef58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ef5c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23ef60: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x23ef64: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23EF64u;
    {
        const bool branch_taken_0x23ef64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF64u;
        // 0x23ef68: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef64) {
            ctx->pc = 0x23EF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ef20;
        }
    }
    ctx->pc = 0x23EF6Cu;
    // 0x23ef6c: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x23ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x23ef70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23ef70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ef74:
    // 0x23ef74: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EF74u;
    {
        const bool branch_taken_0x23ef74 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF74u;
        // 0x23ef78: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef74) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EF7Cu;
    // 0x23ef7c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23ef7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ef80:
    // 0x23ef80: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x23ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x23ef84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ef84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23ef88: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ef8c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x23ef8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23ef90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23ef94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23ef98: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x23ef98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x23ef9c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x23ef9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23efa0: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x23efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x23efa4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x23efa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23efa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23efa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efac: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x23efacu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x23efb0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x23efb4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x23efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x23efb8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23efbc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23efc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x23efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x23efc4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ef80;
        }
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x23efd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23efd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efd4: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EFD4u;
    {
        const bool branch_taken_0x23efd4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD4u;
        // 0x23efd8: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efd4) {
            ctx->pc = 0x23F02Cu;
            goto label_23f02c;
        }
    }
    ctx->pc = 0x23EFDCu;
    // 0x23efdc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23efdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23efe0:
    // 0x23efe0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x23efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x23efe4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23efe8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23efe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23efec: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x23efecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23eff0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23eff4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23eff8: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x23eff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x23effc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x23effcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f000: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x23f000u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23f004: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x23f004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x23f008: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23f008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f00c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x23f00cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x23f010: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x23f010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x23f014: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x23f018: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23f018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f01c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f020: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x23f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x23f024: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23F024u;
    {
        const bool branch_taken_0x23f024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F024u;
        // 0x23f028: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f024) {
            ctx->pc = 0x23EFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23efe0;
        }
    }
    ctx->pc = 0x23F02Cu;
label_23f02c:
    // 0x23f02c: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x23f02cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x23f030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f034: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x23f034u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x23f038: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x23f038u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_23f03c:
    // 0x23f03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f048: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f04c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f050: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23f050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23f054: 0x3e00008  jr          $ra
    ctx->pc = 0x23F054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F054u;
        // 0x23f058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F05Cu;
}
