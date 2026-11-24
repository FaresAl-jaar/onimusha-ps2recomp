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

// Function: sub_003C2320
// Address: 0x3c2320 - 0x3c273c
void sub_003C2320_0x3c2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2320_0x3c2320");
#endif

    switch (ctx->pc) {
        case 0x3c23b4u: goto label_3c23b4;
        case 0x3c23c8u: goto label_3c23c8;
        case 0x3c241cu: goto label_3c241c;
        case 0x3c2448u: goto label_3c2448;
        case 0x3c2490u: goto label_3c2490;
        case 0x3c24a0u: goto label_3c24a0;
        case 0x3c2568u: goto label_3c2568;
        case 0x3c2580u: goto label_3c2580;
        case 0x3c25bcu: goto label_3c25bc;
        case 0x3c25ccu: goto label_3c25cc;
        case 0x3c2600u: goto label_3c2600;
        case 0x3c2610u: goto label_3c2610;
        case 0x3c267cu: goto label_3c267c;
        case 0x3c2728u: goto label_3c2728;
        default: break;
    }

    ctx->pc = 0x3c2320u;

    // 0x3c2320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3c2324: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c2324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c2328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c232c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c2330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c2334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c2334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2338: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3c2338u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3c233c: 0x10a300ac  beq         $a1, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3C233Cu;
    {
        const bool branch_taken_0x3c233c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C233Cu;
        // 0x3c2340: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c233c) {
            ctx->pc = 0x3C25F0u;
            goto label_3c25f0;
        }
    }
    ctx->pc = 0x3C2344u;
    // 0x3c2344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c2348: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3C2348u;
    {
        const bool branch_taken_0x3c2348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2348u;
        // 0x3c234c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2348) {
            ctx->pc = 0x3C2570u;
            goto label_3c2570;
        }
    }
    ctx->pc = 0x3C2350u;
    // 0x3c2350: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3C2350u;
    {
        const bool branch_taken_0x3c2350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c2350) {
            ctx->pc = 0x3C23F8u;
            goto label_3c23f8;
        }
    }
    ctx->pc = 0x3C2358u;
    // 0x3c2358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c235c: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C235Cu;
    {
        const bool branch_taken_0x3c235c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c235c) {
            ctx->pc = 0x3C23D8u;
            goto label_3c23d8;
        }
    }
    ctx->pc = 0x3C2364u;
    // 0x3c2364: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2364u;
    {
        const bool branch_taken_0x3c2364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2364) {
            ctx->pc = 0x3C2378u;
            goto label_3c2378;
        }
    }
    ctx->pc = 0x3C236Cu;
    // 0x3c236c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3C236Cu;
    {
        const bool branch_taken_0x3c236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c236c) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C2374u;
    // 0x3c2374: 0x0  nop
    ctx->pc = 0x3c2374u;
    // NOP
label_3c2378:
    // 0x3c2378: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2378u;
    {
        const bool branch_taken_0x3c2378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2378) {
            ctx->pc = 0x3C23C0u;
            goto label_3c23c0;
        }
    }
    ctx->pc = 0x3C2380u;
    // 0x3c2380: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3c2380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3c2384: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c2384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c2388: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3c2388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3c238c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c2390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2394: 0x34455902  ori         $a1, $v0, 0x5902
    ctx->pc = 0x3c2394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
    // 0x3c2398: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3c2398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c239c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c239cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c23a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c23a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c23a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c23a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c23a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c23a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c23ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C23ACu;
    SET_GPR_U32(ctx, 31, 0x3C23B4u);
    ctx->pc = 0x3C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23ACu;
    // 0x3c23b0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C23ACu, 0x3C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23B4u;
label_3c23b4:
    // 0x3c23b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C23B4u;
    {
        const bool branch_taken_0x3c23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c23b4) {
            ctx->pc = 0x3C23C8u;
            goto label_3c23c8;
        }
    }
    ctx->pc = 0x3C23BCu;
    // 0x3c23bc: 0x0  nop
    ctx->pc = 0x3c23bcu;
    // NOP
