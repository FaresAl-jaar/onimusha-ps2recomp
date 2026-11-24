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

// Function: sub_002B3170
// Address: 0x2b3170 - 0x2b3be4
void sub_002B3170_0x2b3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3170_0x2b3170");
#endif

    switch (ctx->pc) {
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b3730u: goto label_2b3730;
        case 0x2b3bbcu: goto label_2b3bbc;
        default: break;
    }

    ctx->pc = 0x2b3170u;

    // 0x2b3170: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x2b3170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x2b3174: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2b3174u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3178: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b3178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b317c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b3180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b3184: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2b3184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b3188: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b318c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b3190: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b3190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b3194: 0x25e5000e  addiu       $a1, $t7, 0xE
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 14));
    // 0x2b3198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b319c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b31a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b31a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b31a8: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x2b31a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2b31ac: 0xc0ac33c  jal         func_2B0CF0
    ctx->pc = 0x2B31ACu;
    SET_GPR_U32(ctx, 31, 0x2B31B4u);
    ctx->pc = 0x2B31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31ACu;
    // 0x2b31b0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0CF0u, 0x2B31ACu, 0x2B31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31B4u;
label_2b31b4:
    // 0x2b31b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b31b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b31bc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2b31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2b31c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b31c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b31c4: 0x0  nop
    ctx->pc = 0x2b31c4u;
    // NOP
label_2b31c8:
    // 0x2b31c8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2b31c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b31cc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2b31ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2b31d0: 0x2ca60100  sltiu       $a2, $a1, 0x100
    ctx->pc = 0x2b31d0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b31d4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b31d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b31d8: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2b31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2b31dc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2b31dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b31e0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b31e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b31e4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x2b31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x2b31e8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2b31e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b31ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b31ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b31f0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2b31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2b31f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2b31f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b31f8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b31f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b31fc: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2b31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2b3200: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2b3200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3204: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b3204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b3208: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2b3208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2b320c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x2b320cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b3210: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b3210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b3214: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2b3214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2b3218: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b321c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b321cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b3220: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2b3220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2b3224: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x2b3224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b3228: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b3228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b322c: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x2b322cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x2b3230: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2B3230u;
    {
        const bool branch_taken_0x2b3230 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3230u;
        // 0x2b3234: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3230) {
            ctx->pc = 0x2B31C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b31c8;
        }
    }
    ctx->pc = 0x2B3238u;
    // 0x2b3238: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b3238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b323c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2b323cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2b3240: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2b3244: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2b3244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2b3248: 0x34631d2c  ori         $v1, $v1, 0x1D2C
    ctx->pc = 0x2b3248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7468);
    // 0x2b324c: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x2b324cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2b3250: 0x5683c  dsll32      $t5, $a1, 0
    ctx->pc = 0x2b3250u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b3254: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x2b3254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b3258: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x2b3258u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b325c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b3260: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2b3260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b3264: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x2b3264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2b3268: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2b3268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b326c: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x2b326cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2b3270: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2b3270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2b3274: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2b3274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2b3278: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2b3278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2b327c: 0x834025  or          $t0, $a0, $v1
    ctx->pc = 0x2b327cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3280: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2b3280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2b3284: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b3284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3288: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2b3288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2b328c: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x2b328cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3290: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2b3290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2b3294: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x2b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2b3298: 0xaf868b28  sw          $a2, -0x74D8($gp)
    ctx->pc = 0x2b3298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 6));
    // 0x2b329c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b32a0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2b32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2b32a4: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2b32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2b32a8: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x2b32a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x2b32ac: 0xaf928b2c  sw          $s2, -0x74D4($gp)
    ctx->pc = 0x2b32acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 18));
    // 0x2b32b0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b32b4: 0xfccd0000  sd          $t5, 0x0($a2)
    ctx->pc = 0x2b32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 13));
    // 0x2b32b8: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x2b32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x2b32bc: 0xaf868b30  sw          $a2, -0x74D0($gp)
    ctx->pc = 0x2b32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 6));
    // 0x2b32c0: 0xfccb0010  sd          $t3, 0x10($a2)
    ctx->pc = 0x2b32c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
    // 0x2b32c4: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2b32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
    // 0x2b32c8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b32c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b32cc: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x2b32ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x2b32d0: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x2b32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x2b32d4: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2b32d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2b32d8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x2b32d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x2b32dc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b32e0: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x2b32e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x2b32e4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2b32e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2b32e8: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x2b32e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x2b32ec: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2b32ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b32f0: 0x74702  srl         $t0, $a3, 28
    ctx->pc = 0x2b32f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
    // 0x2b32f4: 0x73e82  srl         $a3, $a3, 26
    ctx->pc = 0x2b32f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 26));
    // 0x2b32f8: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x2b32f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2b32fc: 0x10e40012  beq         $a3, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B32FCu;
    {
        const bool branch_taken_0x2b32fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32FCu;
        // 0x2b3300: 0x3108000f  andi        $t0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32fc) {
            ctx->pc = 0x2B3348u;
            goto label_2b3348;
        }
    }
    ctx->pc = 0x2B3304u;
    // 0x2b3304: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3308: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3308u;
    {
        const bool branch_taken_0x2b3308 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b3308) {
            ctx->pc = 0x2B3320u;
            goto label_2b3320;
        }
    }
    ctx->pc = 0x2B3310u;
    // 0x2b3310: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3310u;
    {
        const bool branch_taken_0x2b3310 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3310) {
            ctx->pc = 0x2B3320u;
            goto label_2b3320;
        }
    }
    ctx->pc = 0x2B3318u;
    // 0x2b3318: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B3318u;
    {
        const bool branch_taken_0x2b3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3318) {
            ctx->pc = 0x2B3380u;
            goto label_2b3380;
        }
    }
    ctx->pc = 0x2B3320u;
