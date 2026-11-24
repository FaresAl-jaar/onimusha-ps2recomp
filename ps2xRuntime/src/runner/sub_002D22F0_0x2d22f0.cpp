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

// Function: sub_002D22F0
// Address: 0x2d22f0 - 0x2d2a24
void sub_002D22F0_0x2d22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D22F0_0x2d22f0");
#endif

    switch (ctx->pc) {
        case 0x2d2314u: goto label_2d2314;
        case 0x2d2368u: goto label_2d2368;
        case 0x2d26b0u: goto label_2d26b0;
        case 0x2d27a0u: goto label_2d27a0;
        default: break;
    }

    ctx->pc = 0x2d22f0u;

    // 0x2d22f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d22f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d22f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d22f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d22fc: 0x9083006e  lbu         $v1, 0x6E($a0)
    ctx->pc = 0x2d22fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 110)));
    // 0x2d2300: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d2300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d2304: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2304u;
    {
        const bool branch_taken_0x2d2304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2304u;
        // 0x2d2308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2304) {
            ctx->pc = 0x2D2320u;
            goto label_2d2320;
        }
    }
    ctx->pc = 0x2D230Cu;
    // 0x2d230c: 0xc0b4550  jal         func_2D1540
    ctx->pc = 0x2D230Cu;
    SET_GPR_U32(ctx, 31, 0x2D2314u);
    ctx->pc = 0x2D1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1540u, 0x2D230Cu, 0x2D2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2314u;
label_2d2314:
    // 0x2d2314: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d2314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d2318: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2d2318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2d231c: 0xa203006e  sb          $v1, 0x6E($s0)
    ctx->pc = 0x2d231cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 3));
label_2d2320:
    // 0x2d2320: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d2320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d2324: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d2324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d2328: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2328u;
    {
        const bool branch_taken_0x2d2328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2328) {
            ctx->pc = 0x2D2350u;
            goto label_2d2350;
        }
    }
    ctx->pc = 0x2D2330u;
    // 0x2d2330: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2d2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2d2334: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x2d2334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x2d2338: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2d2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d233c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x2d233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x2d2340: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d2340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d2344: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x2d2344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x2d2348: 0xa203006e  sb          $v1, 0x6E($s0)
    ctx->pc = 0x2d2348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d234c: 0x0  nop
    ctx->pc = 0x2d234cu;
    // NOP
label_2d2350:
    // 0x2d2350: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d2354: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2d2354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2d2358: 0x1460013d  bnez        $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x2D2358u;
    {
        const bool branch_taken_0x2d2358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2358) {
            ctx->pc = 0x2D2850u;
            goto label_2d2850;
        }
    }
    ctx->pc = 0x2D2360u;
    // 0x2d2360: 0xc0b4344  jal         func_2D0D10
    ctx->pc = 0x2D2360u;
    SET_GPR_U32(ctx, 31, 0x2D2368u);
    ctx->pc = 0x2D2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2360u;
    // 0x2d2364: 0x92040014  lbu         $a0, 0x14($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D10u, 0x2D2360u, 0x2D2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2368u;
label_2d2368:
    // 0x2d2368: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x2d2368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d236c: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x2d236cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d2370: 0xa20300d6  sb          $v1, 0xD6($s0)
    ctx->pc = 0x2d2370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2374: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x2d2374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x2d2378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d237c: 0xa20300d7  sb          $v1, 0xD7($s0)
    ctx->pc = 0x2d237cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2380: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d2380u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2384: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2d2384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d2388: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x2d2388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2d238c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d238cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2394: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d2398: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2398u;
    {
        const bool branch_taken_0x2d2398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2398u;
        // 0x2d239c: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2398) {
            ctx->pc = 0x2D23C0u;
            goto label_2d23c0;
        }
    }
    ctx->pc = 0x2D23A0u;
    // 0x2d23a0: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d23a4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d23a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d23a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D23A8u;
    {
        const bool branch_taken_0x2d23a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23a8) {
            ctx->pc = 0x2D23B4u;
            goto label_2d23b4;
        }
    }
    ctx->pc = 0x2D23B0u;
    // 0x2d23b0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d23b4:
    // 0x2d23b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D23B4u;
    {
        const bool branch_taken_0x2d23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23b4) {
            ctx->pc = 0x2D23F0u;
            goto label_2d23f0;
        }
    }
    ctx->pc = 0x2D23BCu;
    // 0x2d23bc: 0x0  nop
    ctx->pc = 0x2d23bcu;
    // NOP
label_2d23c0:
    // 0x2d23c0: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d23c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d23c4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D23C4u;
    {
        const bool branch_taken_0x2d23c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23C4u;
        // 0x2d23c8: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23c4) {
            ctx->pc = 0x2D23E8u;
            goto label_2d23e8;
        }
    }
    ctx->pc = 0x2D23CCu;
    // 0x2d23cc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d23ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d23d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D23D0u;
    {
        const bool branch_taken_0x2d23d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23d0) {
            ctx->pc = 0x2D23DCu;
            goto label_2d23dc;
        }
    }
    ctx->pc = 0x2D23D8u;
    // 0x2d23d8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d23dc:
    // 0x2d23dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D23DCu;
    {
        const bool branch_taken_0x2d23dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23dc) {
            ctx->pc = 0x2D23F0u;
            goto label_2d23f0;
        }
    }
    ctx->pc = 0x2D23E4u;
    // 0x2d23e4: 0x0  nop
    ctx->pc = 0x2d23e4u;
    // NOP
