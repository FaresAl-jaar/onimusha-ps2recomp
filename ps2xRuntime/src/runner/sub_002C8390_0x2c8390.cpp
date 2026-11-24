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

// Function: sub_002C8390
// Address: 0x2c8390 - 0x2c869c
void sub_002C8390_0x2c8390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8390_0x2c8390");
#endif

    switch (ctx->pc) {
        case 0x2c83c0u: goto label_2c83c0;
        case 0x2c83f0u: goto label_2c83f0;
        case 0x2c8400u: goto label_2c8400;
        case 0x2c8454u: goto label_2c8454;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8658u: goto label_2c8658;
        default: break;
    }

    ctx->pc = 0x2c8390u;

    // 0x2c8390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c8390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c8394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c8398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c839c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c83a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c83a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c83a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c83a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c83a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c83ac: 0x90860053  lbu         $a2, 0x53($a0)
    ctx->pc = 0x2c83acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 83)));
    // 0x2c83b0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C83B0u;
    {
        const bool branch_taken_0x2c83b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83B0u;
        // 0x2c83b4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83b0) {
            ctx->pc = 0x2C83C8u;
            goto label_2c83c8;
        }
    }
    ctx->pc = 0x2C83B8u;
    // 0x2c83b8: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2C83B8u;
    SET_GPR_U32(ctx, 31, 0x2C83C0u);
    ctx->pc = 0x2C83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83B8u;
    // 0x2c83bc: 0xa2600053  sb          $zero, 0x53($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2C83B8u, 0x2C83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83C0u;
label_2c83c0:
    // 0x2c83c0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2C83C0u;
    {
        const bool branch_taken_0x2c83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c83c0) {
            ctx->pc = 0x2C8680u;
            goto label_2c8680;
        }
    }
    ctx->pc = 0x2C83C8u;
label_2c83c8:
    // 0x2c83c8: 0xa260004f  sb          $zero, 0x4F($s3)
    ctx->pc = 0x2c83c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c83cc: 0xa2600037  sb          $zero, 0x37($s3)
    ctx->pc = 0x2c83ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c83d0: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x2c83d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2c83d4: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2C83D4u;
    {
        const bool branch_taken_0x2c83d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c83d4) {
            ctx->pc = 0x2C8680u;
            goto label_2c8680;
        }
    }
    ctx->pc = 0x2C83DCu;
    // 0x2c83dc: 0x92620101  lbu         $v0, 0x101($s3)
    ctx->pc = 0x2c83dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 257)));
    // 0x2c83e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C83E0u;
    {
        const bool branch_taken_0x2c83e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E0u;
        // 0x2c83e4: 0x92700031  lbu         $s0, 0x31($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e0) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83E8u;
    // 0x2c83e8: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x2C83E8u;
    SET_GPR_U32(ctx, 31, 0x2C83F0u);
    ctx->pc = 0x2CD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD340u, 0x2C83E8u, 0x2C83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83F0u;
label_2c83f0:
    // 0x2c83f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C83F0u;
    {
        const bool branch_taken_0x2c83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83F0u;
        // 0x2c83f4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83f0) {
            ctx->pc = 0x2C8400u;
            goto label_2c8400;
        }
    }
    ctx->pc = 0x2C83F8u;
label_2c83f8:
    // 0x2c83f8: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2C83F8u;
    SET_GPR_U32(ctx, 31, 0x2C8400u);
    ctx->pc = 0x2C83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83F8u;
    // 0x2c83fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2C83F8u, 0x2C8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8400u;
label_2c8400:
    // 0x2c8400: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c8400u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c8404: 0x48262001  qmfc2.i     $a2, $vf4
    ctx->pc = 0x2c8404u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c8408: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2c8408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2c840c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8410: 0x24637700  addiu       $v1, $v1, 0x7700
    ctx->pc = 0x2c8410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30464));
    // 0x2c8414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8418: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2c8418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c841c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8420: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2c8420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2c8424: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2c8424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8428: 0x24847600  addiu       $a0, $a0, 0x7600
    ctx->pc = 0x2c8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30208));
    // 0x2c842c: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x2c842cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2c8430: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c8434: 0x92620101  lbu         $v0, 0x101($s3)
    ctx->pc = 0x2c8434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 257)));
    // 0x2c8438: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c843c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8440: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x2c8440u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8444: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8444u;
    {
        const bool branch_taken_0x2c8444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8444u;
        // 0x2c8448: 0x92710031  lbu         $s1, 0x31($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8444) {
            ctx->pc = 0x2C845Cu;
            goto label_2c845c;
        }
    }
    ctx->pc = 0x2C844Cu;
    // 0x2c844c: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x2C844Cu;
    SET_GPR_U32(ctx, 31, 0x2C8454u);
    ctx->pc = 0x2CD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD340u, 0x2C844Cu, 0x2C8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8454u;
