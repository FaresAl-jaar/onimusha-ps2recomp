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

// Function: sub_0032ED10
// Address: 0x32ed10 - 0x32f120
void sub_0032ED10_0x32ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ED10_0x32ed10");
#endif

    switch (ctx->pc) {
        case 0x32eda0u: goto label_32eda0;
        case 0x32edc8u: goto label_32edc8;
        case 0x32eeb0u: goto label_32eeb0;
        case 0x32ef60u: goto label_32ef60;
        case 0x32ef8cu: goto label_32ef8c;
        case 0x32efc0u: goto label_32efc0;
        case 0x32eff4u: goto label_32eff4;
        case 0x32f018u: goto label_32f018;
        case 0x32f050u: goto label_32f050;
        case 0x32f060u: goto label_32f060;
        case 0x32f0e0u: goto label_32f0e0;
        default: break;
    }

    ctx->pc = 0x32ed10u;

    // 0x32ed10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x32ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x32ed14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32ed18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32ed1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32ed20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32ed24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32ed24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32ed28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32ed2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32ed30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ed34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ed38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ed3c: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x32ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x32ed40: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x32ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x32ed44: 0x908300f1  lbu         $v1, 0xF1($a0)
    ctx->pc = 0x32ed44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 241)));
    // 0x32ed48: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x32ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x32ed4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32ED4Cu;
    {
        const bool branch_taken_0x32ed4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED4Cu;
        // 0x32ed50: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ed4c) {
            ctx->pc = 0x32ED60u;
            goto label_32ed60;
        }
    }
    ctx->pc = 0x32ED54u;
    // 0x32ed54: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x32ED54u;
    {
        const bool branch_taken_0x32ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED54u;
        // 0x32ed58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ed54) {
            ctx->pc = 0x32F0F0u;
            goto label_32f0f0;
        }
    }
    ctx->pc = 0x32ED5Cu;
    // 0x32ed5c: 0x0  nop
    ctx->pc = 0x32ed5cu;
    // NOP
label_32ed60:
    // 0x32ed60: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x32ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x32ed64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ed64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed68: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x32ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x32ed6c: 0x94620068  lhu         $v0, 0x68($v1)
    ctx->pc = 0x32ed6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x32ed70: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32ed74: 0x8c69007c  lw          $t1, 0x7C($v1)
    ctx->pc = 0x32ed74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32ed78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ed7c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x32ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x32ed80: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ed84: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x32ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x32ed88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32ed8c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x32ed8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32ed90: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x32ED90u;
    {
        const bool branch_taken_0x32ed90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED90u;
        // 0x32ed94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ed90) {
            ctx->pc = 0x32EF28u;
            goto label_32ef28;
        }
    }
    ctx->pc = 0x32ED98u;
    // 0x32ed98: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
    // 0x32ed9c: 0x0  nop
    ctx->pc = 0x32ed9cu;
    // NOP
label_32eda0:
    // 0x32eda0: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x32eda0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x32eda4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eda8: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x32eda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x32edac: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x32EDACu;
    {
        const bool branch_taken_0x32edac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDACu;
        // 0x32edb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32edac) {
            ctx->pc = 0x32EED8u;
            goto label_32eed8;
        }
    }
    ctx->pc = 0x32EDB4u;
    // 0x32edb4: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x32edb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x32edb8: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x32EDB8u;
    {
        const bool branch_taken_0x32edb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDB8u;
        // 0x32edbc: 0x24c3fff8  addiu       $v1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32edb8) {
            ctx->pc = 0x32EE98u;
            goto label_32ee98;
        }
    }
    ctx->pc = 0x32EDC0u;
    // 0x32edc0: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x32edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x32edc4: 0x0  nop
    ctx->pc = 0x32edc4u;
    // NOP