label_2d23e8:
    // 0x2d23e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d23e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23ec: 0x0  nop
    ctx->pc = 0x2d23ecu;
    // NOP
label_2d23f0:
    // 0x2d23f0: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x2d23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x2d23f4: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d23f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d23f8: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x2d23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2d23fc: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2d2400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d2400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2408: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d240c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D240Cu;
    {
        const bool branch_taken_0x2d240c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D240Cu;
        // 0x2d2410: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d240c) {
            ctx->pc = 0x2D2430u;
            goto label_2d2430;
        }
    }
    ctx->pc = 0x2D2414u;
    // 0x2d2414: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d2414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2418: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d2418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d241c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D241Cu;
    {
        const bool branch_taken_0x2d241c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d241c) {
            ctx->pc = 0x2D2428u;
            goto label_2d2428;
        }
    }
    ctx->pc = 0x2D2424u;
    // 0x2d2424: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2428:
    // 0x2d2428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2428u;
    {
        const bool branch_taken_0x2d2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2428) {
            ctx->pc = 0x2D2460u;
            goto label_2d2460;
        }
    }
    ctx->pc = 0x2D2430u;
label_2d2430:
    // 0x2d2430: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2434: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2434u;
    {
        const bool branch_taken_0x2d2434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2434u;
        // 0x2d2438: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2434) {
            ctx->pc = 0x2D2458u;
            goto label_2d2458;
        }
    }
    ctx->pc = 0x2D243Cu;
    // 0x2d243c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2440: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2440u;
    {
        const bool branch_taken_0x2d2440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2440) {
            ctx->pc = 0x2D244Cu;
            goto label_2d244c;
        }
    }
    ctx->pc = 0x2D2448u;
    // 0x2d2448: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d244c:
    // 0x2d244c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D244Cu;
    {
        const bool branch_taken_0x2d244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d244c) {
            ctx->pc = 0x2D2460u;
            goto label_2d2460;
        }
    }
    ctx->pc = 0x2D2454u;
    // 0x2d2454: 0x0  nop
    ctx->pc = 0x2d2454u;
    // NOP
label_2d2458:
    // 0x2d2458: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d245c: 0x0  nop
    ctx->pc = 0x2d245cu;
    // NOP
label_2d2460:
    // 0x2d2460: 0xae0600e4  sw          $a2, 0xE4($s0)
    ctx->pc = 0x2d2460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 6));
    // 0x2d2464: 0x92030046  lbu         $v1, 0x46($s0)
    ctx->pc = 0x2d2464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2468: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2468u;
    {
        const bool branch_taken_0x2d2468 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2468u;
        // 0x2d246c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2468) {
            ctx->pc = 0x2D247Cu;
            goto label_2d247c;
        }
    }
    ctx->pc = 0x2D2470u;
    // 0x2d2470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2474: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2474u;
    {
        const bool branch_taken_0x2d2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2474u;
        // 0x2d2478: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2474) {
            ctx->pc = 0x2D2494u;
            goto label_2d2494;
        }
    }
    ctx->pc = 0x2D247Cu;
label_2d247c:
    // 0x2d247c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d2480: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d2480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d2484: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d2484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2488: 0x0  nop
    ctx->pc = 0x2d2488u;
    // NOP
    // 0x2d248c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d248cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2490: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d2490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d2494:
    // 0x2d2494: 0x3c03414d  lui         $v1, 0x414D
    ctx->pc = 0x2d2494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16717 << 16));
    // 0x2d2498: 0x8e0600a4  lw          $a2, 0xA4($s0)
    ctx->pc = 0x2d2498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2d249c: 0x346320d2  ori         $v1, $v1, 0x20D2
    ctx->pc = 0x2d249cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8402);
    // 0x2d24a0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2d24a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2d24a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d24a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d24a8: 0x0  nop
    ctx->pc = 0x2d24a8u;
    // NOP
    // 0x2d24ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d24acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d24b0: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d24b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d24b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d24b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d24b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2d24b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d24bc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D24BCu;
    {
        const bool branch_taken_0x2d24bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24BCu;
        // 0x2d24c0: 0xc41823  subu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24bc) {
            ctx->pc = 0x2D24E0u;
            goto label_2d24e0;
        }
    }
    ctx->pc = 0x2D24C4u;
    // 0x2d24c4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d24c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d24c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D24C8u;
    {
        const bool branch_taken_0x2d24c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24c8) {
            ctx->pc = 0x2D24D4u;
            goto label_2d24d4;
        }
    }
    ctx->pc = 0x2D24D0u;
    // 0x2d24d0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d24d4:
    // 0x2d24d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D24D4u;
    {
        const bool branch_taken_0x2d24d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24d4) {
            ctx->pc = 0x2D2510u;
            goto label_2d2510;
        }
    }
    ctx->pc = 0x2D24DCu;
    // 0x2d24dc: 0x0  nop
    ctx->pc = 0x2d24dcu;
    // NOP
