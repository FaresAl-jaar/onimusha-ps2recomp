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

// Function: sub_00285340
// Address: 0x285340 - 0x2858e0
void sub_00285340_0x285340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285340_0x285340");
#endif

    switch (ctx->pc) {
        case 0x2853c8u: goto label_2853c8;
        case 0x285470u: goto label_285470;
        case 0x28578cu: goto label_28578c;
        case 0x28580cu: goto label_28580c;
        case 0x28581cu: goto label_28581c;
        case 0x28582cu: goto label_28582c;
        case 0x285858u: goto label_285858;
        case 0x285868u: goto label_285868;
        case 0x285878u: goto label_285878;
        case 0x285888u: goto label_285888;
        default: break;
    }

    ctx->pc = 0x285340u;

    // 0x285340: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x285340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x285344: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285348: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x285348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28534c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x285350: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285354: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x285354u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285358: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28535c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285364: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x285364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28536c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285374: 0x84840054  lh          $a0, 0x54($a0)
    ctx->pc = 0x285374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x285378: 0x91050018  lbu         $a1, 0x18($t0)
    ctx->pc = 0x285378u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x28537c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x28537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x285380: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285380u;
    {
        const bool branch_taken_0x285380 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x285384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285380u;
        // 0x285384: 0x59082  srl         $s2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285380) {
            ctx->pc = 0x285394u;
            goto label_285394;
        }
    }
    ctx->pc = 0x285388u;
    // 0x285388: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x285388u;
    {
        const bool branch_taken_0x285388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285388) {
            ctx->pc = 0x285394u;
            goto label_285394;
        }
    }
    ctx->pc = 0x285390u;
    // 0x285390: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x285390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_285394:
    // 0x285394: 0x14600146  bnez        $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x285394u;
    {
        const bool branch_taken_0x285394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285394) {
            ctx->pc = 0x2858B0u;
            goto label_2858b0;
        }
    }
    ctx->pc = 0x28539Cu;
    // 0x28539c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x28539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2853a0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2853a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2853a4: 0x10200142  beqz        $at, . + 4 + (0x142 << 2)
    ctx->pc = 0x2853A4u;
    {
        const bool branch_taken_0x2853a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853A4u;
        // 0x2853a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853a4) {
            ctx->pc = 0x2858B0u;
            goto label_2858b0;
        }
    }
    ctx->pc = 0x2853ACu;
    // 0x2853ac: 0x6843c  dsll32      $s0, $a2, 16
    ctx->pc = 0x2853acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2853b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2853b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853b4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2853b4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2853b8: 0x27b500b4  addiu       $s5, $sp, 0xB4
    ctx->pc = 0x2853b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2853bc: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x2853bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2853c0: 0x27b600bc  addiu       $s6, $sp, 0xBC
    ctx->pc = 0x2853c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2853c4: 0x0  nop
    ctx->pc = 0x2853c4u;
    // NOP
label_2853c8:
    // 0x2853c8: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x2853c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x2853cc: 0x14600132  bnez        $v1, . + 4 + (0x132 << 2)
    ctx->pc = 0x2853CCu;
    {
        const bool branch_taken_0x2853cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2853cc) {
            ctx->pc = 0x285898u;
            goto label_285898;
        }
    }
    ctx->pc = 0x2853D4u;
    // 0x2853d4: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x2853d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2853d8: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2853dc: 0x1483012e  bne         $a0, $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x2853DCu;
    {
        const bool branch_taken_0x2853dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2853dc) {
            ctx->pc = 0x285898u;
            goto label_285898;
        }
    }
    ctx->pc = 0x2853E4u;
    // 0x2853e4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2853e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2853e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2853e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2853ec: 0x8683001e  lh          $v1, 0x1E($s4)
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x2853f0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2853f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2853f4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2853f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2853f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2853fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2853fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285400: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285404: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x285404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285408: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x285408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x28540c: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x285410: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x285410u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x285414: 0x0  nop
    ctx->pc = 0x285414u;
    // NOP
    // 0x285418: 0x0  nop
    ctx->pc = 0x285418u;
    // NOP
    // 0x28541c: 0x1810  mfhi        $v1
    ctx->pc = 0x28541cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x285420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285424: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x285424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x285428: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x285428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x28542c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28542Cu;
    {
        const bool branch_taken_0x28542c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x285430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28542Cu;
        // 0x285430: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28542c) {
            ctx->pc = 0x28543Cu;
            goto label_28543c;
        }
    }
    ctx->pc = 0x285434u;
    // 0x285434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285434u;
    {
        const bool branch_taken_0x285434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285434u;
        // 0x285438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285434) {
            ctx->pc = 0x28544Cu;
            goto label_28544c;
        }
    }
    ctx->pc = 0x28543Cu;
