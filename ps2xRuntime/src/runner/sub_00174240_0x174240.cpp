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

// Function: sub_00174240
// Address: 0x174240 - 0x17461c
void sub_00174240_0x174240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174240_0x174240");
#endif

    switch (ctx->pc) {
        case 0x1742e8u: goto label_1742e8;
        case 0x174304u: goto label_174304;
        case 0x174370u: goto label_174370;
        case 0x1743d8u: goto label_1743d8;
        case 0x174448u: goto label_174448;
        case 0x174458u: goto label_174458;
        case 0x174474u: goto label_174474;
        case 0x174588u: goto label_174588;
        default: break;
    }

    ctx->pc = 0x174240u;

    // 0x174240: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x174240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x174244: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x174244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x174248: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x174248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17424c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x174250: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x174250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x174254: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x174254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x174258: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x174258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17425c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x174260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17426c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17426cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x174270: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x174274: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x174274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x174278: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x174278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17427c: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x17427cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x174280: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x174280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x174284: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174288: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x174288u;
    {
        const bool branch_taken_0x174288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174288u;
        // 0x17428c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174288) {
            ctx->pc = 0x1745E8u;
            goto label_1745e8;
        }
    }
    ctx->pc = 0x174290u;
    // 0x174290: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x174290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x174294: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x174294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x174298: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x174298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x17429c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x17429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1742a0: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x1742a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1742a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742a8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1742a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1742ac: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1742b0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1742b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1742b4: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1742b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1742b8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1742b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1742bc: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x1742bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1742c0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1742c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1742c4: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1742c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1742c8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1742c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1742cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1742d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1742d4: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1742d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1742dc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1742dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1742e0: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
    ctx->pc = 0x1742E0u;
    {
        const bool branch_taken_0x1742e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742E0u;
        // 0x1742e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742e0) {
            ctx->pc = 0x1745D0u;
            goto label_1745d0;
        }
    }
    ctx->pc = 0x1742E8u;
label_1742e8:
    // 0x1742e8: 0x16c00015  bnez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1742E8u;
    {
        const bool branch_taken_0x1742e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1742e8) {
            ctx->pc = 0x174340u;
            goto label_174340;
        }
    }
    ctx->pc = 0x1742F0u;
    // 0x1742f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1742f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1742f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1742f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1742fc: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x1742FCu;
    SET_GPR_U32(ctx, 31, 0x174304u);
    ctx->pc = 0x174300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742FCu;
    // 0x174300: 0x34640040  ori         $a0, $v1, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x1742FCu, 0x174304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174304u;
label_174304:
    // 0x174304: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x174304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174308: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x174308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17430c: 0x92b70023  lbu         $s7, 0x23($s5)
    ctx->pc = 0x17430cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x174310: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174314: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x174318: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x174318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17431c: 0x2e31018  mult        $v0, $s7, $v1
    ctx->pc = 0x17431cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174320: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x174320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x174324: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x174324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174328: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x174328u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x17432c: 0x0  nop
    ctx->pc = 0x17432cu;
    // NOP
    // 0x174330: 0x0  nop
    ctx->pc = 0x174330u;
    // NOP
    // 0x174334: 0xf012  mflo        $fp
    ctx->pc = 0x174334u;
    SET_GPR_U64(ctx, 30, ctx->lo);
    // 0x174338: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x174338u;
    {
        const bool branch_taken_0x174338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174338) {
            ctx->pc = 0x174440u;
            goto label_174440;
        }
    }
    ctx->pc = 0x174340u;
label_174340:
    // 0x174340: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x174340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174348: 0x16c2001b  bne         $s6, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x174348u;
    {
        const bool branch_taken_0x174348 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x174348) {
            ctx->pc = 0x1743B8u;
            goto label_1743b8;
        }
    }
    ctx->pc = 0x174350u;
    // 0x174350: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x174354: 0x26c4fffe  addiu       $a0, $s6, -0x2
    ctx->pc = 0x174354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
    // 0x174358: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17435c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x174360: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x174360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x174364: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x174364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174368: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x174368u;
    SET_GPR_U32(ctx, 31, 0x174370u);
    ctx->pc = 0x17436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174368u;
    // 0x17436c: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x174368u, 0x174370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174370u;
