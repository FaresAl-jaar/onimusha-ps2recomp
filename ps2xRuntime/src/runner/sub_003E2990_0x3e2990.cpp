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

// Function: sub_003E2990
// Address: 0x3e2990 - 0x3e2ae0
void sub_003E2990_0x3e2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2990_0x3e2990");
#endif

    switch (ctx->pc) {
        case 0x3e29c0u: goto label_3e29c0;
        case 0x3e29e0u: goto label_3e29e0;
        case 0x3e2a70u: goto label_3e2a70;
        case 0x3e2a8cu: goto label_3e2a8c;
        case 0x3e2aa8u: goto label_3e2aa8;
        default: break;
    }

    ctx->pc = 0x3e2990u;

    // 0x3e2990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e2994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e2994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e2998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e299c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e29a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e29a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e29a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e29ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e29acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e29b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e29b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e29b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29bc: 0x0  nop
    ctx->pc = 0x3e29bcu;
    // NOP
label_3e29c0:
    // 0x3e29c0: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e29c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e29c8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3e29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e29cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e29d0: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x3e29d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3e29d4: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x3e29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x3e29d8: 0xc0f066c  jal         func_3C19B0
    ctx->pc = 0x3E29D8u;
    SET_GPR_U32(ctx, 31, 0x3E29E0u);
    ctx->pc = 0x3E29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E29D8u;
    // 0x3e29dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C19B0u, 0x3E29D8u, 0x3E29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E29E0u;
label_3e29e0:
    // 0x3e29e0: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e29e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e29e8: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3e29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e29ec: 0x90830210  lbu         $v1, 0x210($a0)
    ctx->pc = 0x3e29ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x3e29f0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E29F0u;
    {
        const bool branch_taken_0x3e29f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e29f0) {
            ctx->pc = 0x3E2A18u;
            goto label_3e2a18;
        }
    }
    ctx->pc = 0x3E29F8u;
    // 0x3e29f8: 0x86830084  lh          $v1, 0x84($s4)
    ctx->pc = 0x3e29f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3e29fc: 0x84820216  lh          $v0, 0x216($a0)
    ctx->pc = 0x3e29fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x3e2a00: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3e2a00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e2a04: 0x0  nop
    ctx->pc = 0x3e2a04u;
    // NOP
    // 0x3e2a08: 0x0  nop
    ctx->pc = 0x3e2a08u;
    // NOP
    // 0x3e2a0c: 0x1010  mfhi        $v0
    ctx->pc = 0x3e2a0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3e2a10: 0xa4820216  sh          $v0, 0x216($a0)
    ctx->pc = 0x3e2a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e2a14: 0x0  nop
    ctx->pc = 0x3e2a14u;
    // NOP
label_3e2a18:
    // 0x3e2a18: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2a1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e2a20: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3e2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e2a24: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x3e2a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x3e2a28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E2A28u;
    {
        const bool branch_taken_0x3e2a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e2a28) {
            ctx->pc = 0x3E2A50u;
            goto label_3e2a50;
        }
    }
    ctx->pc = 0x3E2A30u;
    // 0x3e2a30: 0x86830084  lh          $v1, 0x84($s4)
    ctx->pc = 0x3e2a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3e2a34: 0x8482022a  lh          $v0, 0x22A($a0)
    ctx->pc = 0x3e2a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 554)));
    // 0x3e2a38: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3e2a38u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e2a3c: 0x0  nop
    ctx->pc = 0x3e2a3cu;
    // NOP
    // 0x3e2a40: 0x0  nop
    ctx->pc = 0x3e2a40u;
    // NOP
    // 0x3e2a44: 0x1010  mfhi        $v0
    ctx->pc = 0x3e2a44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3e2a48: 0xa482022a  sh          $v0, 0x22A($a0)
    ctx->pc = 0x3e2a48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e2a4c: 0x0  nop
    ctx->pc = 0x3e2a4cu;
    // NOP
label_3e2a50:
    // 0x3e2a50: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2a54: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x3e2a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x3e2a58: 0x268700d0  addiu       $a3, $s4, 0xD0
    ctx->pc = 0x3e2a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x3e2a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e2a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a60: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3e2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3e2a64: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3e2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3e2a68: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3E2A68u;
    SET_GPR_U32(ctx, 31, 0x3E2A70u);
    ctx->pc = 0x3E2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A68u;
    // 0x3e2a6c: 0x24450270  addiu       $a1, $v0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3E2A68u, 0x3E2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A70u;
label_3e2a70:
    // 0x3e2a70: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2a74: 0xc68c00e0  lwc1        $f12, 0xE0($s4)
    ctx->pc = 0x3e2a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e2a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e2a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a7c: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3e2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3e2a80: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3e2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3e2a84: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E2A84u;
    SET_GPR_U32(ctx, 31, 0x3E2A8Cu);
    ctx->pc = 0x3E2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A84u;
    // 0x3e2a88: 0x24450270  addiu       $a1, $v0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E2A84u, 0x3E2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A8Cu;
label_3e2a8c:
    // 0x3e2a8c: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2a90: 0x268600f0  addiu       $a2, $s4, 0xF0
    ctx->pc = 0x3e2a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x3e2a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e2a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a98: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3e2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3e2a9c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3e2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3e2aa0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3E2AA0u;
    SET_GPR_U32(ctx, 31, 0x3E2AA8u);
    ctx->pc = 0x3E2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AA0u;
    // 0x3e2aa4: 0x24450270  addiu       $a1, $v0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3E2AA0u, 0x3E2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2AA8u;
label_3e2aa8:
    // 0x3e2aa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e2aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3e2aac: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x3e2aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3e2ab0: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x3e2ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2ab4: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x3e2ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3e2ab8: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3E2AB8u;
    {
        const bool branch_taken_0x3e2ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AB8u;
        // 0x3e2abc: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ab8) {
            ctx->pc = 0x3E29C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e29c0;
        }
    }
    ctx->pc = 0x3E2AC0u;
    // 0x3e2ac0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e2ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e2ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e2ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e2ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e2accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e2ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e2ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AD8u;
        // 0x3e2adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2AE0u;
}