label_28543c:
    // 0x28543c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28543Cu;
    {
        const bool branch_taken_0x28543c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28543c) {
            ctx->pc = 0x28544Cu;
            goto label_28544c;
        }
    }
    ctx->pc = 0x285444u;
    // 0x285444: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x285444u;
    {
        const bool branch_taken_0x285444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285444u;
        // 0x285448: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285444) {
            ctx->pc = 0x28544Cu;
            goto label_28544c;
        }
    }
    ctx->pc = 0x28544Cu;
label_28544c:
    // 0x28544c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x28544cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x285450: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x285450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x285454: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x285454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x285458: 0x2686000c  addiu       $a2, $s4, 0xC
    ctx->pc = 0x285458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x28545c: 0x2687000e  addiu       $a3, $s4, 0xE
    ctx->pc = 0x28545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x285460: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x285464: 0x26890014  addiu       $t1, $s4, 0x14
    ctx->pc = 0x285464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x285468: 0xc096da0  jal         func_25B680
    ctx->pc = 0x285468u;
    SET_GPR_U32(ctx, 31, 0x285470u);
    ctx->pc = 0x28546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285468u;
    // 0x28546c: 0xa6200008  sh          $zero, 0x8($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x285468u, 0x285470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285470u;
label_285470:
    // 0x285470: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x285470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x285474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285478: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x285478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x28547c: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x28547cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285480: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285484: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x285484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28548c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28548cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285490: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285494: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x285494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28549c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28549cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2854a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2854a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2854a4: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x2854a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x2854a8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2854a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2854ac: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2854acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2854b0: 0xc6840020  lwc1        $f4, 0x20($s4)
    ctx->pc = 0x2854b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2854b4: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x2854b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2854b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2854bc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2854bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2854c0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2854c4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2854c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2854C8u;
    {
        const bool branch_taken_0x2854c8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c8) {
            ctx->pc = 0x2854DCu;
            goto label_2854dc;
        }
    }
    ctx->pc = 0x2854D0u;
    // 0x2854d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2854d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2854d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2854D4u;
    {
        const bool branch_taken_0x2854d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854D4u;
        // 0x2854d8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854d4) {
            ctx->pc = 0x2854F8u;
            goto label_2854f8;
        }
    }
    ctx->pc = 0x2854DCu;
