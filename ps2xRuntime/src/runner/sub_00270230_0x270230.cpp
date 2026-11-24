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

// Function: sub_00270230
// Address: 0x270230 - 0x2705f8
void sub_00270230_0x270230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270230_0x270230");
#endif

    switch (ctx->pc) {
        case 0x27028cu: goto label_27028c;
        case 0x2702a0u: goto label_2702a0;
        case 0x270374u: goto label_270374;
        case 0x270490u: goto label_270490;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704f8u: goto label_2704f8;
        case 0x27050cu: goto label_27050c;
        case 0x27054cu: goto label_27054c;
        case 0x270598u: goto label_270598;
        case 0x2705c4u: goto label_2705c4;
        default: break;
    }

    ctx->pc = 0x270230u;

    // 0x270230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x270234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x270234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x270238: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x270238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27023c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x270240: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x270240u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270244: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x270244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x270248: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x270248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27024c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x270250: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x270250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270254: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x270258: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x270258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27025c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x270260: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x270260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x270264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270268: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x270268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27026c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270270: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x270270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270278: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x270278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27027c: 0xa3aa00df  sb          $t2, 0xDF($sp)
    ctx->pc = 0x27027cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 10));
    // 0x270280: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x270280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x270284: 0xc05e360  jal         func_178D80
    ctx->pc = 0x270284u;
    SET_GPR_U32(ctx, 31, 0x27028Cu);
    ctx->pc = 0x270288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270284u;
    // 0x270288: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x270284u, 0x27028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27028Cu;
label_27028c:
    // 0x27028c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x27028cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x270290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270294: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x270294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x270298: 0xc05e360  jal         func_178D80
    ctx->pc = 0x270298u;
    SET_GPR_U32(ctx, 31, 0x2702A0u);
    ctx->pc = 0x27029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270298u;
    // 0x27029c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x270298u, 0x2702A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702A0u;
label_2702a0:
    // 0x2702a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2702a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702a4: 0x122000c8  beqz        $s1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2702A4u;
    {
        const bool branch_taken_0x2702a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702a4) {
            ctx->pc = 0x2705C8u;
            goto label_2705c8;
        }
    }
    ctx->pc = 0x2702ACu;
    // 0x2702ac: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x2702acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2702b0: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x2702b4: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x2702b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x2702b8: 0x32deffff  andi        $fp, $s6, 0xFFFF
    ctx->pc = 0x2702b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2702bc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2702bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2702c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2702c4: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x2702c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x2702c8: 0x26c3fff8  addiu       $v1, $s6, -0x8
    ctx->pc = 0x2702c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
    // 0x2702cc: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2702ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2702d0: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2702d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2702d4: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x2702d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x2702d8: 0x3c034438  lui         $v1, 0x4438
    ctx->pc = 0x2702d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17464 << 16));
    // 0x2702dc: 0x2662fff0  addiu       $v0, $s3, -0x10
    ctx->pc = 0x2702dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x2702e0: 0x34640154  ori         $a0, $v1, 0x154
    ctx->pc = 0x2702e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)340);
    // 0x2702e4: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x2702e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2702e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2702e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2702ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2702ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2702f0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2702f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2702f4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2702f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2702f8: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x2702f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2702fc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2702fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x270300: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x270304: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x270304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x270308: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x270308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27030c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270310: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x270310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x270314: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x270314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x270318: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x270318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x27031c: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x27031cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x270320: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270320u;
    {
        const bool branch_taken_0x270320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270320u;
        // 0x270324: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270320) {
            ctx->pc = 0x270348u;
            goto label_270348;
        }
    }
    ctx->pc = 0x270328u;
    // 0x270328: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x270328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x27032c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x27032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x270330: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x270330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x270334: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x270334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270338: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x27033c: 0x8c220e84  lw          $v0, 0xE84($at)
    ctx->pc = 0x27033cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x270340: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x270340u;
    {
        const bool branch_taken_0x270340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270340u;
        // 0x270344: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270340) {
            ctx->pc = 0x270368u;
            goto label_270368;
        }
    }
    ctx->pc = 0x270348u;
