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

// Function: sub_00399290
// Address: 0x399290 - 0x3993ec
void sub_00399290_0x399290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399290_0x399290");
#endif

    switch (ctx->pc) {
        case 0x3992b8u: goto label_3992b8;
        case 0x3992d8u: goto label_3992d8;
        case 0x399388u: goto label_399388;
        case 0x3993a0u: goto label_3993a0;
        case 0x3993b8u: goto label_3993b8;
        default: break;
    }

    ctx->pc = 0x399290u;

    // 0x399290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x399290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x399294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x399294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x399298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x399298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39929c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3992a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3992a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3992a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3992a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3992ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3992acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3992b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3992b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3992b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3992b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3992b8:
    // 0x3992b8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x3992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3992bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3992bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3992c0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3992c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3992c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3992c8: 0x24730380  addiu       $s3, $v1, 0x380
    ctx->pc = 0x3992c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3992cc: 0x24451d04  addiu       $a1, $v0, 0x1D04
    ctx->pc = 0x3992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7428));
    // 0x3992d0: 0xc0f066c  jal         func_3C19B0
    ctx->pc = 0x3992D0u;
    SET_GPR_U32(ctx, 31, 0x3992D8u);
    ctx->pc = 0x3992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992D0u;
    // 0x3992d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C19B0u, 0x3992D0u, 0x3992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992D8u;
label_3992d8:
    // 0x3992d8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x3992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3992dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3992e0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x3992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3992e4: 0x90a41d04  lbu         $a0, 0x1D04($a1)
    ctx->pc = 0x3992e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7428)));
    // 0x3992e8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3992E8u;
    {
        const bool branch_taken_0x3992e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3992e8) {
            ctx->pc = 0x399310u;
            goto label_399310;
        }
    }
    ctx->pc = 0x3992F0u;
    // 0x3992f0: 0x86640084  lh          $a0, 0x84($s3)
    ctx->pc = 0x3992f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3992f4: 0x84a31d0a  lh          $v1, 0x1D0A($a1)
    ctx->pc = 0x3992f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7434)));
    // 0x3992f8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3992f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3992fc: 0x0  nop
    ctx->pc = 0x3992fcu;
    // NOP
    // 0x399300: 0x0  nop
    ctx->pc = 0x399300u;
    // NOP
    // 0x399304: 0x1810  mfhi        $v1
    ctx->pc = 0x399304u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x399308: 0xa4a31d0a  sh          $v1, 0x1D0A($a1)
    ctx->pc = 0x399308u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7434), (uint16_t)GPR_U32(ctx, 3));
    // 0x39930c: 0x0  nop
    ctx->pc = 0x39930cu;
    // NOP
label_399310:
    // 0x399310: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x399310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x399314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399318: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x399318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x39931c: 0x90a41d18  lbu         $a0, 0x1D18($a1)
    ctx->pc = 0x39931cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7448)));
    // 0x399320: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x399320u;
    {
        const bool branch_taken_0x399320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x399320) {
            ctx->pc = 0x399348u;
            goto label_399348;
        }
    }
    ctx->pc = 0x399328u;
    // 0x399328: 0x86640084  lh          $a0, 0x84($s3)
    ctx->pc = 0x399328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x39932c: 0x84a31d1e  lh          $v1, 0x1D1E($a1)
    ctx->pc = 0x39932cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7454)));
    // 0x399330: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x399330u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x399334: 0x0  nop
    ctx->pc = 0x399334u;
    // NOP
    // 0x399338: 0x0  nop
    ctx->pc = 0x399338u;
    // NOP
    // 0x39933c: 0x1810  mfhi        $v1
    ctx->pc = 0x39933cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x399340: 0xa4a31d1e  sh          $v1, 0x1D1E($a1)
    ctx->pc = 0x399340u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7454), (uint16_t)GPR_U32(ctx, 3));
    // 0x399344: 0x0  nop
    ctx->pc = 0x399344u;
    // NOP
label_399348:
    // 0x399348: 0x8f888c50  lw          $t0, -0x73B0($gp)
    ctx->pc = 0x399348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39934c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x399350: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x399350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x399354: 0x80851dac  lb          $a1, 0x1DAC($a0)
    ctx->pc = 0x399354u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7596)));
    // 0x399358: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x399358u;
    {
        const bool branch_taken_0x399358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x399358) {
            ctx->pc = 0x3993B8u;
            goto label_3993b8;
        }
    }
    ctx->pc = 0x399360u;
    // 0x399360: 0x8d041da8  lw          $a0, 0x1DA8($t0)
    ctx->pc = 0x399360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7592)));
    // 0x399364: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x399364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x399368: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x399368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39936c: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x39936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x399370: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x399370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x399374: 0x266700d0  addiu       $a3, $s3, 0xD0
    ctx->pc = 0x399374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x399378: 0x102a021  addu        $s4, $t0, $v0
    ctx->pc = 0x399378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x39937c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399380: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x399380u;
    SET_GPR_U32(ctx, 31, 0x399388u);
    ctx->pc = 0x399384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399380u;
    // 0x399384: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x399380u, 0x399388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399388u;
label_399388:
    // 0x399388: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39938c: 0xc66c00e0  lwc1        $f12, 0xE0($s3)
    ctx->pc = 0x39938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x399390: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x399390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399394: 0x8c441da8  lw          $a0, 0x1DA8($v0)
    ctx->pc = 0x399394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7592)));
    // 0x399398: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x399398u;
    SET_GPR_U32(ctx, 31, 0x3993A0u);
    ctx->pc = 0x39939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399398u;
    // 0x39939c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x399398u, 0x3993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3993A0u;
label_3993a0:
    // 0x3993a0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x3993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3993a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3993a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3993a8: 0x266600f0  addiu       $a2, $s3, 0xF0
    ctx->pc = 0x3993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x3993ac: 0x8c441da8  lw          $a0, 0x1DA8($v0)
    ctx->pc = 0x3993acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7592)));
    // 0x3993b0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3993B0u;
    SET_GPR_U32(ctx, 31, 0x3993B8u);
    ctx->pc = 0x3993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3993B0u;
    // 0x3993b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3993B0u, 0x3993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3993B8u;
label_3993b8:
    // 0x3993b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3993b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3993bc: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x3993bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3993c0: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x3993c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x3993c4: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x3993C4u;
    {
        const bool branch_taken_0x3993c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993C4u;
        // 0x3993c8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993c4) {
            ctx->pc = 0x3992B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3992b8;
        }
    }
    ctx->pc = 0x3993CCu;
    // 0x3993cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3993ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3993d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3993d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3993d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3993d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3993d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3993d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3993dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3993dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3993e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3993e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3993e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3993E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993E4u;
        // 0x3993e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3993ECu;
}