label_2854dc:
    // 0x2854dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2854e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2854e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2854e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2854e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2854e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2854e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2854ec: 0x0  nop
    ctx->pc = 0x2854ecu;
    // NOP
    // 0x2854f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2854f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2854f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2854f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2854f8:
    // 0x2854f8: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x2854fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2854fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x285500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285508: 0x0  nop
    ctx->pc = 0x285508u;
    // NOP
    // 0x28550c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28550cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x285510: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x285510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x285514: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x285514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x285518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28551c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28551Cu;
    {
        const bool branch_taken_0x28551c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28551Cu;
        // 0x285520: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28551c) {
            ctx->pc = 0x285528u;
            goto label_285528;
        }
    }
    ctx->pc = 0x285524u;
    // 0x285524: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x285524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_285528:
    // 0x285528: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x285528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28552c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285530: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285534: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x285534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285538: 0xc6840028  lwc1        $f4, 0x28($s4)
    ctx->pc = 0x285538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28553c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28553cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285544: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285548: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28554c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28554cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285550: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285550u;
    {
        const bool branch_taken_0x285550 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285550u;
        // 0x285554: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285550) {
            ctx->pc = 0x285564u;
            goto label_285564;
        }
    }
    ctx->pc = 0x285558u;
    // 0x285558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28555c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28555Cu;
    {
        const bool branch_taken_0x28555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28555Cu;
        // 0x285560: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28555c) {
            ctx->pc = 0x285580u;
            goto label_285580;
        }
    }
    ctx->pc = 0x285564u;
label_285564:
    // 0x285564: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x285564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x285568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28556c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285574: 0x0  nop
    ctx->pc = 0x285574u;
    // NOP
    // 0x285578: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x285578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28557c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28557cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_285580:
    // 0x285580: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x285584: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x285584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x285588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28558c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28558cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285590: 0x0  nop
    ctx->pc = 0x285590u;
    // NOP
    // 0x285594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x285594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x285598: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x285598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28559c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x28559cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2855a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2855a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2855a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2855A4u;
    {
        const bool branch_taken_0x2855a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2855A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855A4u;
        // 0x2855a8: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855a4) {
            ctx->pc = 0x2855B0u;
            goto label_2855b0;
        }
    }
    ctx->pc = 0x2855ACu;
    // 0x2855ac: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2855acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2855b0:
    // 0x2855b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2855b4: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x2855b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x2855b8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2855b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x2855bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2855bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2855c0: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x2855c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x2855c4: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x2855c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x2855c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2855cc: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x2855ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x2855d0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2855d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2855d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2855d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2855d8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x2855d8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x2855dc: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x2855dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x2855e0: 0x9282001b  lbu         $v0, 0x1B($s4)
    ctx->pc = 0x2855e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 27)));
    // 0x2855e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2855e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2855e8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2855E8u;
    {
        const bool branch_taken_0x2855e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855E8u;
        // 0x2855ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855e8) {
            ctx->pc = 0x285690u;
            goto label_285690;
        }
    }
    ctx->pc = 0x2855F0u;
    // 0x2855f0: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2855F0u;
    {
        const bool branch_taken_0x2855f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2855f0) {
            ctx->pc = 0x285690u;
            goto label_285690;
        }
    }
    ctx->pc = 0x2855F8u;
    // 0x2855f8: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2855fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285600: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x285600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285604: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x285604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x285608: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x285608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28560c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x285610: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x285610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x285614: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x285614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x285618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28561c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x285620: 0xaf8580e0  sw          $a1, -0x7F20($gp)
    ctx->pc = 0x285620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 5));
    // 0x285624: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285628: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x28562c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x28562cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x285630: 0x0  nop
    ctx->pc = 0x285630u;
    // NOP
    // 0x285634: 0x0  nop
    ctx->pc = 0x285634u;
    // NOP
    // 0x285638: 0x1810  mfhi        $v1
    ctx->pc = 0x285638u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28563c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x28563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x285640: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x285644: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x285644u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x285648: 0x24650400  addiu       $a1, $v1, 0x400
    ctx->pc = 0x285648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x28564c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x28564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x285650: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x285650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x285654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285658: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x285658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28565c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285660: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x285660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x285664: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x285664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285668: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x285668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x28566c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x28566cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x285670: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x285670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285674: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x285674u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x285678: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x285678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x28567c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28567cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x285680: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x285680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x285684: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x285684u;
    {
        const bool branch_taken_0x285684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285684u;
        // 0x285688: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285684) {
            ctx->pc = 0x285780u;
            goto label_285780;
        }
    }
    ctx->pc = 0x28568Cu;
    // 0x28568c: 0x0  nop
    ctx->pc = 0x28568cu;
    // NOP
