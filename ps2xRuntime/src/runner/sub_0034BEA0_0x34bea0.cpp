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

// Function: sub_0034BEA0
// Address: 0x34bea0 - 0x34bf98
void sub_0034BEA0_0x34bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BEA0_0x34bea0");
#endif

    switch (ctx->pc) {
        case 0x34bed0u: goto label_34bed0;
        case 0x34bed8u: goto label_34bed8;
        case 0x34bf20u: goto label_34bf20;
        case 0x34bf88u: goto label_34bf88;
        default: break;
    }

    ctx->pc = 0x34bea0u;

    // 0x34bea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34bea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34beac: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x34beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x34beb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34beb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34beb4: 0x908300bc  lbu         $v1, 0xBC($a0)
    ctx->pc = 0x34beb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x34beb8: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x34beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34bebc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x34bec0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x34bec4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x34bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x34bec8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x34BEC8u;
    SET_GPR_U32(ctx, 31, 0x34BED0u);
    ctx->pc = 0x34BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BEC8u;
    // 0x34becc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x34BEC8u, 0x34BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BED0u;
label_34bed0:
    // 0x34bed0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x34BED0u;
    SET_GPR_U32(ctx, 31, 0x34BED8u);
    ctx->pc = 0x34BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BED0u;
    // 0x34bed4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x34BED0u, 0x34BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BED8u;
label_34bed8:
    // 0x34bed8: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x34bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x34bedc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x34bedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x34bee0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34BEE0u;
    {
        const bool branch_taken_0x34bee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bee0) {
            ctx->pc = 0x34BEF8u;
            goto label_34bef8;
        }
    }
    ctx->pc = 0x34BEE8u;
    // 0x34bee8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x34beec: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x34BEECu;
    {
        const bool branch_taken_0x34beec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34beec) {
            ctx->pc = 0x34BF70u;
            goto label_34bf70;
        }
    }
    ctx->pc = 0x34BEF4u;
    // 0x34bef4: 0x0  nop
    ctx->pc = 0x34bef4u;
    // NOP
label_34bef8:
    // 0x34bef8: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x34bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x34befc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x34befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x34bf00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34bf04: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x34bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x34bf08: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x34bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x34bf0c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x34bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x34bf10: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x34bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x34bf14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34bf18: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x34BF18u;
    SET_GPR_U32(ctx, 31, 0x34BF20u);
    ctx->pc = 0x34BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF18u;
    // 0x34bf1c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x34BF18u, 0x34BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF20u;
label_34bf20:
    // 0x34bf20: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x34bf20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34bf24: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x34bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x34bf28: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x34bf28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x34bf2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34BF2Cu;
    {
        const bool branch_taken_0x34bf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF2Cu;
        // 0x34bf30: 0x8446000a  lh          $a2, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf2c) {
            ctx->pc = 0x34BF48u;
            goto label_34bf48;
        }
    }
    ctx->pc = 0x34BF34u;
    // 0x34bf34: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x34bf34u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34bf38: 0x0  nop
    ctx->pc = 0x34bf38u;
    // NOP
    // 0x34bf3c: 0x0  nop
    ctx->pc = 0x34bf3cu;
    // NOP
    // 0x34bf40: 0x1810  mfhi        $v1
    ctx->pc = 0x34bf40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34bf44: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x34bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_34bf48:
    // 0x34bf48: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x34bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x34bf4c: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x34bf4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x34bf50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BF50u;
    {
        const bool branch_taken_0x34bf50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bf50) {
            ctx->pc = 0x34BF70u;
            goto label_34bf70;
        }
    }
    ctx->pc = 0x34BF58u;
    // 0x34bf58: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x34bf58u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34bf5c: 0x0  nop
    ctx->pc = 0x34bf5cu;
    // NOP
    // 0x34bf60: 0x0  nop
    ctx->pc = 0x34bf60u;
    // NOP
    // 0x34bf64: 0x1810  mfhi        $v1
    ctx->pc = 0x34bf64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34bf68: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x34bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x34bf6c: 0x0  nop
    ctx->pc = 0x34bf6cu;
    // NOP
label_34bf70:
    // 0x34bf70: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x34bf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x34bf74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x34bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x34bf78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BF78u;
    {
        const bool branch_taken_0x34bf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF78u;
        // 0x34bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf78) {
            ctx->pc = 0x34BF88u;
            goto label_34bf88;
        }
    }
    ctx->pc = 0x34BF80u;
    // 0x34bf80: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x34BF80u;
    SET_GPR_U32(ctx, 31, 0x34BF88u);
    ctx->pc = 0x34BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF80u;
    // 0x34bf84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x34BF80u, 0x34BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF88u;
label_34bf88:
    // 0x34bf88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bf8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x34BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF90u;
        // 0x34bf94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BF98u;
}