label_32edc8:
    // 0x32edc8: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x32edc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32edcc: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x32edccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32edd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x32edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x32edd4: 0x8c4d0010  lw          $t5, 0x10($v0)
    ctx->pc = 0x32edd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32edd8: 0xe3582b  sltu        $t3, $a3, $v1
    ctx->pc = 0x32edd8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32eddc: 0x8c4e0018  lw          $t6, 0x18($v0)
    ctx->pc = 0x32eddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x32ede0: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x32ede0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32ede4: 0x8c540028  lw          $s4, 0x28($v0)
    ctx->pc = 0x32ede4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x32ede8: 0x95f20000  lhu         $s2, 0x0($t7)
    ctx->pc = 0x32ede8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x32edec: 0x95910000  lhu         $s1, 0x0($t4)
    ctx->pc = 0x32edecu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32edf0: 0x95b00000  lhu         $s0, 0x0($t5)
    ctx->pc = 0x32edf0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x32edf4: 0x95cf0000  lhu         $t7, 0x0($t6)
    ctx->pc = 0x32edf4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x32edf8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x32edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x32edfc: 0x126080  sll         $t4, $s2, 2
    ctx->pc = 0x32edfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x32ee00: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x32ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x32ee04: 0x25920020  addiu       $s2, $t4, 0x20
    ctx->pc = 0x32ee04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee08: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x32ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x32ee0c: 0x116080  sll         $t4, $s1, 2
    ctx->pc = 0x32ee0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ee10: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x32ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x32ee14: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x32ee14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee18: 0x968d0000  lhu         $t5, 0x0($s4)
    ctx->pc = 0x32ee18u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32ee1c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x32ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x32ee20: 0x966e0000  lhu         $t6, 0x0($s3)
    ctx->pc = 0x32ee20u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32ee24: 0x106080  sll         $t4, $s0, 2
    ctx->pc = 0x32ee24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32ee28: 0x25900020  addiu       $s0, $t4, 0x20
    ctx->pc = 0x32ee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee2c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x32ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x32ee30: 0xf6080  sll         $t4, $t7, 2
    ctx->pc = 0x32ee30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x32ee34: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x32ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x32ee38: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x32ee38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee3c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x32ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x32ee40: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x32ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x32ee44: 0xe6080  sll         $t4, $t6, 2
    ctx->pc = 0x32ee44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x32ee48: 0x258e0020  addiu       $t6, $t4, 0x20
    ctx->pc = 0x32ee48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee4c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x32ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x32ee50: 0xd6080  sll         $t4, $t5, 2
    ctx->pc = 0x32ee50u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x32ee54: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x32ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x32ee58: 0x8c4d0030  lw          $t5, 0x30($v0)
    ctx->pc = 0x32ee58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32ee5c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x32ee5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee60: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x32ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x32ee64: 0x8c4c0038  lw          $t4, 0x38($v0)
    ctx->pc = 0x32ee64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x32ee68: 0x95ae0000  lhu         $t6, 0x0($t5)
    ctx->pc = 0x32ee68u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x32ee6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32ee70: 0x958d0000  lhu         $t5, 0x0($t4)
    ctx->pc = 0x32ee70u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32ee74: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x32ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x32ee78: 0xe6080  sll         $t4, $t6, 2
    ctx->pc = 0x32ee78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x32ee7c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x32ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x32ee80: 0x258e0020  addiu       $t6, $t4, 0x20
    ctx->pc = 0x32ee80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee84: 0xd6080  sll         $t4, $t5, 2
    ctx->pc = 0x32ee84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x32ee88: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x32ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x32ee8c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x32ee8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32ee90: 0x1560ffcd  bnez        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x32EE90u;
    {
        const bool branch_taken_0x32ee90 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE90u;
        // 0x32ee94: 0xac2821  addu        $a1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee90) {
            ctx->pc = 0x32EDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32edc8;
        }
    }
    ctx->pc = 0x32EE98u;
label_32ee98:
    // 0x32ee98: 0xe6082b  sltu        $at, $a3, $a2
    ctx->pc = 0x32ee98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x32ee9c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32EE9Cu;
    {
        const bool branch_taken_0x32ee9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ee9c) {
            ctx->pc = 0x32EED8u;
            goto label_32eed8;
        }
    }
    ctx->pc = 0x32EEA4u;
    // 0x32eea4: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x32eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x32eea8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x32eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32eeac: 0x436021  addu        $t4, $v0, $v1
    ctx->pc = 0x32eeacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32eeb0:
    // 0x32eeb0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x32eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32eeb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32eeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32eeb8: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x32eeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x32eebc: 0x946b0000  lhu         $t3, 0x0($v1)
    ctx->pc = 0x32eebcu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32eec0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x32eec4: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x32eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x32eec8: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x32eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x32eecc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x32eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x32eed0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32EED0u;
    {
        const bool branch_taken_0x32eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EED0u;
        // 0x32eed4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eed0) {
            ctx->pc = 0x32EEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32eeb0;
        }
    }
    ctx->pc = 0x32EED8u;
