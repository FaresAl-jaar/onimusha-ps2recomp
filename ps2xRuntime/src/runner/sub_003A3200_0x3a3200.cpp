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

// Function: sub_003A3200
// Address: 0x3a3200 - 0x3a335c
void sub_003A3200_0x3a3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3200_0x3a3200");
#endif

    switch (ctx->pc) {
        case 0x3a3228u: goto label_3a3228;
        case 0x3a3248u: goto label_3a3248;
        case 0x3a32f8u: goto label_3a32f8;
        case 0x3a3310u: goto label_3a3310;
        case 0x3a3328u: goto label_3a3328;
        default: break;
    }

    ctx->pc = 0x3a3200u;

    // 0x3a3200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a3204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a3208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a320c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a3210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a3214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a3218: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a321c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a3220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a3224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3228:
    // 0x3a3228: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a322c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3a322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3230: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a3238: 0x24730460  addiu       $s3, $v1, 0x460
    ctx->pc = 0x3a3238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x3a323c: 0x24451ee4  addiu       $a1, $v0, 0x1EE4
    ctx->pc = 0x3a323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    // 0x3a3240: 0xc0f066c  jal         func_3C19B0
    ctx->pc = 0x3A3240u;
    SET_GPR_U32(ctx, 31, 0x3A3248u);
    ctx->pc = 0x3A3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3240u;
    // 0x3a3244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C19B0u, 0x3A3240u, 0x3A3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3248u;
label_3a3248:
    // 0x3a3248: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x3a3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a324c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3250: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x3a3250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3a3254: 0x90a41ee4  lbu         $a0, 0x1EE4($a1)
    ctx->pc = 0x3a3254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7908)));
    // 0x3a3258: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3258u;
    {
        const bool branch_taken_0x3a3258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3258) {
            ctx->pc = 0x3A3280u;
            goto label_3a3280;
        }
    }
    ctx->pc = 0x3A3260u;
    // 0x3a3260: 0x86640084  lh          $a0, 0x84($s3)
    ctx->pc = 0x3a3260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3a3264: 0x84a31eea  lh          $v1, 0x1EEA($a1)
    ctx->pc = 0x3a3264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7914)));
    // 0x3a3268: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3a3268u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a326c: 0x0  nop
    ctx->pc = 0x3a326cu;
    // NOP
    // 0x3a3270: 0x0  nop
    ctx->pc = 0x3a3270u;
    // NOP
    // 0x3a3274: 0x1810  mfhi        $v1
    ctx->pc = 0x3a3274u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a3278: 0xa4a31eea  sh          $v1, 0x1EEA($a1)
    ctx->pc = 0x3a3278u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7914), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a327c: 0x0  nop
    ctx->pc = 0x3a327cu;
    // NOP
label_3a3280:
    // 0x3a3280: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x3a3280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3288: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x3a3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3a328c: 0x90a41ef8  lbu         $a0, 0x1EF8($a1)
    ctx->pc = 0x3a328cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7928)));
    // 0x3a3290: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3290u;
    {
        const bool branch_taken_0x3a3290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3290) {
            ctx->pc = 0x3A32B8u;
            goto label_3a32b8;
        }
    }
    ctx->pc = 0x3A3298u;
    // 0x3a3298: 0x86640084  lh          $a0, 0x84($s3)
    ctx->pc = 0x3a3298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3a329c: 0x84a31efe  lh          $v1, 0x1EFE($a1)
    ctx->pc = 0x3a329cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7934)));
    // 0x3a32a0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3a32a0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a32a4: 0x0  nop
    ctx->pc = 0x3a32a4u;
    // NOP
    // 0x3a32a8: 0x0  nop
    ctx->pc = 0x3a32a8u;
    // NOP
    // 0x3a32ac: 0x1810  mfhi        $v1
    ctx->pc = 0x3a32acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a32b0: 0xa4a31efe  sh          $v1, 0x1EFE($a1)
    ctx->pc = 0x3a32b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7934), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a32b4: 0x0  nop
    ctx->pc = 0x3a32b4u;
    // NOP
label_3a32b8:
    // 0x3a32b8: 0x8f888c60  lw          $t0, -0x73A0($gp)
    ctx->pc = 0x3a32b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a32bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a32c0: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x3a32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x3a32c4: 0x80851fb4  lb          $a1, 0x1FB4($a0)
    ctx->pc = 0x3a32c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x3a32c8: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A32C8u;
    {
        const bool branch_taken_0x3a32c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a32c8) {
            ctx->pc = 0x3A3328u;
            goto label_3a3328;
        }
    }
    ctx->pc = 0x3A32D0u;
    // 0x3a32d0: 0x8d041fb0  lw          $a0, 0x1FB0($t0)
    ctx->pc = 0x3a32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8112)));
    // 0x3a32d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a32d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3a32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a32dc: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x3a32dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3a32e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3a32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3a32e4: 0x266700d0  addiu       $a3, $s3, 0xD0
    ctx->pc = 0x3a32e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3a32e8: 0x102a021  addu        $s4, $t0, $v0
    ctx->pc = 0x3a32e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3a32ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a32ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a32f0: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3A32F0u;
    SET_GPR_U32(ctx, 31, 0x3A32F8u);
    ctx->pc = 0x3A32F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32F0u;
    // 0x3a32f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3A32F0u, 0x3A32F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32F8u;
label_3a32f8:
    // 0x3a32f8: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a32fc: 0xc66c00e0  lwc1        $f12, 0xE0($s3)
    ctx->pc = 0x3a32fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3a3300: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a3300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3304: 0x8c441fb0  lw          $a0, 0x1FB0($v0)
    ctx->pc = 0x3a3304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x3a3308: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A3308u;
    SET_GPR_U32(ctx, 31, 0x3A3310u);
    ctx->pc = 0x3A330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3308u;
    // 0x3a330c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A3308u, 0x3A3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3310u;
label_3a3310:
    // 0x3a3310: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3314: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a3314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3318: 0x266600f0  addiu       $a2, $s3, 0xF0
    ctx->pc = 0x3a3318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x3a331c: 0x8c441fb0  lw          $a0, 0x1FB0($v0)
    ctx->pc = 0x3a331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x3a3320: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A3320u;
    SET_GPR_U32(ctx, 31, 0x3A3328u);
    ctx->pc = 0x3A3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3320u;
    // 0x3a3324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A3320u, 0x3A3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3328u;
label_3a3328:
    // 0x3a3328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a3328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a332c: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x3a332cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a3330: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x3a3330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x3a3334: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x3A3334u;
    {
        const bool branch_taken_0x3a3334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3334u;
        // 0x3a3338: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3334) {
            ctx->pc = 0x3A3228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3228;
        }
    }
    ctx->pc = 0x3A333Cu;
    // 0x3a333c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a3340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a3340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a3344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a334c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a334cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3354: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3354u;
        // 0x3a3358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A335Cu;
}