label_2d24e0:
    // 0x2d24e0: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d24e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d24e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D24E4u;
    {
        const bool branch_taken_0x2d24e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24E4u;
        // 0x2d24e8: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24e4) {
            ctx->pc = 0x2D2508u;
            goto label_2d2508;
        }
    }
    ctx->pc = 0x2D24ECu;
    // 0x2d24ec: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d24ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d24f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D24F0u;
    {
        const bool branch_taken_0x2d24f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24f0) {
            ctx->pc = 0x2D24FCu;
            goto label_2d24fc;
        }
    }
    ctx->pc = 0x2D24F8u;
    // 0x2d24f8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d24f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d24fc:
    // 0x2d24fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D24FCu;
    {
        const bool branch_taken_0x2d24fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24fc) {
            ctx->pc = 0x2D2510u;
            goto label_2d2510;
        }
    }
    ctx->pc = 0x2D2504u;
    // 0x2d2504: 0x0  nop
    ctx->pc = 0x2d2504u;
    // NOP
label_2d2508:
    // 0x2d2508: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d250c: 0x0  nop
    ctx->pc = 0x2d250cu;
    // NOP
label_2d2510:
    // 0x2d2510: 0xae060104  sw          $a2, 0x104($s0)
    ctx->pc = 0x2d2510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    // 0x2d2514: 0x92030046  lbu         $v1, 0x46($s0)
    ctx->pc = 0x2d2514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2518: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2518u;
    {
        const bool branch_taken_0x2d2518 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2518u;
        // 0x2d251c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2518) {
            ctx->pc = 0x2D252Cu;
            goto label_2d252c;
        }
    }
    ctx->pc = 0x2D2520u;
    // 0x2d2520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2524u;
    {
        const bool branch_taken_0x2d2524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2524u;
        // 0x2d2528: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2524) {
            ctx->pc = 0x2D2544u;
            goto label_2d2544;
        }
    }
    ctx->pc = 0x2D252Cu;
label_2d252c:
    // 0x2d252c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d252cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d2530: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d2530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d2534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d2534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2538: 0x0  nop
    ctx->pc = 0x2d2538u;
    // NOP
    // 0x2d253c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d253cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2540: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d2540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d2544:
    // 0x2d2544: 0x3c03414d  lui         $v1, 0x414D
    ctx->pc = 0x2d2544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16717 << 16));
    // 0x2d2548: 0x8e0600a8  lw          $a2, 0xA8($s0)
    ctx->pc = 0x2d2548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2d254c: 0x346320d2  ori         $v1, $v1, 0x20D2
    ctx->pc = 0x2d254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8402);
    // 0x2d2550: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2d2554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2558: 0x0  nop
    ctx->pc = 0x2d2558u;
    // NOP
    // 0x2d255c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d255cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2560: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d2564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d2568: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2d2568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d256c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D256Cu;
    {
        const bool branch_taken_0x2d256c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D256Cu;
        // 0x2d2570: 0xc41823  subu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d256c) {
            ctx->pc = 0x2D2590u;
            goto label_2d2590;
        }
    }
    ctx->pc = 0x2D2574u;
    // 0x2d2574: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d2574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d2578: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2578u;
    {
        const bool branch_taken_0x2d2578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2578) {
            ctx->pc = 0x2D2584u;
            goto label_2d2584;
        }
    }
    ctx->pc = 0x2D2580u;
    // 0x2d2580: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2584:
    // 0x2d2584: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D2584u;
    {
        const bool branch_taken_0x2d2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2584) {
            ctx->pc = 0x2D25C0u;
            goto label_2d25c0;
        }
    }
    ctx->pc = 0x2D258Cu;
    // 0x2d258c: 0x0  nop
    ctx->pc = 0x2d258cu;
    // NOP
label_2d2590:
    // 0x2d2590: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2594: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2594u;
    {
        const bool branch_taken_0x2d2594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2594u;
        // 0x2d2598: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2594) {
            ctx->pc = 0x2D25B8u;
            goto label_2d25b8;
        }
    }
    ctx->pc = 0x2D259Cu;
    // 0x2d259c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d259cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d25a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D25A0u;
    {
        const bool branch_taken_0x2d25a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25a0) {
            ctx->pc = 0x2D25ACu;
            goto label_2d25ac;
        }
    }
    ctx->pc = 0x2D25A8u;
    // 0x2d25a8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d25ac:
    // 0x2d25ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D25ACu;
    {
        const bool branch_taken_0x2d25ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25ac) {
            ctx->pc = 0x2D25C0u;
            goto label_2d25c0;
        }
    }
    ctx->pc = 0x2D25B4u;
    // 0x2d25b4: 0x0  nop
    ctx->pc = 0x2d25b4u;
    // NOP