label_3c23c0:
    // 0x3c23c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C23C0u;
    SET_GPR_U32(ctx, 31, 0x3C23C8u);
    ctx->pc = 0x3C23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23C0u;
    // 0x3c23c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C23C0u, 0x3C23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23C8u;
label_3c23c8:
    // 0x3c23c8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3c23c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3c23cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c23d0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3C23D0u;
    {
        const bool branch_taken_0x3c23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23D0u;
        // 0x3c23d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23d0) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C23D8u;
label_3c23d8:
    // 0x3c23d8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3c23d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3c23dc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3c23dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c23e0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3c23e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c23e4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3c23e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c23e8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3c23e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c23ec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3c23ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3c23f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c23f4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3c23f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c23f8:
    // 0x3c23f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c23fc: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3c23fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3c2400: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3c2400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c2404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c2404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c2408: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3c2408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3c240c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c240cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2410: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c2410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c2414: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3C2414u;
    SET_GPR_U32(ctx, 31, 0x3C241Cu);
    ctx->pc = 0x3C2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2414u;
    // 0x3c2418: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3C2414u, 0x3C241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C241Cu;
label_3c241c:
    // 0x3c241c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3c2420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2424: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3c2424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3c2428: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3c2428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c242c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3c242cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3c2430: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3c2430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c2434: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3c2434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c2438: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c2438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c243c: 0x27aa00ac  addiu       $t2, $sp, 0xAC
    ctx->pc = 0x3c243cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x3c2440: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3C2440u;
    SET_GPR_U32(ctx, 31, 0x3C2448u);
    ctx->pc = 0x3C2444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2440u;
    // 0x3c2444: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C2440u, 0x3C2448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2448u;
label_3c2448:
    // 0x3c2448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2448u;
    {
        const bool branch_taken_0x3c2448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2448) {
            ctx->pc = 0x3C2460u;
            goto label_3c2460;
        }
    }
    ctx->pc = 0x3C2450u;
    // 0x3c2450: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c2450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c2454: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c2454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2458: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x3c2458u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
    // 0x3c245c: 0x0  nop
    ctx->pc = 0x3c245cu;
    // NOP
label_3c2460:
    // 0x3c2460: 0x92270574  lbu         $a3, 0x574($s1)
    ctx->pc = 0x3c2460u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c2464: 0xc62e0570  lwc1        $f14, 0x570($s1)
    ctx->pc = 0x3c2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3c2468: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3c2468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3c246c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c246cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2474: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3c2474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c2478: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3c2478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3c247c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3c247cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3c2480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c2480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c2484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2488: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x3C2488u;
    SET_GPR_U32(ctx, 31, 0x3C2490u);
    ctx->pc = 0x3C248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2488u;
    // 0x3c248c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x3C2488u, 0x3C2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2490u;
label_3c2490:
    // 0x3c2490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2490u;
    {
        const bool branch_taken_0x3c2490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2490u;
        // 0x3c2494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2490) {
            ctx->pc = 0x3C24A8u;
            goto label_3c24a8;
        }
    }
    ctx->pc = 0x3C2498u;
    // 0x3c2498: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2498u;
    SET_GPR_U32(ctx, 31, 0x3C24A0u);
    ctx->pc = 0x3C249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2498u;
    // 0x3c249c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2498u, 0x3C24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C24A0u;
label_3c24a0:
    // 0x3c24a0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x3C24A0u;
    {
        const bool branch_taken_0x3c24a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c24a0) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C24A8u;