label_2b3320:
    // 0x2b3320: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2b3320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3324: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x2b3324u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b3328: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3328u;
    {
        const bool branch_taken_0x2b3328 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x2B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3328u;
        // 0x2b332c: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3328) {
            ctx->pc = 0x2B3338u;
            goto label_2b3338;
        }
    }
    ctx->pc = 0x2B3330u;
    // 0x2b3330: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x2b3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2b3334: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2b3334u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_2b3338:
    // 0x2b3338: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b3338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b333c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B333Cu;
    {
        const bool branch_taken_0x2b333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B333Cu;
        // 0x2b3340: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b333c) {
            ctx->pc = 0x2B3380u;
            goto label_2b3380;
        }
    }
    ctx->pc = 0x2B3344u;
    // 0x2b3344: 0x0  nop
    ctx->pc = 0x2b3344u;
    // NOP
label_2b3348:
    // 0x2b3348: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2b3348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b334c: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x2b334cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b3350: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3350u;
    {
        const bool branch_taken_0x2b3350 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x2B3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3350u;
        // 0x2b3354: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3350) {
            ctx->pc = 0x2B3360u;
            goto label_2b3360;
        }
    }
    ctx->pc = 0x2B3358u;
    // 0x2b3358: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x2b3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2b335c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2b335cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_2b3360:
    // 0x2b3360: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b3364: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b3364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b3368: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x2b3368u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b336c: 0x0  nop
    ctx->pc = 0x2b336cu;
    // NOP
    // 0x2b3370: 0x0  nop
    ctx->pc = 0x2b3370u;
    // NOP
    // 0x2b3374: 0x2012  mflo        $a0
    ctx->pc = 0x2b3374u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2b3378: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x2b3378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2b337c: 0x0  nop
    ctx->pc = 0x2b337cu;
    // NOP