label_2d25b8:
    // 0x2d25b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d25b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25bc: 0x0  nop
    ctx->pc = 0x2d25bcu;
    // NOP
label_2d25c0:
    // 0x2d25c0: 0xae060108  sw          $a2, 0x108($s0)
    ctx->pc = 0x2d25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 6));
    // 0x2d25c4: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d25c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d25c8: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x2d25c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2d25cc: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x2d25ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2d25d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d25d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d25d8: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d25d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d25dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D25DCu;
    {
        const bool branch_taken_0x2d25dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25DCu;
        // 0x2d25e0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25dc) {
            ctx->pc = 0x2D2600u;
            goto label_2d2600;
        }
    }
    ctx->pc = 0x2D25E4u;
    // 0x2d25e4: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d25e8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d25e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d25ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D25ECu;
    {
        const bool branch_taken_0x2d25ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25ec) {
            ctx->pc = 0x2D25F8u;
            goto label_2d25f8;
        }
    }
    ctx->pc = 0x2D25F4u;
    // 0x2d25f4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d25f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d25f8:
    // 0x2d25f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D25F8u;
    {
        const bool branch_taken_0x2d25f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25f8) {
            ctx->pc = 0x2D2630u;
            goto label_2d2630;
        }
    }
    ctx->pc = 0x2D2600u;
label_2d2600:
    // 0x2d2600: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2604: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2604u;
    {
        const bool branch_taken_0x2d2604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2604u;
        // 0x2d2608: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2604) {
            ctx->pc = 0x2D2628u;
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D260Cu;
    // 0x2d260c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d260cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2610: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2610u;
    {
        const bool branch_taken_0x2d2610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2610) {
            ctx->pc = 0x2D261Cu;
            goto label_2d261c;
        }
    }
    ctx->pc = 0x2D2618u;
    // 0x2d2618: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d2618u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d261c:
    // 0x2d261c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D261Cu;
    {
        const bool branch_taken_0x2d261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d261c) {
            ctx->pc = 0x2D2630u;
            goto label_2d2630;
        }
    }
    ctx->pc = 0x2D2624u;
    // 0x2d2624: 0x0  nop
    ctx->pc = 0x2d2624u;
    // NOP
label_2d2628:
    // 0x2d2628: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d262c: 0x0  nop
    ctx->pc = 0x2d262cu;
    // NOP
label_2d2630:
    // 0x2d2630: 0xae0600fc  sw          $a2, 0xFC($s0)
    ctx->pc = 0x2d2630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 6));
    // 0x2d2634: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d2634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2638: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x2d2638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2d263c: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x2d263cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2d2640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d2640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2648: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d264c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D264Cu;
    {
        const bool branch_taken_0x2d264c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D264Cu;
        // 0x2d2650: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d264c) {
            ctx->pc = 0x2D2670u;
            goto label_2d2670;
        }
    }
    ctx->pc = 0x2D2654u;
    // 0x2d2654: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d2654u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2658: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d2658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d265c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D265Cu;
    {
        const bool branch_taken_0x2d265c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d265c) {
            ctx->pc = 0x2D2668u;
            goto label_2d2668;
        }
    }
    ctx->pc = 0x2D2664u;
    // 0x2d2664: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2668:
    // 0x2d2668: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2668u;
    {
        const bool branch_taken_0x2d2668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2668) {
            ctx->pc = 0x2D26A0u;
            goto label_2d26a0;
        }
    }
    ctx->pc = 0x2D2670u;
label_2d2670:
    // 0x2d2670: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2674: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2674u;
    {
        const bool branch_taken_0x2d2674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2674u;
        // 0x2d2678: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2674) {
            ctx->pc = 0x2D2698u;
            goto label_2d2698;
        }
    }
    ctx->pc = 0x2D267Cu;
    // 0x2d267c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d267cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2680: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2680u;
    {
        const bool branch_taken_0x2d2680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2680) {
            ctx->pc = 0x2D268Cu;
            goto label_2d268c;
        }
    }
    ctx->pc = 0x2D2688u;
    // 0x2d2688: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d268c:
    // 0x2d268c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D268Cu;
    {
        const bool branch_taken_0x2d268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d268c) {
            ctx->pc = 0x2D26A0u;
            goto label_2d26a0;
        }
    }
    ctx->pc = 0x2D2694u;
    // 0x2d2694: 0x0  nop
    ctx->pc = 0x2d2694u;
    // NOP
label_2d2698:
    // 0x2d2698: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d269c: 0x0  nop
    ctx->pc = 0x2d269cu;
    // NOP