label_3c24a8:
    // 0x3c24a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C24A8u;
    {
        const bool branch_taken_0x3c24a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c24a8) {
            ctx->pc = 0x3C24C0u;
            goto label_3c24c0;
        }
    }
    ctx->pc = 0x3C24B0u;
    // 0x3c24b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3c24b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3c24b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c24b8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3C24B8u;
    {
        const bool branch_taken_0x3c24b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24B8u;
        // 0x3c24bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24b8) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C24C0u;
label_3c24c0:
    // 0x3c24c0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3c24c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3c24c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C24C4u;
    {
        const bool branch_taken_0x3c24c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24C4u;
        // 0x3c24c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24c4) {
            ctx->pc = 0x3C24D8u;
            goto label_3c24d8;
        }
    }
    ctx->pc = 0x3C24CCu;
    // 0x3c24cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C24CCu;
    {
        const bool branch_taken_0x3c24cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c24cc) {
            ctx->pc = 0x3C2558u;
            goto label_3c2558;
        }
    }
    ctx->pc = 0x3C24D4u;
    // 0x3c24d4: 0x0  nop
    ctx->pc = 0x3c24d4u;
    // NOP
label_3c24d8:
    // 0x3c24d8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3c24d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c24dc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c24e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c24e4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c24e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c24e8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3c24e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3c24ec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C24ECu;
    {
        const bool branch_taken_0x3c24ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c24ec) {
            ctx->pc = 0x3C2528u;
            goto label_3c2528;
        }
    }
    ctx->pc = 0x3C24F4u;
    // 0x3c24f4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3c24f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c24f8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c24f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c24fc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C24FCu;
    {
        const bool branch_taken_0x3c24fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24FCu;
        // 0x3c2500: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24fc) {
            ctx->pc = 0x3C2550u;
            goto label_3c2550;
        }
    }
    ctx->pc = 0x3C2504u;
    // 0x3c2504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2508: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c2508u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c250c: 0x0  nop
    ctx->pc = 0x3c250cu;
    // NOP
    // 0x3c2510: 0x0  nop
    ctx->pc = 0x3c2510u;
    // NOP
    // 0x3c2514: 0x2010  mfhi        $a0
    ctx->pc = 0x3c2514u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c2518: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c2518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c251c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C251Cu;
    {
        const bool branch_taken_0x3c251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C251Cu;
        // 0x3c2520: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c251c) {
            ctx->pc = 0x3C2550u;
            goto label_3c2550;
        }
    }
    ctx->pc = 0x3C2524u;
    // 0x3c2524: 0x0  nop
    ctx->pc = 0x3c2524u;
    // NOP
label_3c2528:
    // 0x3c2528: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3c2528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c252c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c252cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c2530: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C2530u;
    {
        const bool branch_taken_0x3c2530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2530) {
            ctx->pc = 0x3C2550u;
            goto label_3c2550;
        }
    }
    ctx->pc = 0x3C2538u;
    // 0x3c2538: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c2538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c253c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2540: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3c2540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2544u;
    {
        const bool branch_taken_0x3c2544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2544u;
        // 0x3c2548: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2544) {
            ctx->pc = 0x3C2558u;
            goto label_3c2558;
        }
    }
    ctx->pc = 0x3C254Cu;
    // 0x3c254c: 0x0  nop
    ctx->pc = 0x3c254cu;
    // NOP
label_3c2550:
    // 0x3c2550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2554: 0x0  nop
    ctx->pc = 0x3c2554u;
    // NOP
label_3c2558:
    // 0x3c2558: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3C2558u;
    {
        const bool branch_taken_0x3c2558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2558u;
        // 0x3c255c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2558) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C2560u;
    // 0x3c2560: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2560u;
    SET_GPR_U32(ctx, 31, 0x3C2568u);
    ctx->pc = 0x3C2564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2560u;
    // 0x3c2564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2560u, 0x3C2568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2568u;
label_3c2568:
    // 0x3c2568: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3C2568u;
    {
        const bool branch_taken_0x3c2568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2568) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C2570u;
label_3c2570:
    // 0x3c2570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2574: 0xa2220574  sb          $v0, 0x574($s1)
    ctx->pc = 0x3c2574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1396), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2578: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3C2578u;
    SET_GPR_U32(ctx, 31, 0x3C2580u);
    ctx->pc = 0x3C257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2578u;
    // 0x3c257c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3C2578u, 0x3C2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2580u;
