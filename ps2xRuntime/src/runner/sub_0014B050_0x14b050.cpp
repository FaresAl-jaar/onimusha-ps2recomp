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

// Function: sub_0014B050
// Address: 0x14b050 - 0x14b1a0
void sub_0014B050_0x14b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B050_0x14b050");
#endif

    switch (ctx->pc) {
        case 0x14b0a0u: goto label_14b0a0;
        case 0x14b0b8u: goto label_14b0b8;
        case 0x14b150u: goto label_14b150;
        default: break;
    }

    ctx->pc = 0x14b050u;

    // 0x14b050: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x14b050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x14b054: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x14b054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x14b058: 0xa0850055  sb          $a1, 0x55($a0)
    ctx->pc = 0x14b058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b05c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b060: 0xa0850054  sb          $a1, 0x54($a0)
    ctx->pc = 0x14b060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14b064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b068: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x14b068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x14b06c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14b06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b070: 0xac80405c  sw          $zero, 0x405C($a0)
    ctx->pc = 0x14b070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16476), GPR_U32(ctx, 0));
    // 0x14b074: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b078: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x14b078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x14b07c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x14b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x14b080: 0xac804064  sw          $zero, 0x4064($a0)
    ctx->pc = 0x14b080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16484), GPR_U32(ctx, 0));
    // 0x14b084: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x14b084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x14b088: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x14b088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x14b08c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x14b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x14b090: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x14b090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x14b094: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14b094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14b098: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x14b098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x14b09c: 0x0  nop
    ctx->pc = 0x14b09cu;
    // NOP
label_14b0a0:
    // 0x14b0a0: 0x8ce30058  lw          $v1, 0x58($a3)
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x14b0a4: 0x24cb085c  addiu       $t3, $a2, 0x85C
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 2140));
    // 0x14b0a8: 0x24ca245c  addiu       $t2, $a2, 0x245C
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 9308));
    // 0x14b0ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0b0: 0xace30458  sw          $v1, 0x458($a3)
    ctx->pc = 0x14b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1112), GPR_U32(ctx, 3));
    // 0x14b0b4: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x14b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
label_14b0b8:
    // 0x14b0b8: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x14b0b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14b0bc: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x14b0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x14b0c0: 0x2d030014  sltiu       $v1, $t0, 0x14
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x14b0c4: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x14b0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b0c8: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x14b0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b0cc: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x14b0ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x14b0d0: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x14b0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b0d4: 0xa1600001  sb          $zero, 0x1($t3)
    ctx->pc = 0x14b0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b0d8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14b0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14b0dc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x14b0e0: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x14b0e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14b0e4: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x14b0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b0e8: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x14b0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b0ec: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x14b0ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x14b0f0: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x14b0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b0f4: 0xa1600001  sb          $zero, 0x1($t3)
    ctx->pc = 0x14b0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b0f8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14b0fc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x14b0fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x14b100: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x14b100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14b104: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x14b104u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b108: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x14b108u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b10c: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x14b10cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x14b110: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x14b110u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b114: 0xa1600001  sb          $zero, 0x1($t3)
    ctx->pc = 0x14b114u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b118: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14b11c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x14b11cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x14b120: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x14b120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14b124: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x14b124u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b128: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x14b128u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b12c: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x14b12cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x14b130: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x14b130u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b134: 0xa1600001  sb          $zero, 0x1($t3)
    ctx->pc = 0x14b134u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b138: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14b138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14b13c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14B13Cu;
    {
        const bool branch_taken_0x14b13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B13Cu;
        // 0x14b140: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b13c) {
            ctx->pc = 0x14B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b0b8;
        }
    }
    ctx->pc = 0x14B144u;
    // 0x14b144: 0x2d01001c  sltiu       $at, $t0, 0x1C
    ctx->pc = 0x14b144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x14b148: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B148u;
    {
        const bool branch_taken_0x14b148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b148) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x14b150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14b154: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14b154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14b158: 0x2d03001c  sltiu       $v1, $t0, 0x1C
    ctx->pc = 0x14b158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x14b15c: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x14b15cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b160: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x14b160u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b164: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14b168: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B168u;
    {
        const bool branch_taken_0x14b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B168u;
        // 0x14b16c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b168) {
            ctx->pc = 0x14B150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b150;
        }
    }
    ctx->pc = 0x14B170u;
label_14b170:
    // 0x14b170: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14b174: 0x29230100  slti        $v1, $t1, 0x100
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x14b178: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14b178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14b17c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14B17Cu;
    {
        const bool branch_taken_0x14b17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B17Cu;
        // 0x14b180: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b17c) {
            ctx->pc = 0x14B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b0a0;
        }
    }
    ctx->pc = 0x14B184u;
    // 0x14b184: 0x94830858  lhu         $v1, 0x858($a0)
    ctx->pc = 0x14b184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x14b188: 0xa483085a  sh          $v1, 0x85A($a0)
    ctx->pc = 0x14b188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2138), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b18c: 0xa4800858  sh          $zero, 0x858($a0)
    ctx->pc = 0x14b18cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2136), (uint16_t)GPR_U32(ctx, 0));
    // 0x14b190: 0x94834060  lhu         $v1, 0x4060($a0)
    ctx->pc = 0x14b190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16480)));
    // 0x14b194: 0xa4834062  sh          $v1, 0x4062($a0)
    ctx->pc = 0x14b194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16482), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b198: 0x3e00008  jr          $ra
    ctx->pc = 0x14B198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B198u;
        // 0x14b19c: 0xa4804060  sh          $zero, 0x4060($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16480), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B1A0u;
}