label_285690:
    // 0x285690: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x285690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285694: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285698: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28569c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28569cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2856a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2856a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2856a4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2856a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2856a8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2856a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2856ac: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2856acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2856b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2856B0u;
    {
        const bool branch_taken_0x2856b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856B0u;
        // 0x2856b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856b0) {
            ctx->pc = 0x2856C4u;
            goto label_2856c4;
        }
    }
    ctx->pc = 0x2856B8u;
    // 0x2856b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2856b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2856bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2856BCu;
    {
        const bool branch_taken_0x2856bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856BCu;
        // 0x2856c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856bc) {
            ctx->pc = 0x2856DCu;
            goto label_2856dc;
        }
    }
    ctx->pc = 0x2856C4u;
label_2856c4:
    // 0x2856c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2856c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2856c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2856c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2856cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2856ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2856d0: 0x0  nop
    ctx->pc = 0x2856d0u;
    // NOP
    // 0x2856d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2856d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2856d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2856d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2856dc:
    // 0x2856dc: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2856e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2856e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2856e4: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2856e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2856e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2856e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2856ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2856f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2856f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2856f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2856f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2856f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2856f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2856fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2856fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x285700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285704: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x285704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x285708: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x285708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x28570c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285710: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x285710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285718: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28571c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285720: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x285720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285724: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285724u;
    {
        const bool branch_taken_0x285724 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285724u;
        // 0x285728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285724) {
            ctx->pc = 0x285738u;
            goto label_285738;
        }
    }
    ctx->pc = 0x28572Cu;
    // 0x28572c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285730: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285730u;
    {
        const bool branch_taken_0x285730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285730u;
        // 0x285734: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285730) {
            ctx->pc = 0x285750u;
            goto label_285750;
        }
    }
    ctx->pc = 0x285738u;
label_285738:
    // 0x285738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28573c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285744: 0x0  nop
    ctx->pc = 0x285744u;
    // NOP
    // 0x285748: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x285748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28574c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28574cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_285750:
    // 0x285750: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x285754: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x285754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x285758: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x285758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x28575c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28575cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285760: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285764: 0x0  nop
    ctx->pc = 0x285764u;
    // NOP
    // 0x285768: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x285768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28576c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28576cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x285770: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285774: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x285774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x285778: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x285778u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28577c: 0x0  nop
    ctx->pc = 0x28577cu;
    // NOP
label_285780:
    // 0x285780: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285784: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x285784u;
    SET_GPR_U32(ctx, 31, 0x28578Cu);
    ctx->pc = 0x285788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285784u;
    // 0x285788: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x285784u, 0x28578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28578Cu;
label_28578c:
    // 0x28578c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285790: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285794: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285798: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x285798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28579c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x28579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2857a0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2857a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2857a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2857a8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2857a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2857ac: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2857acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2857b0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2857b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2857B4u;
    {
        const bool branch_taken_0x2857b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2857B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857B4u;
        // 0x2857b8: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857b4) {
            ctx->pc = 0x2857C8u;
            goto label_2857c8;
        }
    }
    ctx->pc = 0x2857BCu;
    // 0x2857bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2857bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2857c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2857C0u;
    {
        const bool branch_taken_0x2857c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C0u;
        // 0x2857c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857c0) {
            ctx->pc = 0x2857E4u;
            goto label_2857e4;
        }
    }
    ctx->pc = 0x2857C8u;
label_2857c8:
    // 0x2857c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2857c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2857cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2857ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2857d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2857d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2857d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2857d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2857d8: 0x0  nop
    ctx->pc = 0x2857d8u;
    // NOP
    // 0x2857dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2857dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2857e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2857e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2857e4:
    // 0x2857e4: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x2857e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x2857e8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2857ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2857ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2857f0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2857f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2857f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2857f8: 0x0  nop
    ctx->pc = 0x2857f8u;
    // NOP
    // 0x2857fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2857fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x285800: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x285800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x285804: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x285804u;
    SET_GPR_U32(ctx, 31, 0x28580Cu);
    ctx->pc = 0x285808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285804u;
    // 0x285808: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x285804u, 0x28580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28580Cu;