label_32eed8:
    // 0x32eed8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x32eedc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x32eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x32eee0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32EEE0u;
    {
        const bool branch_taken_0x32eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32eee0) {
            ctx->pc = 0x32EF10u;
            goto label_32ef10;
        }
    }
    ctx->pc = 0x32EEE8u;
    // 0x32eee8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32eeec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x32eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32eef0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x32eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32eef4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32eef8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x32eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x32eefc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef00: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x32ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x32ef04: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x32ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32ef08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef0c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x32ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_32ef10:
    // 0x32ef10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32ef14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32ef14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32ef18: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x32ef18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32ef1c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x32EF1Cu;
    {
        const bool branch_taken_0x32ef1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF1Cu;
        // 0x32ef20: 0x252901f0  addiu       $t1, $t1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef1c) {
            ctx->pc = 0x32EDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32eda0;
        }
    }
    ctx->pc = 0x32EF24u;
    // 0x32ef24: 0x0  nop
    ctx->pc = 0x32ef24u;
    // NOP
label_32ef28:
    // 0x32ef28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef2c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x32ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32ef30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32ef34: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x32ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x32ef38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32ef3c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32ef40: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x32ef40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32ef44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ef48: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32ef4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ef50: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x32ef50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32ef54: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x32ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x32ef58: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x32EF58u;
    SET_GPR_U32(ctx, 31, 0x32EF60u);
    ctx->pc = 0x32EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF58u;
    // 0x32ef5c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x32EF58u, 0x32EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF60u;
label_32ef60:
    // 0x32ef60: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x32ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EF64u;
    {
        const bool branch_taken_0x32ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF64u;
        // 0x32ef68: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef64) {
            ctx->pc = 0x32EF78u;
            goto label_32ef78;
        }
    }
    ctx->pc = 0x32EF6Cu;
    // 0x32ef6c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x32EF6Cu;
    {
        const bool branch_taken_0x32ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF6Cu;
        // 0x32ef70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef6c) {
            ctx->pc = 0x32F0F0u;
            goto label_32f0f0;
        }
    }
    ctx->pc = 0x32EF74u;
    // 0x32ef74: 0x0  nop
    ctx->pc = 0x32ef74u;
    // NOP
label_32ef78:
    // 0x32ef78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef80: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x32ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x32ef84: 0xc049590  jal         func_125640
    ctx->pc = 0x32EF84u;
    SET_GPR_U32(ctx, 31, 0x32EF8Cu);
    ctx->pc = 0x32EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF84u;
    // 0x32ef88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x32EF84u, 0x32EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF8Cu;
label_32ef8c:
    // 0x32ef8c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ef90: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x32ef90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x32ef94: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x32ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x32ef98: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x32ef9c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x32ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x32efa0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x32efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x32efa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32efa8: 0x8c77007c  lw          $s7, 0x7C($v1)
    ctx->pc = 0x32efa8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32efac: 0x50a021  addu        $s4, $v0, $s0
    ctx->pc = 0x32efacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32efb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32efb4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x32efb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32efb8: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x32EFB8u;
    {
        const bool branch_taken_0x32efb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EFB8u;
        // 0x32efbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efb8) {
            ctx->pc = 0x32F0A0u;
            goto label_32f0a0;
        }
    }
    ctx->pc = 0x32EFC0u;
label_32efc0:
    // 0x32efc0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x32efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x32efc4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x32efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x32efc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32efcc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32EFCCu;
    {
        const bool branch_taken_0x32efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EFCCu;
        // 0x32efd0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efcc) {
            ctx->pc = 0x32F088u;
            goto label_32f088;
        }
    }
    ctx->pc = 0x32EFD4u;
    // 0x32efd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32efd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32EFD8u;
    {
        const bool branch_taken_0x32efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32efd8) {
            ctx->pc = 0x32EFF8u;
            goto label_32eff8;
        }
    }
    ctx->pc = 0x32EFE0u;
    // 0x32efe0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x32efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x32efe4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x32efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32efe8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x32efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x32efec: 0xc0a892c  jal         func_2A24B0
    ctx->pc = 0x32EFECu;
    SET_GPR_U32(ctx, 31, 0x32EFF4u);
    ctx->pc = 0x32EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EFECu;
    // 0x32eff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A24B0u, 0x32EFECu, 0x32EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFF4u;