label_2b3380:
    // 0x2b3380: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x2b3380u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2b3384: 0x3c031800  lui         $v1, 0x1800
    ctx->pc = 0x2b3384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6144 << 16));
    // 0x2b3388: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2b3388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b338c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2b338cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b3390: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2b3390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b3394: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x2b3394u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x2b3398: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2b3398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b339c: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x2b339cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x2b33a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b33a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33a4: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x2b33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x2b33a8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b33ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b33acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b33b0:
    // 0x2b33b0: 0x1071826  xor         $v1, $t0, $a3
    ctx->pc = 0x2b33b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x2b33b4: 0x306b0002  andi        $t3, $v1, 0x2
    ctx->pc = 0x2b33b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b33b8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b33bc: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x2b33bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2b33c0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b33c4: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x2b33c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x2b33c8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2b33c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2b33cc: 0x306b0002  andi        $t3, $v1, 0x2
    ctx->pc = 0x2b33ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b33d0: 0x10a5026  xor         $t2, $t0, $t2
    ctx->pc = 0x2b33d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
    // 0x2b33d4: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2b33d8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2b33dc: 0x1631825  or          $v1, $t3, $v1
    ctx->pc = 0x2b33dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x2b33e0: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x2b33e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b33e4: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2b33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2b33e8: 0x794d0000  lq          $t5, 0x0($t2)
    ctx->pc = 0x2b33e8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b33ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b33f0: 0x250b0002  addiu       $t3, $t0, 0x2
    ctx->pc = 0x2b33f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2b33f4: 0x1236021  addu        $t4, $t1, $v1
    ctx->pc = 0x2b33f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b33f8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b33fc: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x2b33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x2b3400: 0x1631826  xor         $v1, $t3, $v1
    ctx->pc = 0x2b3400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
    // 0x2b3404: 0x30710002  andi        $s1, $v1, 0x2
    ctx->pc = 0x2b3404u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b3408: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2b3408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b340c: 0x250a0003  addiu       $t2, $t0, 0x3
    ctx->pc = 0x2b340cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x2b3410: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x2b3410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x2b3414: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x2b3414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2b3418: 0x1642026  xor         $a0, $t3, $a0
    ctx->pc = 0x2b3418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x2b341c: 0x7ccd0000  sq          $t5, 0x0($a2)
    ctx->pc = 0x2b341cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 13));
    // 0x2b3420: 0x798b0000  lq          $t3, 0x0($t4)
    ctx->pc = 0x2b3420u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b3424: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x2b3424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x2b3428: 0x306d0002  andi        $t5, $v1, 0x2
    ctx->pc = 0x2b3428u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b342c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b342cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b3430: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x2b3430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2b3434: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x2b3434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x2b3438: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x2b3438u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x2b343c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2b343cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2b3440: 0x1246021  addu        $t4, $t1, $a0
    ctx->pc = 0x2b3440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b3444: 0x7ccb0010  sq          $t3, 0x10($a2)
    ctx->pc = 0x2b3444u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 11));
    // 0x2b3448: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x2b3448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b344c: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x2b344cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b3450: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b3450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b3454: 0x798c0000  lq          $t4, 0x0($t4)
    ctx->pc = 0x2b3454u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b3458: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2b3458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2b345c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b345cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3460: 0x306a0002  andi        $t2, $v1, 0x2
    ctx->pc = 0x2b3460u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b3464: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2b3464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2b3468: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x2b3468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x2b346c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2b346cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2b3470: 0x250a0005  addiu       $t2, $t0, 0x5
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2b3474: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x2b3474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2b3478: 0x7ccc0000  sq          $t4, 0x0($a2)
    ctx->pc = 0x2b3478u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 12));
    // 0x2b347c: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x2b347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x2b3480: 0x79710000  lq          $s1, 0x0($t3)
    ctx->pc = 0x2b3480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b3484: 0x306d0002  andi        $t5, $v1, 0x2
    ctx->pc = 0x2b3484u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b3488: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b3488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b348c: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x2b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2b3490: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2b3490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b3494: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x2b3494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x2b3498: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x2b3498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x2b349c: 0x250d0006  addiu       $t5, $t0, 0x6
    ctx->pc = 0x2b349cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2b34a0: 0xd5042  srl         $t2, $t5, 1
    ctx->pc = 0x2b34a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x2b34a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b34a8: 0x1aa5026  xor         $t2, $t5, $t2
    ctx->pc = 0x2b34a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 10));
    // 0x2b34ac: 0x7cd10010  sq          $s1, 0x10($a2)
    ctx->pc = 0x2b34acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 17));
    // 0x2b34b0: 0x31520002  andi        $s2, $t2, 0x2
    ctx->pc = 0x2b34b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2);
    // 0x2b34b4: 0x250b0007  addiu       $t3, $t0, 0x7
    ctx->pc = 0x2b34b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2b34b8: 0x126040  sll         $t4, $s2, 1
    ctx->pc = 0x2b34b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2b34bc: 0xb5042  srl         $t2, $t3, 1
    ctx->pc = 0x2b34bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x2b34c0: 0x24c6025  or          $t4, $s2, $t4
    ctx->pc = 0x2b34c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
    // 0x2b34c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b34c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b34c8: 0x1ac6026  xor         $t4, $t5, $t4
    ctx->pc = 0x2b34c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
    // 0x2b34cc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2b34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b34d0: 0x788d0000  lq          $t5, 0x0($a0)
    ctx->pc = 0x2b34d0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b34d4: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2b34d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2b34d8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2b34dc: 0x16a2026  xor         $a0, $t3, $t2
    ctx->pc = 0x2b34dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x2b34e0: 0x7ccd0000  sq          $t5, 0x0($a2)
    ctx->pc = 0x2b34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 13));
    // 0x2b34e4: 0x12c5021  addu        $t2, $t1, $t4
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2b34e8: 0x308c0002  andi        $t4, $a0, 0x2
    ctx->pc = 0x2b34e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2b34ec: 0xc2040  sll         $a0, $t4, 1
    ctx->pc = 0x2b34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2b34f0: 0x1842025  or          $a0, $t4, $a0
    ctx->pc = 0x2b34f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x2b34f4: 0x1642026  xor         $a0, $t3, $a0
    ctx->pc = 0x2b34f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x2b34f8: 0x786b0000  lq          $t3, 0x0($v1)
    ctx->pc = 0x2b34f8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b34fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b3500: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2b3500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b3504: 0x7ccb0010  sq          $t3, 0x10($a2)
    ctx->pc = 0x2b3504u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 11));
    // 0x2b3508: 0x2d030040  sltiu       $v1, $t0, 0x40
    ctx->pc = 0x2b3508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x2b350c: 0x794a0000  lq          $t2, 0x0($t2)
    ctx->pc = 0x2b350cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b3510: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3514: 0x7cca0000  sq          $t2, 0x0($a2)
    ctx->pc = 0x2b3514u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 10));
    // 0x2b3518: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2b3518u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b351c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x2b351cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x2b3520: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2B3520u;
    {
        const bool branch_taken_0x2b3520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3520u;
        // 0x2b3524: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3520) {
            ctx->pc = 0x2B33B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B3528u;
    // 0x2b3528: 0x8f888b30  lw          $t0, -0x74D0($gp)
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x2b352c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3530: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2b3530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2b3534: 0x43f02  srl         $a3, $a0, 28
    ctx->pc = 0x2b3534u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x2b3538: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x2b3538u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x2b353c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2b353cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2b3540: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3540u;
    {
        const bool branch_taken_0x2b3540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3540u;
        // 0x2b3544: 0x30e7000f  andi        $a3, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3540) {
            ctx->pc = 0x2B3588u;
            goto label_2b3588;
        }
    }
    ctx->pc = 0x2B3548u;
    // 0x2b3548: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b3548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b354c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B354Cu;
    {
        const bool branch_taken_0x2b354c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b354c) {
            ctx->pc = 0x2B3568u;
            goto label_2b3568;
        }
    }
    ctx->pc = 0x2B3554u;
    // 0x2b3554: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3554u;
    {
        const bool branch_taken_0x2b3554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3554) {
            ctx->pc = 0x2B3568u;
            goto label_2b3568;
        }
    }
    ctx->pc = 0x2B355Cu;
    // 0x2b355c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B355Cu;
    {
        const bool branch_taken_0x2b355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b355c) {
            ctx->pc = 0x2B35B8u;
            goto label_2b35b8;
        }
    }
    ctx->pc = 0x2B3564u;
    // 0x2b3564: 0x0  nop
    ctx->pc = 0x2b3564u;
    // NOP
