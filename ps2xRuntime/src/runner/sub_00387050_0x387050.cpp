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

// Function: sub_00387050
// Address: 0x387050 - 0x387284
void sub_00387050_0x387050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387050_0x387050");
#endif

    switch (ctx->pc) {
        case 0x3870e0u: goto label_3870e0;
        case 0x387120u: goto label_387120;
        case 0x387198u: goto label_387198;
        case 0x3871f0u: goto label_3871f0;
        case 0x38723cu: goto label_38723c;
        case 0x387260u: goto label_387260;
        default: break;
    }

    ctx->pc = 0x387050u;

    // 0x387050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x387050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x387054: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x387054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x387058: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x387058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x38705c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x38705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x387060: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x387060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387064: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x387064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x387068: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x387068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38706c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x387070: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x387070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x387074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x387078: 0x84b30006  lh          $s3, 0x6($a1)
    ctx->pc = 0x387078u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x38707c: 0x84b10008  lh          $s1, 0x8($a1)
    ctx->pc = 0x38707cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x387080: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x387080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387084: 0x26720100  addiu       $s2, $s3, 0x100
    ctx->pc = 0x387084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x387088: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x387088u;
    {
        const bool branch_taken_0x387088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387088u;
        // 0x38708c: 0x26300033  addiu       $s0, $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387088) {
            ctx->pc = 0x387108u;
            goto label_387108;
        }
    }
    ctx->pc = 0x387090u;
    // 0x387090: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x387090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x387094: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x387094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x387098: 0x24421ec8  addiu       $v0, $v0, 0x1EC8
    ctx->pc = 0x387098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7880));
    // 0x38709c: 0x3c030102  lui         $v1, 0x102
    ctx->pc = 0x38709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)258 << 16));
    // 0x3870a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3870a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3870a4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3870a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3870a8: 0x8e8c0010  lw          $t4, 0x10($s4)
    ctx->pc = 0x3870a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3870ac: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x3870acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3870b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3870b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3870b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3870b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3870b8: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3870bc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3870bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3870c0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3870c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3870c4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x3870c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3870c8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x3870c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3870cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3870ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3870d0: 0x95820002  lhu         $v0, 0x2($t4)
    ctx->pc = 0x3870d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3870d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3870d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3870d8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3870D8u;
    SET_GPR_U32(ctx, 31, 0x3870E0u);
    ctx->pc = 0x3870DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870D8u;
    // 0x3870dc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3870D8u, 0x3870E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3870E0u;
label_3870e0:
    // 0x3870e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3870e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3870e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3870e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3870e8: 0x9022fc8c  lbu         $v0, -0x374($at)
    ctx->pc = 0x3870e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3870ec: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3870ECu;
    {
        const bool branch_taken_0x3870ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3870F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870ECu;
        // 0x3870f0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870ec) {
            ctx->pc = 0x387240u;
            goto label_387240;
        }
    }
    ctx->pc = 0x3870F4u;
    // 0x3870f4: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x3870f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x3870f8: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x3870F8u;
    {
        const bool branch_taken_0x3870f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3870f8) {
            ctx->pc = 0x387240u;
            goto label_387240;
        }
    }
    ctx->pc = 0x387100u;
    // 0x387100: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x387100u;
    {
        const bool branch_taken_0x387100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387100u;
        // 0x387104: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387100) {
            ctx->pc = 0x387240u;
            goto label_387240;
        }
    }
    ctx->pc = 0x387108u;
label_387108:
    // 0x387108: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x387108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x38710c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x38710cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x387110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x387110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387114: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x387114u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x387118: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x387118u;
    SET_GPR_U32(ctx, 31, 0x387120u);
    ctx->pc = 0x38711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387118u;
    // 0x38711c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x387118u, 0x387120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387120u;