label_270348:
    // 0x270348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x270348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27034c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27034cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x270350: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270354: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x270354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x270358: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x270358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27035c: 0x8c220e84  lw          $v0, 0xE84($at)
    ctx->pc = 0x27035cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x270360: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x270360u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x270364: 0x0  nop
    ctx->pc = 0x270364u;
    // NOP
label_270368:
    // 0x270368: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x270368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x27036c: 0xc095028  jal         func_2540A0
    ctx->pc = 0x27036Cu;
    SET_GPR_U32(ctx, 31, 0x270374u);
    ctx->pc = 0x270370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27036Cu;
    // 0x270370: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540A0u, 0x27036Cu, 0x270374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270374u;
label_270374:
    // 0x270374: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270374u;
    {
        const bool branch_taken_0x270374 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x270378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270374u;
        // 0x270378: 0x29843  sra         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270374) {
            ctx->pc = 0x270384u;
            goto label_270384;
        }
    }
    ctx->pc = 0x27037Cu;
    // 0x27037c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270380: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x270380u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
label_270384:
    // 0x270384: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x270384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x270388: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x27038c: 0x8c280e84  lw          $t0, 0xE84($at)
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x270390: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x270390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270394: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x270394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x270398: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x27039c: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x27039cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2703a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2703a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2703a4: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x2703a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2703a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2703a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2703ac: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x2703acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x2703b0: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x2703b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x2703b4: 0xc42823  subu        $a1, $a2, $a0
    ctx->pc = 0x2703b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2703b8: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x2703b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2703bc: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x2703bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2703c0: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x2703c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2703c4: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x2703c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2703c8: 0xb22023  subu        $a0, $a1, $s2
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2703cc: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x2703ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2703d0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2703d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2703d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2703d8: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x2703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2703dc: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x2703dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x2703e0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2703e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2703e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2703e8: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x2703e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2703ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2703ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2703f0: 0xae270020  sw          $a3, 0x20($s1)
    ctx->pc = 0x2703f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 7));
    // 0x2703f4: 0x2491821  addu        $v1, $s2, $t1
    ctx->pc = 0x2703f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x2703f8: 0xae340024  sw          $s4, 0x24($s1)
    ctx->pc = 0x2703f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 20));
    // 0x2703fc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2703fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x270400: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x270404: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x270404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x270408: 0x1321823  subu        $v1, $t1, $s2
    ctx->pc = 0x270408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x27040c: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x27040cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x270410: 0xae260028  sw          $a2, 0x28($s1)
    ctx->pc = 0x270410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
    // 0x270414: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x270414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x270418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27041c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x27041cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x270420: 0xae34002c  sw          $s4, 0x2C($s1)
    ctx->pc = 0x270420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 20));
    // 0x270424: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x270424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x270428: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x270428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27042c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27042cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x270430: 0xae34003c  sw          $s4, 0x3C($s1)
    ctx->pc = 0x270430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 20));
    // 0x270434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x270434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270438: 0x24041ff0  addiu       $a0, $zero, 0x1FF0
    ctx->pc = 0x270438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x27043c: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x27043cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x270440: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x270440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x270444: 0xae340044  sw          $s4, 0x44($s1)
    ctx->pc = 0x270444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 20));
    // 0x270448: 0x24500  sll         $t0, $v0, 20
    ctx->pc = 0x270448u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x27044c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x27044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x270450: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x270450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x270454: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x270454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x270458: 0x35061ff0  ori         $a2, $t0, 0x1FF0
    ctx->pc = 0x270458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8176);
    // 0x27045c: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x27045cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x270460: 0x34430047  ori         $v1, $v0, 0x47
    ctx->pc = 0x270460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x270464: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x270464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x270468: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x27046c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x27046cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x270470: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x270470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x270474: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x270474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x270478: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x270478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x27047c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x27047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x270480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270484: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x270484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270488: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x270488u;
    SET_GPR_U32(ctx, 31, 0x270490u);
    ctx->pc = 0x27048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270488u;
    // 0x27048c: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x270488u, 0x270490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270490u;