label_2b3568:
    // 0x2b3568: 0xc82023  subu        $a0, $a2, $t0
    ctx->pc = 0x2b3568u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b356c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B356Cu;
    {
        const bool branch_taken_0x2b356c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2B3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B356Cu;
        // 0x2b3570: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b356c) {
            ctx->pc = 0x2B357Cu;
            goto label_2b357c;
        }
    }
    ctx->pc = 0x2B3574u;
    // 0x2b3574: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2b3574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2b3578: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b3578u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2b357c:
    // 0x2b357c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b3580: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3580u;
    {
        const bool branch_taken_0x2b3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3580u;
        // 0x2b3584: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3580) {
            ctx->pc = 0x2B35B8u;
            goto label_2b35b8;
        }
    }
    ctx->pc = 0x2B3588u;
label_2b3588:
    // 0x2b3588: 0xc82023  subu        $a0, $a2, $t0
    ctx->pc = 0x2b3588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b358c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B358Cu;
    {
        const bool branch_taken_0x2b358c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B358Cu;
        // 0x2b3590: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b358c) {
            ctx->pc = 0x2B359Cu;
            goto label_2b359c;
        }
    }
    ctx->pc = 0x2B3594u;
    // 0x2b3594: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2b3594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2b3598: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b3598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2b359c:
    // 0x2b359c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b35a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b35a4: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2b35a4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b35a8: 0x0  nop
    ctx->pc = 0x2b35a8u;
    // NOP
    // 0x2b35ac: 0x0  nop
    ctx->pc = 0x2b35acu;
    // NOP
    // 0x2b35b0: 0x1812  mflo        $v1
    ctx->pc = 0x2b35b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2b35b4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x2b35b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2b35b8:
    // 0x2b35b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b35bc: 0xa5100000  sh          $s0, 0x0($t0)
    ctx->pc = 0x2b35bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2b35c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b35c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b35c4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2b35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2b35c8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2b35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b35cc: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x2b35ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x2b35d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b35d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b35d4: 0xaf868b30  sw          $a2, -0x74D0($gp)
    ctx->pc = 0x2b35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 6));
    // 0x2b35d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b35dc: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x2b35dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b35e0: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x2b35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x2b35e4: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x2b35e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x2b35e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2b35e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b35ec: 0x9df10008  lwu         $s1, 0x8($t7)
    ctx->pc = 0x2b35ecu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x2b35f0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2b35f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b35f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b35f8: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2b35f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x2b35fc: 0x688025  or          $s0, $v1, $t0
    ctx->pc = 0x2b35fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2b3600: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b3600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3604: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2b3604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b3608: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2b3608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2b360c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x2b360cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3610: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3614: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2b3614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2b3618: 0x240d004d  addiu       $t5, $zero, 0x4D
    ctx->pc = 0x2b3618u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2b361c: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2b361cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b3620: 0x344b000d  ori         $t3, $v0, 0xD
    ctx->pc = 0x2b3620u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2b3624: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2b3624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2b3628: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x2b3628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x2b362c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2b362cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2b3630: 0x3442a586  ori         $v0, $v0, 0xA586
    ctx->pc = 0x2b3630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42374);
    // 0x2b3634: 0xfccd0008  sd          $t5, 0x8($a2)
    ctx->pc = 0x2b3634u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 13));
    // 0x2b3638: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b3638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b363c: 0x240c004f  addiu       $t4, $zero, 0x4F
    ctx->pc = 0x2b363cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b3640: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2b3640u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2b3644: 0x3c0225b2  lui         $v0, 0x25B2
    ctx->pc = 0x2b3644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9650 << 16));
    // 0x2b3648: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x2b3648u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
    // 0x2b364c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3650: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b3650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b3654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b3654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3658: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b365c: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x2b365cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b3660: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x2b3660u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x2b3664: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2b3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b3668: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x2b3668u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x2b366c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b3670: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b3670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b3674: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2b3674u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2b3678: 0x240200a4  addiu       $v0, $zero, 0xA4
    ctx->pc = 0x2b3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2b367c: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x2b367cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x2b3680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3684: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3688: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x2b3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b368c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2b368cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2b3690: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2b3690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b3694: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x2b3694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x2b3698: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2b3698u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2b369c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b36a0: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x2b36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2b36a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b36a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b36a8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2b36a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2b36ac: 0x24030356  addiu       $v1, $zero, 0x356
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x2b36b0: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x2b36b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x2b36b4: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x2b36b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2b36b8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b36bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b36bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b36c0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2b36c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2b36c4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2b36c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2b36c8: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x2b36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x2b36cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36d0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2b36d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2b36d4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b36d8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x2b36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x2b36dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b36dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36e0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b36e4: 0x3c0700df  lui         $a3, 0xDF
    ctx->pc = 0x2b36e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)223 << 16));
    // 0x2b36e8: 0x35110008  ori         $s1, $t0, 0x8
    ctx->pc = 0x2b36e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x2b36ec: 0x7983c  dsll32      $s3, $a3, 0
    ctx->pc = 0x2b36ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b36f0: 0x24120041  addiu       $s2, $zero, 0x41
    ctx->pc = 0x2b36f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b36f4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b36f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b36f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2b36f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b36fc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x2b36fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b3700: 0x2418000d  addiu       $t8, $zero, 0xD
    ctx->pc = 0x2b3700u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b3704: 0x3c077900  lui         $a3, 0x7900
    ctx->pc = 0x2b3704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30976 << 16));
    // 0x2b3708: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x2b3708u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b370c: 0x34e77000  ori         $a3, $a3, 0x7000
    ctx->pc = 0x2b370cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28672);
    // 0x2b3710: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x2b3710u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2b3714: 0x3c070e08  lui         $a3, 0xE08
    ctx->pc = 0x2b3714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3592 << 16));
    // 0x2b3718: 0x34ed2008  ori         $t5, $a3, 0x2008
    ctx->pc = 0x2b3718u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8200);
    // 0x2b371c: 0x3c078700  lui         $a3, 0x8700
    ctx->pc = 0x2b371cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34560 << 16));
    // 0x2b3720: 0x34e79000  ori         $a3, $a3, 0x9000
    ctx->pc = 0x2b3720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)36864);
    // 0x2b3724: 0x7008cb89  pcpyld      $t9, $zero, $t0
    ctx->pc = 0x2b3724u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2b3728: 0x70076389  pcpyld      $t4, $zero, $a3
    ctx->pc = 0x2b3728u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2b372c: 0x0  nop
    ctx->pc = 0x2b372cu;
    // NOP