label_174370:
    // 0x174370: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x174374: 0x92a40023  lbu         $a0, 0x23($s5)
    ctx->pc = 0x174374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x174378: 0x905e0001  lbu         $fp, 0x1($v0)
    ctx->pc = 0x174378u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17437c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174380: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x174380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x174384: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x174384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x174388: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x17438c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x17438cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174390: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x174390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174394: 0x73d61018  mult1       $v0, $fp, $s6
    ctx->pc = 0x174394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 22); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174398: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17439c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1743a0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1743a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1743a4: 0x0  nop
    ctx->pc = 0x1743a4u;
    // NOP
    // 0x1743a8: 0x0  nop
    ctx->pc = 0x1743a8u;
    // NOP
    // 0x1743ac: 0xb812  mflo        $s7
    ctx->pc = 0x1743acu;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1743b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1743B0u;
    {
        const bool branch_taken_0x1743b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743b0) {
            ctx->pc = 0x174440u;
            goto label_174440;
        }
    }
    ctx->pc = 0x1743B8u;
label_1743b8:
    // 0x1743b8: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x1743b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1743bc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1743bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1743c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1743c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1743c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1743c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1743c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1743cc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1743ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1743d0: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x1743D0u;
    SET_GPR_U32(ctx, 31, 0x1743D8u);
    ctx->pc = 0x1743D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743D0u;
    // 0x1743d4: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x1743D0u, 0x1743D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743D8u;
label_1743d8:
    // 0x1743d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1743d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1743dc: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1743dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1743e0: 0x92a60023  lbu         $a2, 0x23($s5)
    ctx->pc = 0x1743e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x1743e4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x1743e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1743e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1743e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1743ec: 0x562823  subu        $a1, $v0, $s6
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1743f0: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1743f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1743f4: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x1743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x1743f8: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1743f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x1743fc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1743fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174400: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x174400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x174404: 0x70f61018  mult1       $v0, $a3, $s6
    ctx->pc = 0x174404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 22); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174408: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x174408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17440c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x174410: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174414: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x174414u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x174418: 0x0  nop
    ctx->pc = 0x174418u;
    // NOP
    // 0x17441c: 0x0  nop
    ctx->pc = 0x17441cu;
    // NOP
    // 0x174420: 0xb812  mflo        $s7
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x174424: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x174424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174428: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x174428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17442c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x174430: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x174430u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x174434: 0x0  nop
    ctx->pc = 0x174434u;
    // NOP
    // 0x174438: 0x0  nop
    ctx->pc = 0x174438u;
    // NOP
    // 0x17443c: 0xf012  mflo        $fp
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_174440:
    // 0x174440: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x174440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174444: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174448:
    // 0x174448: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17444c: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x17444cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x174450: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x174450u;
    SET_GPR_U32(ctx, 31, 0x174458u);
    ctx->pc = 0x174454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174450u;
    // 0x174454: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x174450u, 0x174458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174458u;
label_174458:
    // 0x174458: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x174458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17445c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x17445cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x174460: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x174460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x174464: 0x34a40100  ori         $a0, $a1, 0x100
    ctx->pc = 0x174464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x174468: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x174468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x17446c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x17446Cu;
    SET_GPR_U32(ctx, 31, 0x174474u);
    ctx->pc = 0x174470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17446Cu;
    // 0x174470: 0x34a702a0  ori         $a3, $a1, 0x2A0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x17446Cu, 0x174474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174474u;