label_3c2580:
    // 0x3c2580: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C2580u;
    {
        const bool branch_taken_0x3c2580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2580u;
        // 0x3c2584: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2580) {
            ctx->pc = 0x3C25D0u;
            goto label_3c25d0;
        }
    }
    ctx->pc = 0x3C2588u;
    // 0x3c2588: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3c2588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3c258c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c258cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c2590: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c2590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c2594: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c2598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c259c: 0x34455902  ori         $a1, $v0, 0x5902
    ctx->pc = 0x3c259cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
    // 0x3c25a0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3c25a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c25a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c25a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c25a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c25acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c25b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C25B4u;
    SET_GPR_U32(ctx, 31, 0x3C25BCu);
    ctx->pc = 0x3C25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C25B4u;
    // 0x3c25b8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C25B4u, 0x3C25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C25BCu;
label_3c25bc:
    // 0x3c25bc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3c25bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3c25c0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3c25c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3c25c4: 0xc0aa514  jal         func_2A9450
    ctx->pc = 0x3C25C4u;
    SET_GPR_U32(ctx, 31, 0x3C25CCu);
    ctx->pc = 0x3C25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C25C4u;
    // 0x3c25c8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9450u, 0x3C25C4u, 0x3C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C25CCu;
label_3c25cc:
    // 0x3c25cc: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3c25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_3c25d0:
    // 0x3c25d0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3c25d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3c25d4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3c25d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c25d8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3c25d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c25dc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3c25dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c25e0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3c25e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c25e4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3c25e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3c25e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c25ec: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3c25ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c25f0:
    // 0x3c25f0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3c25f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3c25f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c25f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25f8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3C25F8u;
    SET_GPR_U32(ctx, 31, 0x3C2600u);
    ctx->pc = 0x3C25FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C25F8u;
    // 0x3c25fc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C25F8u, 0x3C2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2600u;
label_3c2600:
    // 0x3c2600: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2600u;
    {
        const bool branch_taken_0x3c2600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2600u;
        // 0x3c2604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2600) {
            ctx->pc = 0x3C2610u;
            goto label_3c2610;
        }
    }
    ctx->pc = 0x3C2608u;
    // 0x3c2608: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2608u;
    SET_GPR_U32(ctx, 31, 0x3C2610u);
    ctx->pc = 0x3C260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2608u;
    // 0x3c260c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2608u, 0x3C2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2610u;
label_3c2610:
    // 0x3c2610: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3c2610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c2614: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C2614u;
    {
        const bool branch_taken_0x3c2614 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3C2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2614u;
        // 0x3c2618: 0x28610024  slti        $at, $v1, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2614) {
            ctx->pc = 0x3C2680u;
            goto label_3c2680;
        }
    }
    ctx->pc = 0x3C261Cu;
    // 0x3c261c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C261Cu;
    {
        const bool branch_taken_0x3c261c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c261c) {
            ctx->pc = 0x3C2680u;
            goto label_3c2680;
        }
    }
    ctx->pc = 0x3C2624u;
    // 0x3c2624: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2628: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x3c2628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3c262c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c262cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3c2630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2634: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c2634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c2638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c2638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c263c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2640: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x3c2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x3c2644: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c2644u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3c2648: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c264c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3c264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3c2650: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c2650u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3c2654: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2658: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3c2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3c265c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c265cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c2660: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c2660u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c2664: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3c2664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3c2668: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c2668u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c266c: 0x92260574  lbu         $a2, 0x574($s1)
    ctx->pc = 0x3c266cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c2670: 0xc62c0570  lwc1        $f12, 0x570($s1)
    ctx->pc = 0x3c2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c2674: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3C2674u;
    SET_GPR_U32(ctx, 31, 0x3C267Cu);
    ctx->pc = 0x3C2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2674u;
    // 0x3c2678: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C2674u, 0x3C267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C267Cu;