label_270490:
    // 0x270490: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x270490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x270494: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x270498: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x270498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x27049c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x27049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2704a0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2704a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2704a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2704a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2704a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2704a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2704ac: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2704b0: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2704b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2704b4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2704b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2704b8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2704B8u;
    SET_GPR_U32(ctx, 31, 0x2704C0u);
    ctx->pc = 0x2704BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704B8u;
    // 0x2704bc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2704B8u, 0x2704C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704C0u;
label_2704c0:
    // 0x2704c0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2704c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2704c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2704c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2704c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2704c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2704cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2704d0: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2704d4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2704d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2704d8: 0x3443004e  ori         $v1, $v0, 0x4E
    ctx->pc = 0x2704d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x2704dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2704dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704e0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2704e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2704e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2704e8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2704e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2704ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2704ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704f0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2704F0u;
    SET_GPR_U32(ctx, 31, 0x2704F8u);
    ctx->pc = 0x2704F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704F0u;
    // 0x2704f4: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2704F0u, 0x2704F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704F8u;
label_2704f8:
    // 0x2704f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2704fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2704fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270500: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x270500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x270504: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x270504u;
    SET_GPR_U32(ctx, 31, 0x27050Cu);
    ctx->pc = 0x270508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270504u;
    // 0x270508: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x270504u, 0x27050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27050Cu;
label_27050c:
    // 0x27050c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x270510: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x270514: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x270514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x270518: 0x3442004e  ori         $v0, $v0, 0x4E
    ctx->pc = 0x270518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x27051c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x270520: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x270520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x270524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270528: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x270528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x27052c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x270530: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x270530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x270534: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x270534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x270538: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x270538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27053c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x27053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x270540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270544: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x270544u;
    SET_GPR_U32(ctx, 31, 0x27054Cu);
    ctx->pc = 0x270548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270544u;
    // 0x270548: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x270544u, 0x27054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27054Cu;
label_27054c:
    // 0x27054c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x27054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x270550: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x270550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x270554: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x270554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x270558: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x270558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27055c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27055cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x270560: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x270560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x270564: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x270564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x270568: 0x3c040410  lui         $a0, 0x410
    ctx->pc = 0x270568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1040 << 16));
    // 0x27056c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x27056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x270570: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x270570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x270574: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x270574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x270578: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x270578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x27057c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270580: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x270580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x270584: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x270584u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x270588: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x27058c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270590: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x270590u;
    SET_GPR_U32(ctx, 31, 0x270598u);
    ctx->pc = 0x270594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270590u;
    // 0x270594: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x270590u, 0x270598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270598u;
label_270598:
    // 0x270598: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x270598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27059c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27059cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2705a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2705a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2705a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2705a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705a8: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2705a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2705ac: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2705acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2705b0: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x2705b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x2705b4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2705b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2705b8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2705b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2705bc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2705BCu;
    SET_GPR_U32(ctx, 31, 0x2705C4u);
    ctx->pc = 0x2705C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705BCu;
    // 0x2705c0: 0xfe000018  sd          $zero, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2705BCu, 0x2705C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C4u;
label_2705c4:
    // 0x2705c4: 0x0  nop
    ctx->pc = 0x2705c4u;
    // NOP
label_2705c8:
    // 0x2705c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2705cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2705ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2705d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2705d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2705d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2705d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2705d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2705d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2705dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2705dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2705e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2705e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2705e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2705e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2705e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2705e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2705ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2705ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2705f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2705F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705F0u;
        // 0x2705f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2705F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2705F8u;
}