label_2b3730:
    // 0x2b3730: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2b3730u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b3734: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2b3734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b3738: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b3738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b373c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2b373cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2b3740: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2b3740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2b3744: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x2b3744u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2b3748: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2b3748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b374c: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x2b374cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x2b3750: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2b3750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2b3754: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x2b3754u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x2b3758: 0x24e8001f  addiu       $t0, $a3, 0x1F
    ctx->pc = 0x2b3758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x2b375c: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b375cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3760: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2b3760u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2b3764: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b3764u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b3768: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b3768u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b376c: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b376cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3770: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2b3770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b3774: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3778: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2b3778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2b377c: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b377cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b3780: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2b3780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2b3784: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b3784u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b3788: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2b3788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2b378c: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b378cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b3790: 0xf34025  or          $t0, $a3, $s3
    ctx->pc = 0x2b3790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x2b3794: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3794u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3798: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x2b3798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2b379c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b37a0: 0x75140  sll         $t2, $a3, 5
    ctx->pc = 0x2b37a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2b37a4: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b37a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b37a8: 0x2547001f  addiu       $a3, $t2, 0x1F
    ctx->pc = 0x2b37a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x2b37ac: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b37acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b37b0: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2b37b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b37b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b37b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b37b8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2b37b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2b37bc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x2b37bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x2b37c0: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x2b37c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2b37c4: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b37c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2b37c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2b37cc: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b37ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b37d0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2b37d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2b37d4: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b37d8: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x2b37d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x2b37dc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b37dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b37e0: 0x24890003  addiu       $t1, $a0, 0x3
    ctx->pc = 0x2b37e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2b37e4: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b37e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b37e8: 0x95140  sll         $t2, $t1, 5
    ctx->pc = 0x2b37e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2b37ec: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b37ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b37f0: 0x2549001f  addiu       $t1, $t2, 0x1F
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x2b37f4: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b37f8: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x2b37f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2b37fc: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b37fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3800: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b3800u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b3804: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3808: 0x84c38  dsll        $t1, $t0, 16
    ctx->pc = 0x2b3808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 16);
    // 0x2b380c: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b380cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b3810: 0xa403c  dsll32      $t0, $t2, 0
    ctx->pc = 0x2b3810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2b3814: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b3814u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b3818: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b3818u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b381c: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x2b381cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x2b3820: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b3820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3824: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2b3824u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x2b3828: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2b3828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2b382c: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b382cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3830: 0x1135025  or          $t2, $t0, $s3
    ctx->pc = 0x2b3830u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x2b3834: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b3834u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b3838: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x2b3838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b383c: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b383cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3840: 0x8a140  sll         $s4, $t0, 5
    ctx->pc = 0x2b3840u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2b3844: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3848: 0x2688001f  addiu       $t0, $s4, 0x1F
    ctx->pc = 0x2b3848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x2b384c: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b384cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b3850: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2b3850u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2b3854: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b3854u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b3858: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2b3858u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2b385c: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b385cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b3860: 0x14403c  dsll32      $t0, $s4, 0
    ctx->pc = 0x2b3860u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2b3864: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3864u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3868: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b3868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b386c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b386cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3870: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2b3870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2b3874: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b3874u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b3878: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2b3878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2b387c: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b387cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b3880: 0x1134825  or          $t1, $t0, $s3
    ctx->pc = 0x2b3880u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x2b3884: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b3884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3888: 0x24880005  addiu       $t0, $a0, 0x5
    ctx->pc = 0x2b3888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2b388c: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x2b388cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x2b3890: 0x8a940  sll         $s5, $t0, 5
    ctx->pc = 0x2b3890u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2b3894: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b3894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3898: 0x26a8001f  addiu       $t0, $s5, 0x1F
    ctx->pc = 0x2b3898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x2b389c: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b389cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b38a0: 0x8a03c  dsll32      $s4, $t0, 0
    ctx->pc = 0x2b38a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2b38a4: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b38a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b38a8: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x2b38a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x2b38ac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b38acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b38b0: 0x15403c  dsll32      $t0, $s5, 0
    ctx->pc = 0x2b38b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2b38b4: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b38b8: 0x24870006  addiu       $a3, $a0, 0x6
    ctx->pc = 0x2b38b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x2b38bc: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b38c0: 0x7a940  sll         $s5, $a3, 5
    ctx->pc = 0x2b38c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2b38c4: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b38c8: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b38c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b38cc: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b38d0: 0x14a438  dsll        $s4, $s4, 16
    ctx->pc = 0x2b38d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 16);
    // 0x2b38d4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b38d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b38d8: 0x1144025  or          $t0, $t0, $s4
    ctx->pc = 0x2b38d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x2b38dc: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b38e0: 0x26a7001f  addiu       $a3, $s5, 0x1F
    ctx->pc = 0x2b38e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x2b38e4: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b38e8: 0x7a03c  dsll32      $s4, $a3, 0
    ctx->pc = 0x2b38e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b38ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b38ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b38f0: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x2b38f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x2b38f4: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x2b38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x2b38f8: 0x15383c  dsll32      $a3, $s5, 0
    ctx->pc = 0x2b38f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2b38fc: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b38fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3900: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x2b3900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x2b3904: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b3904u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b3908: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2b3908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2b390c: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b390cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3910: 0x14a438  dsll        $s4, $s4, 16
    ctx->pc = 0x2b3910u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 16);
    // 0x2b3914: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3918: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x2b3918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x2b391c: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b391cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b3920: 0x24940007  addiu       $s4, $a0, 0x7
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2b3924: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b3924u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b3928: 0x14b140  sll         $s6, $s4, 5
    ctx->pc = 0x2b3928u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x2b392c: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b392cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b3930: 0x26d4001f  addiu       $s4, $s6, 0x1F
    ctx->pc = 0x2b3930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 31));
    // 0x2b3934: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3934u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3938: 0x14a83c  dsll32      $s5, $s4, 0
    ctx->pc = 0x2b3938u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2b393c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3940: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x2b3940u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x2b3944: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b3944u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b3948: 0x16a03c  dsll32      $s4, $s6, 0
    ctx->pc = 0x2b3948u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2b394c: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b394cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b3950: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b3954: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b3954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3958: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x2b3958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x2b395c: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x2b395cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x2b3960: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x2b3960u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x2b3964: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b3964u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3968: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x2b3968u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x2b396c: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b396cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b3970: 0x295a025  or          $s4, $s4, $s5
    ctx->pc = 0x2b3970u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
    // 0x2b3974: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3974u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3978: 0x293a025  or          $s4, $s4, $s3
    ctx->pc = 0x2b3978u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
    // 0x2b397c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b397cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3980: 0x2c8a0010  sltiu       $t2, $a0, 0x10
    ctx->pc = 0x2b3980u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b3984: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b3984u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b3988: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x2b3988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2b398c: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b398cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b3990: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2b3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2b3994: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b3994u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b3998: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3998u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b399c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b39a0: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b39a4: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b39a8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b39a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b39ac: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2b39acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x2b39b0: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b39b4: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b39b8: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b39b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b39bc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b39c0: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b39c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b39c4: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b39c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b39c8: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b39c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b39cc: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b39ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b39d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b39d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b39d4: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b39d8: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b39dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2b39dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b39e0: 0xfcd40000  sd          $s4, 0x0($a2)
    ctx->pc = 0x2b39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 20));
    // 0x2b39e4: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b39e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b39e8: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x2b39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x2b39ec: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b39ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b39f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b39f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b39f4: 0xfcd90000  sd          $t9, 0x0($a2)
    ctx->pc = 0x2b39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 25));
    // 0x2b39f8: 0xfcd80008  sd          $t8, 0x8($a2)
    ctx->pc = 0x2b39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 24));
    // 0x2b39fc: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2b39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2b3a00: 0xfcd00018  sd          $s0, 0x18($a2)
    ctx->pc = 0x2b3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 16));
    // 0x2b3a04: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3a08: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2b3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2b3a0c: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2b3a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2b3a10: 0x1540ff47  bnez        $t2, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2B3A10u;
    {
        const bool branch_taken_0x2b3a10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A10u;
        // 0x2b3a14: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a10) {
            ctx->pc = 0x2B3730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3730;
        }
    }
    ctx->pc = 0x2B3A18u;
    // 0x2b3a18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b3a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b3a1c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2b3a20: 0x8c30f014  lw          $s0, -0xFEC($at)
    ctx->pc = 0x2b3a20u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x81F014u));
    // 0x2b3a24: 0x344c00c0  ori         $t4, $v0, 0xC0
    ctx->pc = 0x2b3a24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2b3a28: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x2b3a28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x2b3a2c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b3a30: 0x532025  or          $a0, $v0, $s3
    ctx->pc = 0x2b3a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2b3a34: 0x240d004d  addiu       $t5, $zero, 0x4D
    ctx->pc = 0x2b3a34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2b3a38: 0x240b004f  addiu       $t3, $zero, 0x4F
    ctx->pc = 0x2b3a38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b3a3c: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x2b3a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b3a40: 0x3509020b  ori         $t1, $t0, 0x20B
    ctx->pc = 0x2b3a40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)523);
    // 0x2b3a44: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x2b3a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b3a48: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x2b3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b3a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3a50: 0xde100020  ld          $s0, 0x20($s0)
    ctx->pc = 0x2b3a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b3a54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b3a58: 0xfcd00000  sd          $s0, 0x0($a2)
    ctx->pc = 0x2b3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 16));
    // 0x2b3a5c: 0xfccd0008  sd          $t5, 0x8($a2)
    ctx->pc = 0x2b3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 13));
    // 0x2b3a60: 0xfccc0010  sd          $t4, 0x10($a2)
    ctx->pc = 0x2b3a60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 12));
    // 0x2b3a64: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x2b3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x2b3a68: 0x8c2bf014  lw          $t3, -0xFEC($at)
    ctx->pc = 0x2b3a68u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F014u));
    // 0x2b3a6c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3a70: 0xdd6b0040  ld          $t3, 0x40($t3)
    ctx->pc = 0x2b3a70u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x2b3a74: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x2b3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x2b3a78: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x2b3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x2b3a7c: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2b3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2b3a80: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x2b3a80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x2b3a84: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3a88: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2b3a88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2b3a8c: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x2b3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x2b3a90: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2b3a90u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2b3a94: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x2b3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x2b3a98: 0x8f878b30  lw          $a3, -0x74D0($gp)
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x2b3a9c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b3aa0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2b3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2b3aa4: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x2b3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x2b3aa8: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x2b3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x2b3aac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3ab0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3AB0u;
    {
        const bool branch_taken_0x2b3ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AB0u;
        // 0x2b3ab4: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ab0) {
            ctx->pc = 0x2B3AF8u;
            goto label_2b3af8;
        }
    }
    ctx->pc = 0x2B3AB8u;
    // 0x2b3ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3abc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3ABCu;
    {
        const bool branch_taken_0x2b3abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3abc) {
            ctx->pc = 0x2B3AD8u;
            goto label_2b3ad8;
        }
    }
    ctx->pc = 0x2B3AC4u;
    // 0x2b3ac4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3AC4u;
    {
        const bool branch_taken_0x2b3ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ac4) {
            ctx->pc = 0x2B3AD8u;
            goto label_2b3ad8;
        }
    }
    ctx->pc = 0x2B3ACCu;
    // 0x2b3acc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B3ACCu;
    {
        const bool branch_taken_0x2b3acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3acc) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3AD4u;
    // 0x2b3ad4: 0x0  nop
    ctx->pc = 0x2b3ad4u;
    // NOP
