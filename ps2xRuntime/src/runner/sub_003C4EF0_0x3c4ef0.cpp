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

// Function: sub_003C4EF0
// Address: 0x3c4ef0 - 0x3c5040
void sub_003C4EF0_0x3c4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4EF0_0x3c4ef0");
#endif

    switch (ctx->pc) {
        case 0x3c4f20u: goto label_3c4f20;
        case 0x3c4f40u: goto label_3c4f40;
        case 0x3c4fd0u: goto label_3c4fd0;
        case 0x3c4fecu: goto label_3c4fec;
        case 0x3c5008u: goto label_3c5008;
        default: break;
    }

    ctx->pc = 0x3c4ef0u;

    // 0x3c4ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c4ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c4ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3c4ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3c4efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c4f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c4f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c4f04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c4f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c4f0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c4f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c4f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c4f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c4f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f1c: 0x0  nop
    ctx->pc = 0x3c4f1cu;
    // NOP
label_3c4f20:
    // 0x3c4f20: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4f24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c4f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c4f28: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3c4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c4f2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c4f30: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x3c4f30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c4f34: 0x24450510  addiu       $a1, $v0, 0x510
    ctx->pc = 0x3c4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x3c4f38: 0xc0f066c  jal         func_3C19B0
    ctx->pc = 0x3C4F38u;
    SET_GPR_U32(ctx, 31, 0x3C4F40u);
    ctx->pc = 0x3C4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4F38u;
    // 0x3c4f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C19B0u, 0x3C4F38u, 0x3C4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4F40u;
label_3c4f40:
    // 0x3c4f40: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c4f48: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3c4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3c4f4c: 0x90830510  lbu         $v1, 0x510($a0)
    ctx->pc = 0x3c4f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x3c4f50: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C4F50u;
    {
        const bool branch_taken_0x3c4f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c4f50) {
            ctx->pc = 0x3C4F78u;
            goto label_3c4f78;
        }
    }
    ctx->pc = 0x3C4F58u;
    // 0x3c4f58: 0x86830084  lh          $v1, 0x84($s4)
    ctx->pc = 0x3c4f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3c4f5c: 0x84820516  lh          $v0, 0x516($a0)
    ctx->pc = 0x3c4f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1302)));
    // 0x3c4f60: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3c4f60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c4f64: 0x0  nop
    ctx->pc = 0x3c4f64u;
    // NOP
    // 0x3c4f68: 0x0  nop
    ctx->pc = 0x3c4f68u;
    // NOP
    // 0x3c4f6c: 0x1010  mfhi        $v0
    ctx->pc = 0x3c4f6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c4f70: 0xa4820516  sh          $v0, 0x516($a0)
    ctx->pc = 0x3c4f70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1302), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c4f74: 0x0  nop
    ctx->pc = 0x3c4f74u;
    // NOP
label_3c4f78:
    // 0x3c4f78: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4f7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c4f80: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3c4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3c4f84: 0x90830524  lbu         $v1, 0x524($a0)
    ctx->pc = 0x3c4f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1316)));
    // 0x3c4f88: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C4F88u;
    {
        const bool branch_taken_0x3c4f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c4f88) {
            ctx->pc = 0x3C4FB0u;
            goto label_3c4fb0;
        }
    }
    ctx->pc = 0x3C4F90u;
    // 0x3c4f90: 0x86830084  lh          $v1, 0x84($s4)
    ctx->pc = 0x3c4f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3c4f94: 0x8482052a  lh          $v0, 0x52A($a0)
    ctx->pc = 0x3c4f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1322)));
    // 0x3c4f98: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3c4f98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c4f9c: 0x0  nop
    ctx->pc = 0x3c4f9cu;
    // NOP
    // 0x3c4fa0: 0x0  nop
    ctx->pc = 0x3c4fa0u;
    // NOP
    // 0x3c4fa4: 0x1010  mfhi        $v0
    ctx->pc = 0x3c4fa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c4fa8: 0xa482052a  sh          $v0, 0x52A($a0)
    ctx->pc = 0x3c4fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1322), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c4fac: 0x0  nop
    ctx->pc = 0x3c4facu;
    // NOP
label_3c4fb0:
    // 0x3c4fb0: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4fb4: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x3c4fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x3c4fb8: 0x268700d0  addiu       $a3, $s4, 0xD0
    ctx->pc = 0x3c4fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x3c4fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4fc0: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3c4fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x3c4fc4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3c4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c4fc8: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3C4FC8u;
    SET_GPR_U32(ctx, 31, 0x3C4FD0u);
    ctx->pc = 0x3C4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FC8u;
    // 0x3c4fcc: 0x244505e0  addiu       $a1, $v0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3C4FC8u, 0x3C4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4FD0u;
label_3c4fd0:
    // 0x3c4fd0: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4fd4: 0xc68c00e0  lwc1        $f12, 0xE0($s4)
    ctx->pc = 0x3c4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c4fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4fdc: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3c4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x3c4fe0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3c4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c4fe4: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3C4FE4u;
    SET_GPR_U32(ctx, 31, 0x3C4FECu);
    ctx->pc = 0x3C4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FE4u;
    // 0x3c4fe8: 0x244505e0  addiu       $a1, $v0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3C4FE4u, 0x3C4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4FECu;
label_3c4fec:
    // 0x3c4fec: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c4ff0: 0x268600f0  addiu       $a2, $s4, 0xF0
    ctx->pc = 0x3c4ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x3c4ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ff8: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3c4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x3c4ffc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3c4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c5000: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3C5000u;
    SET_GPR_U32(ctx, 31, 0x3C5008u);
    ctx->pc = 0x3C5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5000u;
    // 0x3c5004: 0x244505e0  addiu       $a1, $v0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3C5000u, 0x3C5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5008u;
label_3c5008:
    // 0x3c5008: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c5008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3c500c: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x3c500cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3c5010: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x3c5010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3c5014: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x3c5014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3c5018: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3C5018u;
    {
        const bool branch_taken_0x3c5018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5018u;
        // 0x3c501c: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5018) {
            ctx->pc = 0x3C4F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4f20;
        }
    }
    ctx->pc = 0x3C5020u;
    // 0x3c5020: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c5020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c5024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c5024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c5028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c502c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c502cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5038: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5038u;
        // 0x3c503c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5040u;
}