label_28580c:
    // 0x28580c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x28580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x285810: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x285810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285814: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x285814u;
    SET_GPR_U32(ctx, 31, 0x28581Cu);
    ctx->pc = 0x285818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285814u;
    // 0x285818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x285814u, 0x28581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28581Cu;
label_28581c:
    // 0x28581c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x28581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x285820: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x285820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285824: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x285824u;
    SET_GPR_U32(ctx, 31, 0x28582Cu);
    ctx->pc = 0x285828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285824u;
    // 0x285828: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x285824u, 0x28582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28582Cu;
label_28582c:
    // 0x28582c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28582Cu;
    {
        const bool branch_taken_0x28582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28582Cu;
        // 0x285830: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28582c) {
            ctx->pc = 0x285840u;
            goto label_285840;
        }
    }
    ctx->pc = 0x285834u;
    // 0x285834: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x285834u;
    {
        const bool branch_taken_0x285834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285834u;
        // 0x285838: 0xa6230008  sh          $v1, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285834) {
            ctx->pc = 0x285898u;
            goto label_285898;
        }
    }
    ctx->pc = 0x28583Cu;
    // 0x28583c: 0x0  nop
    ctx->pc = 0x28583cu;
    // NOP
label_285840:
    // 0x285840: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x285840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x285844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x285844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285848: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28584c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x28584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x285850: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x285850u;
    SET_GPR_U32(ctx, 31, 0x285858u);
    ctx->pc = 0x285854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285850u;
    // 0x285854: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x285850u, 0x285858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285858u;
label_285858:
    // 0x285858: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28585c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x28585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x285860: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x285860u;
    SET_GPR_U32(ctx, 31, 0x285868u);
    ctx->pc = 0x285864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285860u;
    // 0x285864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x285860u, 0x285868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285868u;
label_285868:
    // 0x285868: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x285868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28586c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x285870: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x285870u;
    SET_GPR_U32(ctx, 31, 0x285878u);
    ctx->pc = 0x285874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285870u;
    // 0x285874: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x285870u, 0x285878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285878u;
label_285878:
    // 0x285878: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28587c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x285880: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x285880u;
    SET_GPR_U32(ctx, 31, 0x285888u);
    ctx->pc = 0x285884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285880u;
    // 0x285884: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x285880u, 0x285888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285888u;
label_285888:
    // 0x285888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28588c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x285890: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x285890u;
    {
        const bool branch_taken_0x285890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285890u;
        // 0x285894: 0xa223000f  sb          $v1, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285890) {
            ctx->pc = 0x2858B0u;
            goto label_2858b0;
        }
    }
    ctx->pc = 0x285898u;
label_285898:
    // 0x285898: 0x92830018  lbu         $v1, 0x18($s4)
    ctx->pc = 0x285898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x28589c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2858a0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2858a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2858a4: 0x1460fec8  bnez        $v1, . + 4 + (-0x138 << 2)
    ctx->pc = 0x2858A4u;
    {
        const bool branch_taken_0x2858a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2858A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858A4u;
        // 0x2858a8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858a4) {
            ctx->pc = 0x2853C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2853c8;
        }
    }
    ctx->pc = 0x2858ACu;
    // 0x2858ac: 0x0  nop
    ctx->pc = 0x2858acu;
    // NOP
label_2858b0:
    // 0x2858b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2858b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2858b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2858b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2858b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2858b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2858bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2858bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2858c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2858c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2858c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2858c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2858c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2858c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2858cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2858ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2858d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2858d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2858d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2858d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2858D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D8u;
        // 0x2858dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2858D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2858E0u;
}