label_387120:
    // 0x387120: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x387120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x387124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x387124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x387128: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x387128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x38712c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x38712cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x387130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387134: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x387134u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x387138: 0x24e6002d  addiu       $a2, $a3, 0x2D
    ctx->pc = 0x387138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 45));
    // 0x38713c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x38713Cu;
    {
        const bool branch_taken_0x38713c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x387140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38713Cu;
        // 0x387140: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38713c) {
            ctx->pc = 0x3871A0u;
            goto label_3871a0;
        }
    }
    ctx->pc = 0x387144u;
    // 0x387144: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x387144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x387148: 0x34a4002f  ori         $a0, $a1, 0x2F
    ctx->pc = 0x387148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47);
    // 0x38714c: 0x24631ed0  addiu       $v1, $v1, 0x1ED0
    ctx->pc = 0x38714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7888));
    // 0x387150: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x387150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x387154: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x387154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x387158: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x387158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x38715c: 0x34a3002c  ori         $v1, $a1, 0x2C
    ctx->pc = 0x38715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
    // 0x387160: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x387160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x387164: 0x67200a  movz        $a0, $v1, $a3
    ctx->pc = 0x387164u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x387168: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x387168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x38716c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x38716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x387170: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x387170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387174: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x387174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x387178: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x387178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x38717c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x38717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x387180: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x387180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x387184: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x387184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38718c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x38718cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x387190: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x387190u;
    SET_GPR_U32(ctx, 31, 0x387198u);
    ctx->pc = 0x387194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387190u;
    // 0x387194: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x387190u, 0x387198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387198u;
label_387198:
    // 0x387198: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x387198u;
    {
        const bool branch_taken_0x387198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387198) {
            ctx->pc = 0x387240u;
            goto label_387240;
        }
    }
    ctx->pc = 0x3871A0u;
label_3871a0:
    // 0x3871a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3871a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3871a4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3871A4u;
    {
        const bool branch_taken_0x3871a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3871a4) {
            ctx->pc = 0x3871F8u;
            goto label_3871f8;
        }
    }
    ctx->pc = 0x3871ACu;
    // 0x3871ac: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3871acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3871b0: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x3871b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3871b4: 0x24841ed8  addiu       $a0, $a0, 0x1ED8
    ctx->pc = 0x3871b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7896));
    // 0x3871b8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3871b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3871bc: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3871bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3871c0: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x3871c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3871c4: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x3871c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x3871c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3871c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3871cc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3871ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3871d0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x3871d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3871d4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3871d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3871d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3871d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3871dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3871dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3871e0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x3871e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3871e4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x3871e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3871e8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3871E8u;
    SET_GPR_U32(ctx, 31, 0x3871F0u);
    ctx->pc = 0x3871ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3871E8u;
    // 0x3871ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3871E8u, 0x3871F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871F0u;
label_3871f0:
    // 0x3871f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3871F0u;
    {
        const bool branch_taken_0x3871f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3871f0) {
            ctx->pc = 0x387240u;
            goto label_387240;
        }
    }
    ctx->pc = 0x3871F8u;
label_3871f8:
    // 0x3871f8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3871f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3871fc: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x3871fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x387200: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x387200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x387204: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x387204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x387208: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x387208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x38720c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x38720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x387210: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x387210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x387214: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x387214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x387218: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x387218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x38721c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x38721cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x387220: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x387220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387228: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x387228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x38722c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x38722cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x387230: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x387230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x387234: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x387234u;
    SET_GPR_U32(ctx, 31, 0x38723Cu);
    ctx->pc = 0x387238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387234u;
    // 0x387238: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x387234u, 0x38723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38723Cu;
label_38723c:
    // 0x38723c: 0x0  nop
    ctx->pc = 0x38723cu;
    // NOP
label_387240:
    // 0x387240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x387244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x387248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38724c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38724cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387250: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x387250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x387254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387258: 0xc0e1ca4  jal         func_387290
    ctx->pc = 0x387258u;
    SET_GPR_U32(ctx, 31, 0x387260u);
    ctx->pc = 0x38725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387258u;
    // 0x38725c: 0x3c0a4000  lui         $t2, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387290u, 0x387258u, 0x387260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387260u;
label_387260:
    // 0x387260: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x387260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387264: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x387264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387268: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x387268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38726c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x38726cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387270: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x387270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387274: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x387274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x387278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38727c: 0x3e00008  jr          $ra
    ctx->pc = 0x38727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38727Cu;
        // 0x387280: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387284u;
}
