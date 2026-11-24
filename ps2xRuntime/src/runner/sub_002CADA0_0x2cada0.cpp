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

// Function: sub_002CADA0
// Address: 0x2cada0 - 0x2caec8
void sub_002CADA0_0x2cada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CADA0_0x2cada0");
#endif

    switch (ctx->pc) {
        case 0x2cade0u: goto label_2cade0;
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae50u: goto label_2cae50;
        case 0x2cae78u: goto label_2cae78;
        case 0x2caea0u: goto label_2caea0;
        case 0x2caeacu: goto label_2caeac;
        default: break;
    }

    ctx->pc = 0x2cada0u;

    // 0x2cada0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cada4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cada8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cadac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cadacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cadb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cadb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cadb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cadb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cadbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cadbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cadc4: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2cadc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cadc8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x2cadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x2cadcc: 0xa0800033  sb          $zero, 0x33($a0)
    ctx->pc = 0x2cadccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cadd0: 0x8ca229c0  lw          $v0, 0x29C0($a1)
    ctx->pc = 0x2cadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x2cadd4: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x2cadd4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cadd8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2CADD8u;
    SET_GPR_U32(ctx, 31, 0x2CADE0u);
    ctx->pc = 0x2CADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADD8u;
    // 0x2caddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2CADD8u, 0x2CADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADE0u;
label_2cade0:
    // 0x2cade0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2cade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2cade4: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x2cade4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2cade8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2cade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cadec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cadecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cadf0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2cadf0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cadf4: 0x0  nop
    ctx->pc = 0x2cadf4u;
    // NOP
    // 0x2cadf8: 0x0  nop
    ctx->pc = 0x2cadf8u;
    // NOP
    // 0x2cadfc: 0x1812  mflo        $v1
    ctx->pc = 0x2cadfcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2cae00: 0x278289e8  addiu       $v0, $gp, -0x7618
    ctx->pc = 0x2cae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x2cae04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae08: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2cae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2cae0c: 0xa2430034  sb          $v1, 0x34($s2)
    ctx->pc = 0x2cae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cae10: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x2cae10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2cae14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cae18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cae1c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2cae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cae20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cae24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cae28: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2CAE28u;
    SET_GPR_U32(ctx, 31, 0x2CAE30u);
    ctx->pc = 0x2CAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE28u;
    // 0x2cae2c: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2CAE28u, 0x2CAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE30u;
label_2cae30:
    // 0x2cae30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cae30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cae34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae38: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2cae38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cae3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cae40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cae44: 0x90460018  lbu         $a2, 0x18($v0)
    ctx->pc = 0x2cae44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2cae48: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2CAE48u;
    SET_GPR_U32(ctx, 31, 0x2CAE50u);
    ctx->pc = 0x2CAE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE48u;
    // 0x2cae4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2CAE48u, 0x2CAE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE50u;
label_2cae50:
    // 0x2cae50: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x2cae50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2cae54: 0x278289e8  addiu       $v0, $gp, -0x7618
    ctx->pc = 0x2cae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x2cae58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cae60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cae64: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2cae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cae68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cae70: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2CAE70u;
    SET_GPR_U32(ctx, 31, 0x2CAE78u);
    ctx->pc = 0x2CAE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE70u;
    // 0x2cae74: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2CAE70u, 0x2CAE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE78u;
label_2cae78:
    // 0x2cae78: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x2cae78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2cae7c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2cae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cae80: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2cae80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cae84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cae84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cae88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cae8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cae90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae94: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2cae94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cae98: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2CAE98u;
    SET_GPR_U32(ctx, 31, 0x2CAEA0u);
    ctx->pc = 0x2CAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE98u;
    // 0x2cae9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8330u, 0x2CAE98u, 0x2CAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEA0u;
label_2caea0:
    // 0x2caea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2caea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caea4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CAEA4u;
    SET_GPR_U32(ctx, 31, 0x2CAEACu);
    ctx->pc = 0x2CAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEA4u;
    // 0x2caea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CAEA4u, 0x2CAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEACu;
label_2caeac:
    // 0x2caeac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2caeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caeb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2caeb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caeb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2caeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2caeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEC0u;
        // 0x2caec4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAEC8u;
}