label_3c267c:
    // 0x3c267c: 0x0  nop
    ctx->pc = 0x3c267cu;
    // NOP
label_3c2680:
    // 0x3c2680: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3c2680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3c2684: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2684u;
    {
        const bool branch_taken_0x3c2684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2684u;
        // 0x3c2688: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2684) {
            ctx->pc = 0x3C2698u;
            goto label_3c2698;
        }
    }
    ctx->pc = 0x3C268Cu;
    // 0x3c268c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C268Cu;
    {
        const bool branch_taken_0x3c268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c268c) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C2694u;
    // 0x3c2694: 0x0  nop
    ctx->pc = 0x3c2694u;
    // NOP
label_3c2698:
    // 0x3c2698: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3c2698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c269c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c26a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c26a4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c26a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c26a8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3c26a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3c26ac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C26ACu;
    {
        const bool branch_taken_0x3c26ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c26ac) {
            ctx->pc = 0x3C26E8u;
            goto label_3c26e8;
        }
    }
    ctx->pc = 0x3C26B4u;
    // 0x3c26b4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3c26b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c26b8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c26b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c26bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C26BCu;
    {
        const bool branch_taken_0x3c26bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26BCu;
        // 0x3c26c0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c26bc) {
            ctx->pc = 0x3C2710u;
            goto label_3c2710;
        }
    }
    ctx->pc = 0x3C26C4u;
    // 0x3c26c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c26c8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c26c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c26cc: 0x0  nop
    ctx->pc = 0x3c26ccu;
    // NOP
    // 0x3c26d0: 0x0  nop
    ctx->pc = 0x3c26d0u;
    // NOP
    // 0x3c26d4: 0x2010  mfhi        $a0
    ctx->pc = 0x3c26d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c26d8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c26d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c26dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C26DCu;
    {
        const bool branch_taken_0x3c26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26DCu;
        // 0x3c26e0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c26dc) {
            ctx->pc = 0x3C2710u;
            goto label_3c2710;
        }
    }
    ctx->pc = 0x3C26E4u;
    // 0x3c26e4: 0x0  nop
    ctx->pc = 0x3c26e4u;
    // NOP
label_3c26e8:
    // 0x3c26e8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3c26e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3c26ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c26ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c26f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C26F0u;
    {
        const bool branch_taken_0x3c26f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c26f0) {
            ctx->pc = 0x3C2710u;
            goto label_3c2710;
        }
    }
    ctx->pc = 0x3C26F8u;
    // 0x3c26f8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3c26f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c26fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2700: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3c2700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2704u;
    {
        const bool branch_taken_0x3c2704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2704u;
        // 0x3c2708: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2704) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C270Cu;
    // 0x3c270c: 0x0  nop
    ctx->pc = 0x3c270cu;
    // NOP
label_3c2710:
    // 0x3c2710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2714: 0x0  nop
    ctx->pc = 0x3c2714u;
    // NOP
label_3c2718:
    // 0x3c2718: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2718u;
    {
        const bool branch_taken_0x3c2718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2718u;
        // 0x3c271c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2718) {
            ctx->pc = 0x3C2728u;
            goto label_3c2728;
        }
    }
    ctx->pc = 0x3C2720u;
    // 0x3c2720: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2720u;
    SET_GPR_U32(ctx, 31, 0x3C2728u);
    ctx->pc = 0x3C2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2720u;
    // 0x3c2724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2720u, 0x3C2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2728u;
label_3c2728:
    // 0x3c2728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c2728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c272c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c2730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2734: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2734u;
        // 0x3c2738: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C273Cu;
}
