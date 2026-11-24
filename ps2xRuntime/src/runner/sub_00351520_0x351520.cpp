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

// Function: sub_00351520
// Address: 0x351520 - 0x351684
void sub_00351520_0x351520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351520_0x351520");
#endif

    switch (ctx->pc) {
        case 0x35153cu: goto label_35153c;
        case 0x351548u: goto label_351548;
        case 0x3515e4u: goto label_3515e4;
        case 0x3515f0u: goto label_3515f0;
        case 0x35162cu: goto label_35162c;
        case 0x351640u: goto label_351640;
        default: break;
    }

    ctx->pc = 0x351520u;

    // 0x351520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x351520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x351524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x351524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x351528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35152c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x351530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351534: 0xc0d4528  jal         func_3514A0
    ctx->pc = 0x351534u;
    SET_GPR_U32(ctx, 31, 0x35153Cu);
    ctx->pc = 0x351538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351534u;
    // 0x351538: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3514A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3514A0u, 0x351534u, 0x35153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35153Cu;
label_35153c:
    // 0x35153c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x35153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x351540: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x351540u;
    {
        const bool branch_taken_0x351540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351540) {
            ctx->pc = 0x3515B0u;
            goto label_3515b0;
        }
    }
    ctx->pc = 0x351548u;
label_351548:
    // 0x351548: 0x82230014  lb          $v1, 0x14($s1)
    ctx->pc = 0x351548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x35154c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x35154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351550: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x351554: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x351554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x351558: 0x82230014  lb          $v1, 0x14($s1)
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x35155c: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x35155cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x351560: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x351560u;
    {
        const bool branch_taken_0x351560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x351560) {
            ctx->pc = 0x351590u;
            goto label_351590;
        }
    }
    ctx->pc = 0x351568u;
    // 0x351568: 0x82220016  lb          $v0, 0x16($s1)
    ctx->pc = 0x351568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x35156c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351570: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x351570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x351574: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x351574u;
    {
        const bool branch_taken_0x351574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351574) {
            ctx->pc = 0x351590u;
            goto label_351590;
        }
    }
    ctx->pc = 0x35157Cu;
    // 0x35157c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351580: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x351580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x351584: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x351584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x351588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x351588u;
    {
        const bool branch_taken_0x351588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351588u;
        // 0x35158c: 0xa062000a  sb          $v0, 0xA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351588) {
            ctx->pc = 0x3515A0u;
            goto label_3515a0;
        }
    }
    ctx->pc = 0x351590u;
label_351590:
    // 0x351590: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351594: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x351594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x351598: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x351598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35159c: 0xa062000a  sb          $v0, 0xA($v1)
    ctx->pc = 0x35159cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 2));
label_3515a0:
    // 0x3515a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3515a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3515a4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3515A4u;
    {
        const bool branch_taken_0x3515a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3515A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515A4u;
        // 0x3515a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515a4) {
            ctx->pc = 0x351548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351548;
        }
    }
    ctx->pc = 0x3515ACu;
    // 0x3515ac: 0x0  nop
    ctx->pc = 0x3515acu;
    // NOP
label_3515b0:
    // 0x3515b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3515b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3515b4: 0x24428200  addiu       $v0, $v0, -0x7E00
    ctx->pc = 0x3515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
    // 0x3515b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3515b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3515bc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3515bcu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x658200u));
    // 0x3515c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3515c0u;
    { uint32_t bits = FAST_READ32(0x658208u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3515c4: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x3515c4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x65820Cu));
    // 0x3515c8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3515c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3515cc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3515ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3515d0: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x3515d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3515d4: 0x82250014  lb          $a1, 0x14($s1)
    ctx->pc = 0x3515d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3515d8: 0x82300015  lb          $s0, 0x15($s1)
    ctx->pc = 0x3515d8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x3515dc: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x3515DCu;
    SET_GPR_U32(ctx, 31, 0x3515E4u);
    ctx->pc = 0x3515E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515DCu;
    // 0x3515e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x3515DCu, 0x3515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515E4u;
label_3515e4:
    // 0x3515e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3515E4u;
    {
        const bool branch_taken_0x3515e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3515e4) {
            ctx->pc = 0x351620u;
            goto label_351620;
        }
    }
    ctx->pc = 0x3515ECu;
    // 0x3515ec: 0x0  nop
    ctx->pc = 0x3515ecu;
    // NOP
label_3515f0:
    // 0x3515f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3515f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3515f4: 0xa470000e  sh          $s0, 0xE($v1)
    ctx->pc = 0x3515f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x3515f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3515f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3515fc: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x3515fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x351600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351604: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x351604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x351608: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x351608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35160c: 0x84630030  lh          $v1, 0x30($v1)
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x351610: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x351614: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x351614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x351618: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x351618u;
    {
        const bool branch_taken_0x351618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351618u;
        // 0x35161c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351618) {
            ctx->pc = 0x3515F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3515f0;
        }
    }
    ctx->pc = 0x351620u;
label_351620:
    // 0x351620: 0x82250014  lb          $a1, 0x14($s1)
    ctx->pc = 0x351620u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x351624: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x351624u;
    SET_GPR_U32(ctx, 31, 0x35162Cu);
    ctx->pc = 0x351628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351624u;
    // 0x351628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x351624u, 0x35162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35162Cu;
label_35162c:
    // 0x35162c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35162Cu;
    {
        const bool branch_taken_0x35162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35162c) {
            ctx->pc = 0x351670u;
            goto label_351670;
        }
    }
    ctx->pc = 0x351634u;
    // 0x351634: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x351634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x351638: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x351638u;
    {
        const bool branch_taken_0x351638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351638u;
        // 0x35163c: 0x82240015  lb          $a0, 0x15($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351638) {
            ctx->pc = 0x351670u;
            goto label_351670;
        }
    }
    ctx->pc = 0x351640u;
label_351640:
    // 0x351640: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x351640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x351644: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x351644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x351648: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35164c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x35164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x351650: 0x84630030  lh          $v1, 0x30($v1)
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x351654: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x351654u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x351658: 0xa4c3000e  sh          $v1, 0xE($a2)
    ctx->pc = 0x351658u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x35165c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35165cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x351660: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x351660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x351664: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x351664u;
    {
        const bool branch_taken_0x351664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x351668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351664u;
        // 0x351668: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351664) {
            ctx->pc = 0x351640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351640;
        }
    }
    ctx->pc = 0x35166Cu;
    // 0x35166c: 0x0  nop
    ctx->pc = 0x35166cu;
    // NOP
label_351670:
    // 0x351670: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x351670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35167c: 0x3e00008  jr          $ra
    ctx->pc = 0x35167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35167Cu;
        // 0x351680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351684u;
}