label_32eff4:
    // 0x32eff4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x32eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_32eff8:
    // 0x32eff8: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x32eff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x32effc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32effcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32f000: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f004: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x32f004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32f008: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x32F008u;
    {
        const bool branch_taken_0x32f008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F008u;
        // 0x32f00c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f008) {
            ctx->pc = 0x32F088u;
            goto label_32f088;
        }
    }
    ctx->pc = 0x32F010u;
    // 0x32f010: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x32f010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f014: 0x0  nop
    ctx->pc = 0x32f014u;
    // NOP
label_32f018:
    // 0x32f018: 0x8ee50018  lw          $a1, 0x18($s7)
    ctx->pc = 0x32f018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x32f01c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x32f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32f020: 0x2682000f  addiu       $v0, $s4, 0xF
    ctx->pc = 0x32f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x32f024: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x32f024u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32f028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f02c: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x32f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x32f030: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32f030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f034: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x32f034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32f038: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x32f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32f03c: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x32f03cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32f040: 0x2662000f  addiu       $v0, $s3, 0xF
    ctx->pc = 0x32f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x32f044: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x32f044u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32f048: 0xc049522  jal         func_125488
    ctx->pc = 0x32F048u;
    SET_GPR_U32(ctx, 31, 0x32F050u);
    ctx->pc = 0x32F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F048u;
    // 0x32f04c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x32F048u, 0x32F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F050u;
label_32f050:
    // 0x32f050: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x32f050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32f054: 0x2962021  addu        $a0, $s4, $s6
    ctx->pc = 0x32f054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x32f058: 0xc049522  jal         func_125488
    ctx->pc = 0x32F058u;
    SET_GPR_U32(ctx, 31, 0x32F060u);
    ctx->pc = 0x32F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F058u;
    // 0x32f05c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x32F058u, 0x32F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F060u;
label_32f060:
    // 0x32f060: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x32f060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x32f064: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x32f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x32f068: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x32f068u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    // 0x32f06c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x32f06cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f070: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f074: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32f078: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x32f078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x32f07c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x32f07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32f080: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x32F080u;
    {
        const bool branch_taken_0x32f080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F080u;
        // 0x32f084: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f080) {
            ctx->pc = 0x32F018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f018;
        }
    }
    ctx->pc = 0x32F088u;
label_32f088:
    // 0x32f088: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f08c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32f08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32f090: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x32f090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32f094: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x32F094u;
    {
        const bool branch_taken_0x32f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F094u;
        // 0x32f098: 0x26f701f0  addiu       $s7, $s7, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f094) {
            ctx->pc = 0x32EFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32efc0;
        }
    }
    ctx->pc = 0x32F09Cu;
    // 0x32f09c: 0x0  nop
    ctx->pc = 0x32f09cu;
    // NOP
label_32f0a0:
    // 0x32f0a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32f0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32f0a4: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x32f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x32f0a8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32f0ac: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x32f0acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32f0b0: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x32f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x32f0b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32f0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32f0b8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x32f0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0bc: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x32f0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x32f0c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32f0c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x32f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x32f0c8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x32f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x32f0cc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x32f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x32f0d0: 0x9026cea4  lbu         $a2, -0x315C($at)
    ctx->pc = 0x32f0d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x32f0d4: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x32f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x32f0d8: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x32F0D8u;
    SET_GPR_U32(ctx, 31, 0x32F0E0u);
    ctx->pc = 0x32F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0D8u;
    // 0x32f0dc: 0x24a5ec60  addiu       $a1, $a1, -0x13A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0200u, 0x32F0D8u, 0x32F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0E0u;
label_32f0e0:
    // 0x32f0e0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x32f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32f0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f0e8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x32f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f0ec: 0x0  nop
    ctx->pc = 0x32f0ecu;
    // NOP
label_32f0f0:
    // 0x32f0f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32f0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32f0f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32f0f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32f0f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32f0f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32f0fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32f0fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32f100: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32f100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32f104: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32f104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f108: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32f108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f10c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32f10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f118: 0x3e00008  jr          $ra
    ctx->pc = 0x32F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F118u;
        // 0x32f11c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F120u;
}