label_2d26a0:
    // 0x2d26a0: 0xae060100  sw          $a2, 0x100($s0)
    ctx->pc = 0x2d26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 6));
    // 0x2d26a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d26a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26ac: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2d26acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d26b0:
    // 0x2d26b0: 0x92070046  lbu         $a3, 0x46($s0)
    ctx->pc = 0x2d26b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d26b4: 0x8c89008c  lw          $t1, 0x8C($a0)
    ctx->pc = 0x2d26b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2d26b8: 0x8c8800ec  lw          $t0, 0xEC($a0)
    ctx->pc = 0x2d26b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2d26bc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2d26bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d26c0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d26c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d26c4: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x2d26c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d26c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D26C8u;
    {
        const bool branch_taken_0x2d26c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26C8u;
        // 0x2d26cc: 0x63840  sll         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26c8) {
            ctx->pc = 0x2D26F0u;
            goto label_2d26f0;
        }
    }
    ctx->pc = 0x2D26D0u;
    // 0x2d26d0: 0x1273023  subu        $a2, $t1, $a3
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2d26d4: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x2d26d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d26d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D26D8u;
    {
        const bool branch_taken_0x2d26d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26d8) {
            ctx->pc = 0x2D26E4u;
            goto label_2d26e4;
        }
    }
    ctx->pc = 0x2D26E0u;
    // 0x2d26e0: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2d26e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2d26e4:
    // 0x2d26e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D26E4u;
    {
        const bool branch_taken_0x2d26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26e4) {
            ctx->pc = 0x2D2720u;
            goto label_2d2720;
        }
    }
    ctx->pc = 0x2D26ECu;
    // 0x2d26ec: 0x0  nop
    ctx->pc = 0x2d26ecu;
    // NOP
label_2d26f0:
    // 0x2d26f0: 0x128082a  slt         $at, $t1, $t0
    ctx->pc = 0x2d26f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d26f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D26F4u;
    {
        const bool branch_taken_0x2d26f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26F4u;
        // 0x2d26f8: 0x1273021  addu        $a2, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26f4) {
            ctx->pc = 0x2D2718u;
            goto label_2d2718;
        }
    }
    ctx->pc = 0x2D26FCu;
    // 0x2d26fc: 0xc8082a  slt         $at, $a2, $t0
    ctx->pc = 0x2d26fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d2700: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2700u;
    {
        const bool branch_taken_0x2d2700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2700) {
            ctx->pc = 0x2D270Cu;
            goto label_2d270c;
        }
    }
    ctx->pc = 0x2D2708u;
    // 0x2d2708: 0x1074823  subu        $t1, $t0, $a3
    ctx->pc = 0x2d2708u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2d270c:
    // 0x2d270c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D270Cu;
    {
        const bool branch_taken_0x2d270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d270c) {
            ctx->pc = 0x2D2720u;
            goto label_2d2720;
        }
    }
    ctx->pc = 0x2D2714u;
    // 0x2d2714: 0x0  nop
    ctx->pc = 0x2d2714u;
    // NOP
label_2d2718:
    // 0x2d2718: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2d2718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d271c: 0x0  nop
    ctx->pc = 0x2d271cu;
    // NOP
label_2d2720:
    // 0x2d2720: 0xac8900ec  sw          $t1, 0xEC($a0)
    ctx->pc = 0x2d2720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 9));
    // 0x2d2724: 0x92070046  lbu         $a3, 0x46($s0)
    ctx->pc = 0x2d2724u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2728: 0x8c890094  lw          $t1, 0x94($a0)
    ctx->pc = 0x2d2728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2d272c: 0x8c8800f4  lw          $t0, 0xF4($a0)
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2d2730: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2d2730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d2734: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d2734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d2738: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x2d2738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d273c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D273Cu;
    {
        const bool branch_taken_0x2d273c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D273Cu;
        // 0x2d2740: 0x63840  sll         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d273c) {
            ctx->pc = 0x2D2760u;
            goto label_2d2760;
        }
    }
    ctx->pc = 0x2D2744u;
    // 0x2d2744: 0x1273023  subu        $a2, $t1, $a3
    ctx->pc = 0x2d2744u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2d2748: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x2d2748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d274c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D274Cu;
    {
        const bool branch_taken_0x2d274c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d274c) {
            ctx->pc = 0x2D2758u;
            goto label_2d2758;
        }
    }
    ctx->pc = 0x2D2754u;
    // 0x2d2754: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2d2754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2d2758:
    // 0x2d2758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2758u;
    {
        const bool branch_taken_0x2d2758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2758) {
            ctx->pc = 0x2D2790u;
            goto label_2d2790;
        }
    }
    ctx->pc = 0x2D2760u;
label_2d2760:
    // 0x2d2760: 0x128082a  slt         $at, $t1, $t0
    ctx->pc = 0x2d2760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d2764: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2764u;
    {
        const bool branch_taken_0x2d2764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2764u;
        // 0x2d2768: 0x1273021  addu        $a2, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2764) {
            ctx->pc = 0x2D2788u;
            goto label_2d2788;
        }
    }
    ctx->pc = 0x2D276Cu;
    // 0x2d276c: 0xc8082a  slt         $at, $a2, $t0
    ctx->pc = 0x2d276cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d2770: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2770u;
    {
        const bool branch_taken_0x2d2770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2770) {
            ctx->pc = 0x2D277Cu;
            goto label_2d277c;
        }
    }
    ctx->pc = 0x2D2778u;
    // 0x2d2778: 0x1074823  subu        $t1, $t0, $a3
    ctx->pc = 0x2d2778u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2d277c:
    // 0x2d277c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D277Cu;
    {
        const bool branch_taken_0x2d277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d277c) {
            ctx->pc = 0x2D2790u;
            goto label_2d2790;
        }
    }
    ctx->pc = 0x2D2784u;
    // 0x2d2784: 0x0  nop
    ctx->pc = 0x2d2784u;
    // NOP
