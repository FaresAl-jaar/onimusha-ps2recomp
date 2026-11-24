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

// Function: sub_00336A50
// Address: 0x336a50 - 0x336bb0
void sub_00336A50_0x336a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A50_0x336a50");
#endif

    switch (ctx->pc) {
        case 0x336a84u: goto label_336a84;
        case 0x336b18u: goto label_336b18;
        default: break;
    }

    ctx->pc = 0x336a50u;

    // 0x336a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336a54: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x336a5c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x336a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x336a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336a68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x336a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336a70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x336a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336a78: 0x94500004  lhu         $s0, 0x4($v0)
    ctx->pc = 0x336a78u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336a7c: 0xc0bd1ec  jal         func_2F47B0
    ctx->pc = 0x336A7Cu;
    SET_GPR_U32(ctx, 31, 0x336A84u);
    ctx->pc = 0x336A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A7Cu;
    // 0x336a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F47B0u, 0x336A7Cu, 0x336A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A84u;
label_336a84:
    // 0x336a84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x336A84u;
    {
        const bool branch_taken_0x336a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336a84) {
            ctx->pc = 0x336AB0u;
            goto label_336ab0;
        }
    }
    ctx->pc = 0x336A8Cu;
    // 0x336a8c: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x336a8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336a90: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336a94: 0x64040003  daddiu      $a0, $zero, 0x3
    ctx->pc = 0x336a94u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x336a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336a9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336aa0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336aa4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x336AA4u;
    {
        const bool branch_taken_0x336aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AA4u;
        // 0x336aa8: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aa4) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336AACu;
    // 0x336aac: 0x0  nop
    ctx->pc = 0x336aacu;
    // NOP
label_336ab0:
    // 0x336ab0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x336ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x336ab4: 0x9023141c  lbu         $v1, 0x141C($at)
    ctx->pc = 0x336ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92141Cu));
    // 0x336ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336abc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x336ABCu;
    {
        const bool branch_taken_0x336abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336abc) {
            ctx->pc = 0x336AF0u;
            goto label_336af0;
        }
    }
    ctx->pc = 0x336AC4u;
    // 0x336ac4: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x336ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x336ac8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x336AC8u;
    {
        const bool branch_taken_0x336ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ac8) {
            ctx->pc = 0x336B60u;
            goto label_336b60;
        }
    }
    ctx->pc = 0x336AD0u;
    // 0x336ad0: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x336ad0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336ad4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336ad8: 0x64040007  daddiu      $a0, $zero, 0x7
    ctx->pc = 0x336ad8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
    // 0x336adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ae0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336ae4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336ae8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x336AE8u;
    {
        const bool branch_taken_0x336ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AE8u;
        // 0x336aec: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ae8) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336AF0u;
label_336af0:
    // 0x336af0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x336af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336af4: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x336af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x336af8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x336af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336afc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x336afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336b00: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x336b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x336b04: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x336B04u;
    {
        const bool branch_taken_0x336b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x336B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B04u;
        // 0x336b08: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b04) {
            ctx->pc = 0x336B60u;
            goto label_336b60;
        }
    }
    ctx->pc = 0x336B0Cu;
    // 0x336b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b10: 0xc0bcc08  jal         func_2F3020
    ctx->pc = 0x336B10u;
    SET_GPR_U32(ctx, 31, 0x336B18u);
    ctx->pc = 0x336B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B10u;
    // 0x336b14: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3020u, 0x336B10u, 0x336B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B18u;
label_336b18:
    // 0x336b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336b1c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x336B1Cu;
    {
        const bool branch_taken_0x336b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x336b1c) {
            ctx->pc = 0x336B40u;
            goto label_336b40;
        }
    }
    ctx->pc = 0x336B24u;
    // 0x336b24: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x336b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336b28: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x336b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336b2c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x336b2cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x336b30: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336b34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336b38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336B38u;
    {
        const bool branch_taken_0x336b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B38u;
        // 0x336b3c: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b38) {
            ctx->pc = 0x336B58u;
            goto label_336b58;
        }
    }
    ctx->pc = 0x336B40u;
label_336b40:
    // 0x336b40: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x336b40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336b44: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x336b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336b48: 0x64030007  daddiu      $v1, $zero, 0x7
    ctx->pc = 0x336b48u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
    // 0x336b4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336b54: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x336b54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_336b58:
    // 0x336b58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x336B58u;
    {
        const bool branch_taken_0x336b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B58u;
        // 0x336b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b58) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336B60u;
label_336b60:
    // 0x336b60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x336b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x336b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x336b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336b68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336B68u;
    {
        const bool branch_taken_0x336b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336b68) {
            ctx->pc = 0x336B90u;
            goto label_336b90;
        }
    }
    ctx->pc = 0x336B70u;
    // 0x336b70: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x336b70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336b74: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336b78: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x336b78u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x336b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336b80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336b84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336B88u;
    {
        const bool branch_taken_0x336b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B88u;
        // 0x336b8c: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b88) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336B90u;
label_336b90:
    // 0x336b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336b94: 0x0  nop
    ctx->pc = 0x336b94u;
    // NOP
label_336b98:
    // 0x336b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x336BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BA8u;
        // 0x336bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336BB0u;
}