label_2c8454:
    // 0x2c8454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8454u;
    {
        const bool branch_taken_0x2c8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8454u;
        // 0x2c8458: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8454) {
            ctx->pc = 0x2C8468u;
            goto label_2c8468;
        }
    }
    ctx->pc = 0x2C845Cu;
label_2c845c:
    // 0x2c845c: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2C845Cu;
    SET_GPR_U32(ctx, 31, 0x2C8464u);
    ctx->pc = 0x2C8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C845Cu;
    // 0x2c8460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2C845Cu, 0x2C8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8464u;
label_2c8464:
    // 0x2c8464: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8468:
    // 0x2c8468: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c8468u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c846c: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2c846cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c8470: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c8470u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c8474: 0x48282001  qmfc2.i     $t0, $vf4
    ctx->pc = 0x2c8474u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c8478: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2c8478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2c847c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2c847cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8480: 0x24a57700  addiu       $a1, $a1, 0x7700
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30464));
    // 0x2c8484: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2c8488: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c8488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c848c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c8490: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2c8490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2c8494: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x2c8494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c8498: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2c8498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c849c: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x2c849cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c84a0: 0x24e77600  addiu       $a3, $a3, 0x7600
    ctx->pc = 0x2c84a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30208));
    // 0x2c84a4: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2c84a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c84a8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x2c84a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c84ac: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x2c84acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2c84b0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2c84b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2c84b4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2c84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2c84b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2c84b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2c84bc: 0x90840068  lbu         $a0, 0x68($a0)
    ctx->pc = 0x2c84bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2c84c0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2c84c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c84c4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2c84c8: 0x90c60070  lbu         $a2, 0x70($a2)
    ctx->pc = 0x2c84c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2c84cc: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x2c84ccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2c84d0: 0x0  nop
    ctx->pc = 0x2c84d0u;
    // NOP
    // 0x2c84d4: 0x0  nop
    ctx->pc = 0x2c84d4u;
    // NOP
    // 0x2c84d8: 0x2810  mfhi        $a1
    ctx->pc = 0x2c84d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2c84dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c84e0: 0xa664003c  sh          $a0, 0x3C($s3)
    ctx->pc = 0x2c84e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c84e4: 0x9664003c  lhu         $a0, 0x3C($s3)
    ctx->pc = 0x2c84e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2c84e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c84ec: 0xa664003c  sh          $a0, 0x3C($s3)
    ctx->pc = 0x2c84ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c84f0: 0x9666003c  lhu         $a2, 0x3C($s3)
    ctx->pc = 0x2c84f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2c84f4: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C84F4u;
    {
        const bool branch_taken_0x2c84f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84F4u;
        // 0x2c84f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84f4) {
            ctx->pc = 0x2C8598u;
            goto label_2c8598;
        }
    }
    ctx->pc = 0x2C84FCu;
    // 0x2c84fc: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x2c84fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2c8500: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8500u;
    {
        const bool branch_taken_0x2c8500 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2C8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8500u;
        // 0x2c8504: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8500) {
            ctx->pc = 0x2C8514u;
            goto label_2c8514;
        }
    }
    ctx->pc = 0x2C8508u;
    // 0x2c8508: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c8508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c850c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C850Cu;
    {
        const bool branch_taken_0x2c850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C850Cu;
        // 0x2c8510: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c850c) {
            ctx->pc = 0x2C852Cu;
            goto label_2c852c;
        }
    }
    ctx->pc = 0x2C8514u;
label_2c8514:
    // 0x2c8514: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c8518: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2c8518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2c851c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c851cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8520: 0x0  nop
    ctx->pc = 0x2c8520u;
    // NOP
    // 0x2c8524: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c8524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c8528: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c8528u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c852c:
    // 0x2c852c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8530: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2c8530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2c8534: 0x34858889  ori         $a1, $a0, 0x8889
    ctx->pc = 0x2c8534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2c8538: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x2c853c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2c853cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8540: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c8540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8544: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c8544u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c8548: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c8548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c854c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c854cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8550: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8550u;
    {
        const bool branch_taken_0x2c8550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8550) {
            ctx->pc = 0x2C8568u;
            goto label_2c8568;
        }
    }
    ctx->pc = 0x2C8558u;
    // 0x2c8558: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c855c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2c855cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2c8560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8560u;
    {
        const bool branch_taken_0x2c8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8560u;
        // 0x2c8564: 0x5202b  sltu        $a0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8560) {
            ctx->pc = 0x2C8584u;
            goto label_2c8584;
        }
    }
    ctx->pc = 0x2C8568u;
label_2c8568:
    // 0x2c8568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c8568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c856c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2c856cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2c8570: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8574: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2c8574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2c8578: 0x0  nop
    ctx->pc = 0x2c8578u;
    // NOP
    // 0x2c857c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2c857cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2c8580: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x2c8580u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c8584:
    // 0x2c8584: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2c8584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2c8588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8588u;
    {
        const bool branch_taken_0x2c8588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8588) {
            ctx->pc = 0x2C8598u;
            goto label_2c8598;
        }
    }
    ctx->pc = 0x2C8590u;
    // 0x2c8590: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2c8590u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c8594: 0x0  nop
    ctx->pc = 0x2c8594u;
    // NOP