label_2d2788:
    // 0x2d2788: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2d2788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d278c: 0x0  nop
    ctx->pc = 0x2d278cu;
    // NOP
label_2d2790:
    // 0x2d2790: 0xac8900f4  sw          $t1, 0xF4($a0)
    ctx->pc = 0x2d2790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 9));
    // 0x2d2794: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2794u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2798: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2d2798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d279c: 0x0  nop
    ctx->pc = 0x2d279cu;
    // NOP
label_2d27a0:
    // 0x2d27a0: 0x92070046  lbu         $a3, 0x46($s0)
    ctx->pc = 0x2d27a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d27a4: 0x8d0a00ac  lw          $t2, 0xAC($t0)
    ctx->pc = 0x2d27a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x2d27a8: 0x8d090114  lw          $t1, 0x114($t0)
    ctx->pc = 0x2d27a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
    // 0x2d27ac: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2d27acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d27b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d27b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d27b4: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x2d27b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2d27b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D27B8u;
    {
        const bool branch_taken_0x2d27b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27B8u;
        // 0x2d27bc: 0x63840  sll         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27b8) {
            ctx->pc = 0x2D27E0u;
            goto label_2d27e0;
        }
    }
    ctx->pc = 0x2D27C0u;
    // 0x2d27c0: 0x1473023  subu        $a2, $t2, $a3
    ctx->pc = 0x2d27c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2d27c4: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x2d27c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d27c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D27C8u;
    {
        const bool branch_taken_0x2d27c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27c8) {
            ctx->pc = 0x2D27D4u;
            goto label_2d27d4;
        }
    }
    ctx->pc = 0x2D27D0u;
    // 0x2d27d0: 0x1275021  addu        $t2, $t1, $a3
    ctx->pc = 0x2d27d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2d27d4:
    // 0x2d27d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D27D4u;
    {
        const bool branch_taken_0x2d27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27d4) {
            ctx->pc = 0x2D2810u;
            goto label_2d2810;
        }
    }
    ctx->pc = 0x2D27DCu;
    // 0x2d27dc: 0x0  nop
    ctx->pc = 0x2d27dcu;
    // NOP
label_2d27e0:
    // 0x2d27e0: 0x149082a  slt         $at, $t2, $t1
    ctx->pc = 0x2d27e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d27e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D27E4u;
    {
        const bool branch_taken_0x2d27e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27E4u;
        // 0x2d27e8: 0x1473021  addu        $a2, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27e4) {
            ctx->pc = 0x2D2808u;
            goto label_2d2808;
        }
    }
    ctx->pc = 0x2D27ECu;
    // 0x2d27ec: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x2d27ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d27f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D27F0u;
    {
        const bool branch_taken_0x2d27f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27f0) {
            ctx->pc = 0x2D27FCu;
            goto label_2d27fc;
        }
    }
    ctx->pc = 0x2D27F8u;
    // 0x2d27f8: 0x1275023  subu        $t2, $t1, $a3
    ctx->pc = 0x2d27f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2d27fc:
    // 0x2d27fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D27FCu;
    {
        const bool branch_taken_0x2d27fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27fc) {
            ctx->pc = 0x2D2810u;
            goto label_2d2810;
        }
    }
    ctx->pc = 0x2D2804u;
    // 0x2d2804: 0x0  nop
    ctx->pc = 0x2d2804u;
    // NOP
label_2d2808:
    // 0x2d2808: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2d2808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d280c: 0x0  nop
    ctx->pc = 0x2d280cu;
    // NOP
label_2d2810:
    // 0x2d2810: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d2810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d2814: 0xad0a0114  sw          $t2, 0x114($t0)
    ctx->pc = 0x2d2814u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 10));
    // 0x2d2818: 0x2d660003  sltiu       $a2, $t3, 0x3
    ctx->pc = 0x2d2818u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d281c: 0x14c0ffe0  bnez        $a2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D281Cu;
    {
        const bool branch_taken_0x2d281c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D281Cu;
        // 0x2d2820: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d281c) {
            ctx->pc = 0x2D27A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d27a0;
        }
    }
    ctx->pc = 0x2D2824u;
    // 0x2d2824: 0x2054021  addu        $t0, $s0, $a1
    ctx->pc = 0x2d2824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d2828: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2d2828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2d282c: 0x910700d4  lbu         $a3, 0xD4($t0)
    ctx->pc = 0x2d282cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 212)));
    // 0x2d2830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2834: 0x28a60002  slti        $a2, $a1, 0x2
    ctx->pc = 0x2d2834u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d2838: 0xa1070134  sb          $a3, 0x134($t0)
    ctx->pc = 0x2d2838u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 308), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d283c: 0x8c8700c4  lw          $a3, 0xC4($a0)
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2d2840: 0xac87010c  sw          $a3, 0x10C($a0)
    ctx->pc = 0x2d2840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 7));
    // 0x2d2844: 0x14c0ff9a  bnez        $a2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2D2844u;
    {
        const bool branch_taken_0x2d2844 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2844u;
        // 0x2d2848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2844) {
            ctx->pc = 0x2D26B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d26b0;
        }
    }
    ctx->pc = 0x2D284Cu;
    // 0x2d284c: 0x0  nop
    ctx->pc = 0x2d284cu;
    // NOP
