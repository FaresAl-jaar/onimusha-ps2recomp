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

// Function: sub_0035AA40
// Address: 0x35aa40 - 0x35abf0
void sub_0035AA40_0x35aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AA40_0x35aa40");
#endif

    switch (ctx->pc) {
        case 0x35aad0u: goto label_35aad0;
        case 0x35aae8u: goto label_35aae8;
        case 0x35ab08u: goto label_35ab08;
        case 0x35ab40u: goto label_35ab40;
        case 0x35ab64u: goto label_35ab64;
        case 0x35ab7cu: goto label_35ab7c;
        case 0x35ab90u: goto label_35ab90;
        default: break;
    }

    ctx->pc = 0x35aa40u;

    // 0x35aa40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35aa44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x35aa48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35aa4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35aa50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35aa54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35aa58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35aa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35aa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35aa64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35aa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa68: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x35aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x35aa6c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x35aa6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35aa70: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x35aa70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35aa74: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x35AA74u;
    {
        const bool branch_taken_0x35aa74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA74u;
        // 0x35aa78: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa74) {
            ctx->pc = 0x35ABC8u;
            goto label_35abc8;
        }
    }
    ctx->pc = 0x35AA7Cu;
    // 0x35aa7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x35aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35aa80: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x35aa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x35aa84: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x35aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35aa88: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x35aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x35aa8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x35aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x35aa90: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x35AA90u;
    {
        const bool branch_taken_0x35aa90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA90u;
        // 0x35aa94: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa90) {
            ctx->pc = 0x35AB20u;
            goto label_35ab20;
        }
    }
    ctx->pc = 0x35AA98u;
    // 0x35aa98: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x35aa98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x35aa9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35aaa0: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x35aaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x35aaa4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x35aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35aaa8: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x35aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x35aaac: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x35aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x35aab0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x35aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35aab4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35aab8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35aabc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x35aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35aac0: 0xa0510028  sb          $s1, 0x28($v0)
    ctx->pc = 0x35aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 17));
    // 0x35aac4: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x35aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35aac8: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x35AAC8u;
    SET_GPR_U32(ctx, 31, 0x35AAD0u);
    ctx->pc = 0x35AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAC8u;
    // 0x35aacc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x35AAC8u, 0x35AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAD0u;
label_35aad0:
    // 0x35aad0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x35AAD0u;
    {
        const bool branch_taken_0x35aad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AAD0u;
        // 0x35aad4: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aad0) {
            ctx->pc = 0x35ABC0u;
            goto label_35abc0;
        }
    }
    ctx->pc = 0x35AAD8u;
    // 0x35aad8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x35aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x35aadc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x35aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x35aae0: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x35AAE0u;
    SET_GPR_U32(ctx, 31, 0x35AAE8u);
    ctx->pc = 0x35AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAE0u;
    // 0x35aae4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x35AAE0u, 0x35AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAE8u;
label_35aae8:
    // 0x35aae8: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x35aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35aaec: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x35aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x35aaf0: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x35aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x35aaf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35aaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaf8: 0x48900  sll         $s1, $a0, 4
    ctx->pc = 0x35aaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35aafc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ab00: 0xc0a8284  jal         func_2A0A10
    ctx->pc = 0x35AB00u;
    SET_GPR_U32(ctx, 31, 0x35AB08u);
    ctx->pc = 0x35AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB00u;
    // 0x35ab04: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0A10u, 0x35AB00u, 0x35AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB08u;
label_35ab08:
    // 0x35ab08: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x35ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35ab0c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x35ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x35ab10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ab14: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x35ab14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x35ab18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x35AB18u;
    {
        const bool branch_taken_0x35ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB18u;
        // 0x35ab1c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab18) {
            ctx->pc = 0x35ABC0u;
            goto label_35abc0;
        }
    }
    ctx->pc = 0x35AB20u;
label_35ab20:
    // 0x35ab20: 0x96430068  lhu         $v1, 0x68($s2)
    ctx->pc = 0x35ab20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x35ab24: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x35ab24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35ab28: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x35AB28u;
    {
        const bool branch_taken_0x35ab28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB28u;
        // 0x35ab2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab28) {
            ctx->pc = 0x35ABC0u;
            goto label_35abc0;
        }
    }
    ctx->pc = 0x35AB30u;
    // 0x35ab30: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x35ab30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x35ab34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x35ab34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35ab38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab3c: 0x0  nop
    ctx->pc = 0x35ab3cu;
    // NOP
label_35ab40:
    // 0x35ab40: 0x12d30019  beq         $s6, $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x35AB40u;
    {
        const bool branch_taken_0x35ab40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        if (branch_taken_0x35ab40) {
            ctx->pc = 0x35ABA8u;
            goto label_35aba8;
        }
    }
    ctx->pc = 0x35AB48u;
    // 0x35ab48: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x35ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x35ab4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ab50: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x35ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x35ab54: 0xa0510028  sb          $s1, 0x28($v0)
    ctx->pc = 0x35ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 17));
    // 0x35ab58: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x35ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35ab5c: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x35AB5Cu;
    SET_GPR_U32(ctx, 31, 0x35AB64u);
    ctx->pc = 0x35AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB5Cu;
    // 0x35ab60: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x35AB5Cu, 0x35AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB64u;
label_35ab64:
    // 0x35ab64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35AB64u;
    {
        const bool branch_taken_0x35ab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB64u;
        // 0x35ab68: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab64) {
            ctx->pc = 0x35ABA8u;
            goto label_35aba8;
        }
    }
    ctx->pc = 0x35AB6Cu;
    // 0x35ab6c: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x35ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x35ab70: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x35ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x35ab74: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x35AB74u;
    SET_GPR_U32(ctx, 31, 0x35AB7Cu);
    ctx->pc = 0x35AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB74u;
    // 0x35ab78: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x35AB74u, 0x35AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB7Cu;
label_35ab7c:
    // 0x35ab7c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x35ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35ab80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ab88: 0xc0a8284  jal         func_2A0A10
    ctx->pc = 0x35AB88u;
    SET_GPR_U32(ctx, 31, 0x35AB90u);
    ctx->pc = 0x35AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB88u;
    // 0x35ab8c: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0A10u, 0x35AB88u, 0x35AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB90u;
label_35ab90:
    // 0x35ab90: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x35ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x35ab94: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x35ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ab98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ab9c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x35ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x35aba0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x35aba4: 0x0  nop
    ctx->pc = 0x35aba4u;
    // NOP
label_35aba8:
    // 0x35aba8: 0x96430068  lhu         $v1, 0x68($s2)
    ctx->pc = 0x35aba8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x35abac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x35abacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x35abb0: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x35abb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x35abb4: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x35abb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35abb8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x35ABB8u;
    {
        const bool branch_taken_0x35abb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABB8u;
        // 0x35abbc: 0x269401f0  addiu       $s4, $s4, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35abb8) {
            ctx->pc = 0x35AB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ab40;
        }
    }
    ctx->pc = 0x35ABC0u;
label_35abc0:
    // 0x35abc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35abc4: 0xa20300d0  sb          $v1, 0xD0($s0)
    ctx->pc = 0x35abc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 3));
label_35abc8:
    // 0x35abc8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x35abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35abcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35abccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35abd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35abd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35abd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35abd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35abd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35abd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35abdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35abdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35abe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35abe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35abe8: 0x3e00008  jr          $ra
    ctx->pc = 0x35ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABE8u;
        // 0x35abec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ABE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ABF0u;
}