label_174474:
    // 0x174474: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x174474u;
    {
        const bool branch_taken_0x174474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174474u;
        // 0x174478: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174474) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x17447Cu;
    // 0x17447c: 0x3c022838  lui         $v0, 0x2838
    ctx->pc = 0x17447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10296 << 16));
    // 0x174480: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x174480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x174484: 0x34420154  ori         $v0, $v0, 0x154
    ctx->pc = 0x174484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x174488: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x174488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17448c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x17448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x174490: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x174494: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x174498: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17449c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1744a0: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x1744a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1744a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1744a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1744a8: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x1744a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x1744ac: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1744b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1744b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744b4: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x1744b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x1744b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1744b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1744bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1744bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1744c0: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x1744c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x1744c4: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1744c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1744c8: 0x0  nop
    ctx->pc = 0x1744c8u;
    // NOP
    // 0x1744cc: 0x0  nop
    ctx->pc = 0x1744ccu;
    // NOP
    // 0x1744d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1744d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1744d4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1744d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1744d8: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x1744d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1744dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1744e0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1744e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1744e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1744e8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1744e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1744ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1744f0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1744f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1744f4: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x1744f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1744f8: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x1744f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1744fc: 0xa6330026  sh          $s3, 0x26($s1)
    ctx->pc = 0x1744fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 19));
    // 0x174500: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x174504: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x174504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x174508: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17450c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x17450cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x174510: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x174510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x174514: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174518: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x174518u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x17451c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x17451cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x174520: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174524: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x174524u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174528: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x174528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x17452c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17452cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174530: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x174530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x174534: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x174534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17453c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x174540: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x174540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174544: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x174544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x174548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x174548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17454c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17454cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x174550: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x174550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x174554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x174558: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x174558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17455c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174560: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x174564: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x174564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x174568: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x17456c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17456cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x174570: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x174570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x174574: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x174574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x174578: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x174578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x17457c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x174580: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x174580u;
    SET_GPR_U32(ctx, 31, 0x174588u);
    ctx->pc = 0x174584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174580u;
    // 0x174584: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x174580u, 0x174588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174588u;
label_174588:
    // 0x174588: 0x96a3002a  lhu         $v1, 0x2A($s5)
    ctx->pc = 0x174588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x17458c: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x17458cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x174590: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x174594: 0x0  nop
    ctx->pc = 0x174594u;
    // NOP
label_174598:
    // 0x174598: 0x3c033d08  lui         $v1, 0x3D08
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
    // 0x17459c: 0x34636595  ori         $v1, $v1, 0x6595
    ctx->pc = 0x17459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26005);
    // 0x1745a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1745a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1745a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745a8: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x1745ac: 0x2e83000a  sltiu       $v1, $s4, 0xA
    ctx->pc = 0x1745acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1745b0: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1745B0u;
    {
        const bool branch_taken_0x1745b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1745B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745B0u;
        // 0x1745b4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745b0) {
            ctx->pc = 0x174448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174448;
        }
    }
    ctx->pc = 0x1745B8u;
    // 0x1745b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1745b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1745bc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1745bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1745c0: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1745c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1745c4: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x1745C4u;
    {
        const bool branch_taken_0x1745c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1745c4) {
            ctx->pc = 0x1742E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1742e8;
        }
    }
    ctx->pc = 0x1745CCu;
    // 0x1745cc: 0x0  nop
    ctx->pc = 0x1745ccu;
    // NOP
label_1745d0:
    // 0x1745d0: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x1745d4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1745d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1745d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1745dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1745dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1745e0: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x1745e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x1745e4: 0x0  nop
    ctx->pc = 0x1745e4u;
    // NOP
label_1745e8:
    // 0x1745e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1745e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1745ec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1745ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1745f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1745f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1745f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1745f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1745f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1745f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1745fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1745fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174600: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x174600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174604: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x174604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174608: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17460c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17460cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174614: 0x3e00008  jr          $ra
    ctx->pc = 0x174614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174614u;
        // 0x174618: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17461Cu;
}