label_2d2850:
    // 0x2d2850: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d2850u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2854: 0x8e0600cc  lw          $a2, 0xCC($s0)
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2d2858: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2d285c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2864: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d2868: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2868u;
    {
        const bool branch_taken_0x2d2868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2868u;
        // 0x2d286c: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2868) {
            ctx->pc = 0x2D2890u;
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D2870u;
    // 0x2d2870: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d2870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2874: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d2874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d2878: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2878u;
    {
        const bool branch_taken_0x2d2878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2878) {
            ctx->pc = 0x2D2884u;
            goto label_2d2884;
        }
    }
    ctx->pc = 0x2D2880u;
    // 0x2d2880: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d2880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2884:
    // 0x2d2884: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D2884u;
    {
        const bool branch_taken_0x2d2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2884) {
            ctx->pc = 0x2D28C0u;
            goto label_2d28c0;
        }
    }
    ctx->pc = 0x2D288Cu;
    // 0x2d288c: 0x0  nop
    ctx->pc = 0x2d288cu;
    // NOP
label_2d2890:
    // 0x2d2890: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2894: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2894u;
    {
        const bool branch_taken_0x2d2894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2894u;
        // 0x2d2898: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2894) {
            ctx->pc = 0x2D28B8u;
            goto label_2d28b8;
        }
    }
    ctx->pc = 0x2D289Cu;
    // 0x2d289c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d289cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d28a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D28A0u;
    {
        const bool branch_taken_0x2d28a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28a0) {
            ctx->pc = 0x2D28ACu;
            goto label_2d28ac;
        }
    }
    ctx->pc = 0x2D28A8u;
    // 0x2d28a8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d28a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d28ac:
    // 0x2d28ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D28ACu;
    {
        const bool branch_taken_0x2d28ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28ac) {
            ctx->pc = 0x2D28C0u;
            goto label_2d28c0;
        }
    }
    ctx->pc = 0x2D28B4u;
    // 0x2d28b4: 0x0  nop
    ctx->pc = 0x2d28b4u;
    // NOP
label_2d28b8:
    // 0x2d28b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d28b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28bc: 0x0  nop
    ctx->pc = 0x2d28bcu;
    // NOP
label_2d28c0:
    // 0x2d28c0: 0xae06012c  sw          $a2, 0x12C($s0)
    ctx->pc = 0x2d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 6));
    // 0x2d28c4: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d28c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d28c8: 0x8e0600d0  lw          $a2, 0xD0($s0)
    ctx->pc = 0x2d28c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2d28cc: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2d28ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d28d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d28d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d28d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d28d8: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d28d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d28dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D28DCu;
    {
        const bool branch_taken_0x2d28dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28DCu;
        // 0x2d28e0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28dc) {
            ctx->pc = 0x2D2900u;
            goto label_2d2900;
        }
    }
    ctx->pc = 0x2D28E4u;
    // 0x2d28e4: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d28e8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d28e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d28ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D28ECu;
    {
        const bool branch_taken_0x2d28ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28ec) {
            ctx->pc = 0x2D28F8u;
            goto label_2d28f8;
        }
    }
    ctx->pc = 0x2D28F4u;
    // 0x2d28f4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d28f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d28f8:
    // 0x2d28f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D28F8u;
    {
        const bool branch_taken_0x2d28f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28f8) {
            ctx->pc = 0x2D2930u;
            goto label_2d2930;
        }
    }
    ctx->pc = 0x2D2900u;
label_2d2900:
    // 0x2d2900: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2904: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2904u;
    {
        const bool branch_taken_0x2d2904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2904u;
        // 0x2d2908: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2904) {
            ctx->pc = 0x2D2928u;
            goto label_2d2928;
        }
    }
    ctx->pc = 0x2D290Cu;
    // 0x2d290c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d290cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2910: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2910u;
    {
        const bool branch_taken_0x2d2910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2910) {
            ctx->pc = 0x2D291Cu;
            goto label_2d291c;
        }
    }
    ctx->pc = 0x2D2918u;
    // 0x2d2918: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d2918u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d291c:
    // 0x2d291c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D291Cu;
    {
        const bool branch_taken_0x2d291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d291c) {
            ctx->pc = 0x2D2930u;
            goto label_2d2930;
        }
    }
    ctx->pc = 0x2D2924u;
    // 0x2d2924: 0x0  nop
    ctx->pc = 0x2d2924u;
    // NOP