label_2c8598:
    // 0x2c8598: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8598u;
    {
        const bool branch_taken_0x2c8598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8598u;
        // 0x2c859c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8598) {
            ctx->pc = 0x2C85A8u;
            goto label_2c85a8;
        }
    }
    ctx->pc = 0x2C85A0u;
    // 0x2c85a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C85A0u;
    {
        const bool branch_taken_0x2c85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85A0u;
        // 0x2c85a4: 0xa664003c  sh          $a0, 0x3C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85a0) {
            ctx->pc = 0x2C8630u;
            goto label_2c8630;
        }
    }
    ctx->pc = 0x2C85A8u;
label_2c85a8:
    // 0x2c85a8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2c85a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2c85ac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C85ACu;
    {
        const bool branch_taken_0x2c85ac = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85ACu;
        // 0x2c85b0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85ac) {
            ctx->pc = 0x2C85C0u;
            goto label_2c85c0;
        }
    }
    ctx->pc = 0x2C85B4u;
    // 0x2c85b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c85b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c85b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C85B8u;
    {
        const bool branch_taken_0x2c85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85B8u;
        // 0x2c85bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85b8) {
            ctx->pc = 0x2C85D8u;
            goto label_2c85d8;
        }
    }
    ctx->pc = 0x2C85C0u;
label_2c85c0:
    // 0x2c85c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c85c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c85c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c85c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c85c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c85cc: 0x0  nop
    ctx->pc = 0x2c85ccu;
    // NOP
    // 0x2c85d0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c85d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c85d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c85d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c85d8:
    // 0x2c85d8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c85dc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c85e0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2c85e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c85e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c85e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c85e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c85ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c85ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c85f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c85f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c85f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c85f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c85f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c85f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c85fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C85FCu;
    {
        const bool branch_taken_0x2c85fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c85fc) {
            ctx->pc = 0x2C8614u;
            goto label_2c8614;
        }
    }
    ctx->pc = 0x2C8604u;
    // 0x2c8604: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8608: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2c8608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c860c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C860Cu;
    {
        const bool branch_taken_0x2c860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c860c) {
            ctx->pc = 0x2C862Cu;
            goto label_2c862c;
        }
    }
    ctx->pc = 0x2C8614u;
label_2c8614:
    // 0x2c8614: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c8614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c8618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c8618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c861c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c861cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8620: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2c8620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c8624: 0x0  nop
    ctx->pc = 0x2c8624u;
    // NOP
    // 0x2c8628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c8628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2c862c:
    // 0x2c862c: 0xa664003c  sh          $a0, 0x3C($s3)
    ctx->pc = 0x2c862cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 4));
label_2c8630:
    // 0x2c8630: 0x92630106  lbu         $v1, 0x106($s3)
    ctx->pc = 0x2c8630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 262)));
    // 0x2c8634: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8634u;
    {
        const bool branch_taken_0x2c8634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8634u;
        // 0x2c8638: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8634) {
            ctx->pc = 0x2C8640u;
            goto label_2c8640;
        }
    }
    ctx->pc = 0x2C863Cu;
    // 0x2c863c: 0xa663003c  sh          $v1, 0x3C($s3)
    ctx->pc = 0x2c863cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 3));
label_2c8640:
    // 0x2c8640: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c8644: 0x90660063  lbu         $a2, 0x63($v1)
    ctx->pc = 0x2c8644u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 99)));
    // 0x2c8648: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8648u;
    {
        const bool branch_taken_0x2c8648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8648u;
        // 0x2c864c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8648) {
            ctx->pc = 0x2C8660u;
            goto label_2c8660;
        }
    }
    ctx->pc = 0x2C8650u;
    // 0x2c8650: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2C8650u;
    SET_GPR_U32(ctx, 31, 0x2C8658u);
    ctx->pc = 0x2C8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8650u;
    // 0x2c8654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2C8650u, 0x2C8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8658u;
label_2c8658:
    // 0x2c8658: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8658u;
    {
        const bool branch_taken_0x2c8658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8658) {
            ctx->pc = 0x2C8680u;
            goto label_2c8680;
        }
    }
    ctx->pc = 0x2C8660u;
label_2c8660:
    // 0x2c8660: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c8664: 0x24635920  addiu       $v1, $v1, 0x5920
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22816));
    // 0x2c8668: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c8668u;
    { uint32_t bits = FAST_READ32(0x4E5920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c866c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c866cu;
    { uint32_t bits = FAST_READ32(0x4E5924u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8670: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c8670u;
    { uint32_t bits = FAST_READ32(0x4E5928u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8674: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2c8674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2c8678: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2c8678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2c867c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2c867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2c8680:
    // 0x2c8680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c868c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c868cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8694: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8694u;
        // 0x2c8698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C869Cu;
}