label_2b3ad8:
    // 0x2b3ad8: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x2b3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b3adc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3ADCu;
    {
        const bool branch_taken_0x2b3adc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ADCu;
        // 0x2b3ae0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3adc) {
            ctx->pc = 0x2B3AECu;
            goto label_2b3aec;
        }
    }
    ctx->pc = 0x2B3AE4u;
    // 0x2b3ae4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b3ae8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b3aec:
    // 0x2b3aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3af0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3AF0u;
    {
        const bool branch_taken_0x2b3af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AF0u;
        // 0x2b3af4: 0x304effff  andi        $t6, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3af0) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3AF8u;
label_2b3af8:
    // 0x2b3af8: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x2b3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b3afc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3AFCu;
    {
        const bool branch_taken_0x2b3afc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AFCu;
        // 0x2b3b00: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3afc) {
            ctx->pc = 0x2B3B0Cu;
            goto label_2b3b0c;
        }
    }
    ctx->pc = 0x2B3B04u;
    // 0x2b3b04: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b3b08: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b3b0c:
    // 0x2b3b0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3b10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b3b14: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2b3b14u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b3b18: 0x0  nop
    ctx->pc = 0x2b3b18u;
    // NOP
    // 0x2b3b1c: 0x0  nop
    ctx->pc = 0x2b3b1cu;
    // NOP
    // 0x2b3b20: 0x1012  mflo        $v0
    ctx->pc = 0x2b3b20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b3b24: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x2b3b24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2b3b28:
    // 0x2b3b28: 0x31c2ffff  andi        $v0, $t6, 0xFFFF
    ctx->pc = 0x2b3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x2b3b2c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b3b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b3b30: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2b3b30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3b34: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x2b3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x2b3b38: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2b3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b3b3c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3B3Cu;
    {
        const bool branch_taken_0x2b3b3c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B3Cu;
        // 0x2b3b40: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b3c) {
            ctx->pc = 0x2B3B4Cu;
            goto label_2b3b4c;
        }
    }
    ctx->pc = 0x2B3B44u;
    // 0x2b3b44: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b3b48: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b3b4c:
    // 0x2b3b4c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3b50: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2b3b54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2b3b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b3b58: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2b3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b3b5c: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x2b3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x2b3b60: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2b3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b3b64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3B64u;
    {
        const bool branch_taken_0x2b3b64 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B64u;
        // 0x2b3b68: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b64) {
            ctx->pc = 0x2B3B74u;
            goto label_2b3b74;
        }
    }
    ctx->pc = 0x2B3B6Cu;
    // 0x2b3b6c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b3b70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b3b74:
    // 0x2b3b74: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2b3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3b78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b3b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b3b7c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2b3b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b3b80: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2b3b84: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2b3b84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2b3b88: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b3b8c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2b3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2b3b90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2b3b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2b3b94: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2b3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2b3b98: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b3b9c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2b3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2b3ba0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2b3ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2b3ba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b3ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b3ba8: 0xaf868b28  sw          $a2, -0x74D8($gp)
    ctx->pc = 0x2b3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 6));
    // 0x2b3bac: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x2b3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x2b3bb0: 0x91e7000c  lbu         $a3, 0xC($t7)
    ctx->pc = 0x2b3bb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x2b3bb4: 0xc061c60  jal         func_187180
    ctx->pc = 0x2B3BB4u;
    SET_GPR_U32(ctx, 31, 0x2B3BBCu);
    ctx->pc = 0x2B3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BB4u;
    // 0x2b3bb8: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x2B3BB4u, 0x2B3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BBCu;
label_2b3bbc:
    // 0x2b3bbc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b3bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3bc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b3bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3bc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b3bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3bc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b3bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b3bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b3bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b3bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b3bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BDCu;
        // 0x2b3be0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3BE4u;
}
