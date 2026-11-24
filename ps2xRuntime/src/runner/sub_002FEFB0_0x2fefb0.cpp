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

// Function: sub_002FEFB0
// Address: 0x2fefb0 - 0x2ff0a8
void sub_002FEFB0_0x2fefb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEFB0_0x2fefb0");
#endif

    switch (ctx->pc) {
        case 0x2fefe0u: goto label_2fefe0;
        case 0x2fefe8u: goto label_2fefe8;
        case 0x2ff030u: goto label_2ff030;
        case 0x2ff098u: goto label_2ff098;
        default: break;
    }

    ctx->pc = 0x2fefb0u;

    // 0x2fefb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fefb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fefb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fefb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fefb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fefb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fefbc: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2fefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2fefc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fefc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fefc4: 0x908300bc  lbu         $v1, 0xBC($a0)
    ctx->pc = 0x2fefc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2fefc8: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2fefc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2fefcc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2fefccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2fefd0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2fefd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2fefd4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2fefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2fefd8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2FEFD8u;
    SET_GPR_U32(ctx, 31, 0x2FEFE0u);
    ctx->pc = 0x2FEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFD8u;
    // 0x2fefdc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FEFD8u, 0x2FEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFE0u;
label_2fefe0:
    // 0x2fefe0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2FEFE0u;
    SET_GPR_U32(ctx, 31, 0x2FEFE8u);
    ctx->pc = 0x2FEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFE0u;
    // 0x2fefe4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2FEFE0u, 0x2FEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFE8u;
label_2fefe8:
    // 0x2fefe8: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2fefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2fefec: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fefecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2feff0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEFF0u;
    {
        const bool branch_taken_0x2feff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feff0) {
            ctx->pc = 0x2FF008u;
            goto label_2ff008;
        }
    }
    ctx->pc = 0x2FEFF8u;
    // 0x2feff8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2feff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2feffc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FEFFCu;
    {
        const bool branch_taken_0x2feffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feffc) {
            ctx->pc = 0x2FF080u;
            goto label_2ff080;
        }
    }
    ctx->pc = 0x2FF004u;
    // 0x2ff004: 0x0  nop
    ctx->pc = 0x2ff004u;
    // NOP
label_2ff008:
    // 0x2ff008: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2ff008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ff00c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2ff00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2ff010: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff014: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2ff014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2ff018: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ff01c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2ff01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2ff020: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2ff020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2ff024: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ff024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff028: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2FF028u;
    SET_GPR_U32(ctx, 31, 0x2FF030u);
    ctx->pc = 0x2FF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF028u;
    // 0x2ff02c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2FF028u, 0x2FF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF030u;
label_2ff030:
    // 0x2ff030: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x2ff030u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ff034: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x2ff034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ff038: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x2ff038u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ff03c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF03Cu;
    {
        const bool branch_taken_0x2ff03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF03Cu;
        // 0x2ff040: 0x8446000a  lh          $a2, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff03c) {
            ctx->pc = 0x2FF058u;
            goto label_2ff058;
        }
    }
    ctx->pc = 0x2FF044u;
    // 0x2ff044: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x2ff044u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ff048: 0x0  nop
    ctx->pc = 0x2ff048u;
    // NOP
    // 0x2ff04c: 0x0  nop
    ctx->pc = 0x2ff04cu;
    // NOP
    // 0x2ff050: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff050u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff054: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x2ff054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_2ff058:
    // 0x2ff058: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2ff058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2ff05c: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2ff05cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ff060: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF060u;
    {
        const bool branch_taken_0x2ff060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff060) {
            ctx->pc = 0x2FF080u;
            goto label_2ff080;
        }
    }
    ctx->pc = 0x2FF068u;
    // 0x2ff068: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x2ff068u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ff06c: 0x0  nop
    ctx->pc = 0x2ff06cu;
    // NOP
    // 0x2ff070: 0x0  nop
    ctx->pc = 0x2ff070u;
    // NOP
    // 0x2ff074: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff074u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff078: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x2ff078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x2ff07c: 0x0  nop
    ctx->pc = 0x2ff07cu;
    // NOP
label_2ff080:
    // 0x2ff080: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2ff080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ff084: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ff084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ff088: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF088u;
    {
        const bool branch_taken_0x2ff088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF088u;
        // 0x2ff08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff088) {
            ctx->pc = 0x2FF098u;
            goto label_2ff098;
        }
    }
    ctx->pc = 0x2FF090u;
    // 0x2ff090: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2FF090u;
    SET_GPR_U32(ctx, 31, 0x2FF098u);
    ctx->pc = 0x2FF094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF090u;
    // 0x2ff094: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2FF090u, 0x2FF098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF098u;
label_2ff098:
    // 0x2ff098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0A0u;
        // 0x2ff0a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF0A8u;
}