label_2d2928:
    // 0x2d2928: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d292c: 0x0  nop
    ctx->pc = 0x2d292cu;
    // NOP
label_2d2930:
    // 0x2d2930: 0xae060130  sw          $a2, 0x130($s0)
    ctx->pc = 0x2d2930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 6));
    // 0x2d2934: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d2934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d2938: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x2d2938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2d293c: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x2d293cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2d2940: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d2940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2948: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d2948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d294c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D294Cu;
    {
        const bool branch_taken_0x2d294c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D294Cu;
        // 0x2d2950: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d294c) {
            ctx->pc = 0x2D2970u;
            goto label_2d2970;
        }
    }
    ctx->pc = 0x2D2954u;
    // 0x2d2954: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d2954u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2958: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d2958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d295c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D295Cu;
    {
        const bool branch_taken_0x2d295c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d295c) {
            ctx->pc = 0x2D2968u;
            goto label_2d2968;
        }
    }
    ctx->pc = 0x2D2964u;
    // 0x2d2964: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2968:
    // 0x2d2968: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2968u;
    {
        const bool branch_taken_0x2d2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2968) {
            ctx->pc = 0x2D29A0u;
            goto label_2d29a0;
        }
    }
    ctx->pc = 0x2D2970u;
label_2d2970:
    // 0x2d2970: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d2970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2974: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2974u;
    {
        const bool branch_taken_0x2d2974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2974u;
        // 0x2d2978: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2974) {
            ctx->pc = 0x2D2998u;
            goto label_2d2998;
        }
    }
    ctx->pc = 0x2D297Cu;
    // 0x2d297c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d297cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2980: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2980u;
    {
        const bool branch_taken_0x2d2980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2980) {
            ctx->pc = 0x2D298Cu;
            goto label_2d298c;
        }
    }
    ctx->pc = 0x2D2988u;
    // 0x2d2988: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d298c:
    // 0x2d298c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D298Cu;
    {
        const bool branch_taken_0x2d298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d298c) {
            ctx->pc = 0x2D29A0u;
            goto label_2d29a0;
        }
    }
    ctx->pc = 0x2D2994u;
    // 0x2d2994: 0x0  nop
    ctx->pc = 0x2d2994u;
    // NOP
label_2d2998:
    // 0x2d2998: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d299c: 0x0  nop
    ctx->pc = 0x2d299cu;
    // NOP
label_2d29a0:
    // 0x2d29a0: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x2d29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
    // 0x2d29a4: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2d29a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d29a8: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x2d29a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d29ac: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x2d29acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2d29b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d29b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d29b8: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d29b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d29bc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D29BCu;
    {
        const bool branch_taken_0x2d29bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29BCu;
        // 0x2d29c0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29bc) {
            ctx->pc = 0x2D29E0u;
            goto label_2d29e0;
        }
    }
    ctx->pc = 0x2D29C4u;
    // 0x2d29c4: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x2d29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29c8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d29c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d29cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D29CCu;
    {
        const bool branch_taken_0x2d29cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29cc) {
            ctx->pc = 0x2D29D8u;
            goto label_2d29d8;
        }
    }
    ctx->pc = 0x2D29D4u;
    // 0x2d29d4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2d29d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d29d8:
    // 0x2d29d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D29D8u;
    {
        const bool branch_taken_0x2d29d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d8) {
            ctx->pc = 0x2D2A10u;
            goto label_2d2a10;
        }
    }
    ctx->pc = 0x2D29E0u;
label_2d29e0:
    // 0x2d29e0: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d29e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d29e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D29E4u;
    {
        const bool branch_taken_0x2d29e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29E4u;
        // 0x2d29e8: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29e4) {
            ctx->pc = 0x2D2A08u;
            goto label_2d2a08;
        }
    }
    ctx->pc = 0x2D29ECu;
    // 0x2d29ec: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d29ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d29f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D29F0u;
    {
        const bool branch_taken_0x2d29f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29f0) {
            ctx->pc = 0x2D29FCu;
            goto label_2d29fc;
        }
    }
    ctx->pc = 0x2D29F8u;
    // 0x2d29f8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x2d29f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d29fc:
    // 0x2d29fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D29FCu;
    {
        const bool branch_taken_0x2d29fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29fc) {
            ctx->pc = 0x2D2A10u;
            goto label_2d2a10;
        }
    }
    ctx->pc = 0x2D2A04u;
    // 0x2d2a04: 0x0  nop
    ctx->pc = 0x2d2a04u;
    // NOP
label_2d2a08:
    // 0x2d2a08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a0c: 0x0  nop
    ctx->pc = 0x2d2a0cu;
    // NOP
label_2d2a10:
    // 0x2d2a10: 0xae0600e8  sw          $a2, 0xE8($s0)
    ctx->pc = 0x2d2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 6));
    // 0x2d2a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A1Cu;
        // 0x2d2a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2A24u;
}
