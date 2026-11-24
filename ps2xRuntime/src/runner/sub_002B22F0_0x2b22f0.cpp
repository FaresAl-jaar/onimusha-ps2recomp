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

// Function: sub_002B22F0
// Address: 0x2b22f0 - 0x2b2438
void sub_002B22F0_0x2b22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B22F0_0x2b22f0");
#endif

    switch (ctx->pc) {
        case 0x2b242cu: goto label_2b242c;
        default: break;
    }

    ctx->pc = 0x2b22f0u;

    // 0x2b22f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b22f4: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x2b22f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b22f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B22F8u;
    {
        const bool branch_taken_0x2b22f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F8u;
        // 0x2b22fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22f8) {
            ctx->pc = 0x2B2308u;
            goto label_2b2308;
        }
    }
    ctx->pc = 0x2B2300u;
    // 0x2b2300: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b2300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b2304: 0x0  nop
    ctx->pc = 0x2b2304u;
    // NOP
label_2b2308:
    // 0x2b2308: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b2308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b230c: 0x8c2b4efc  lw          $t3, 0x4EFC($at)
    ctx->pc = 0x2b230cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x4E4EFCu));
    // 0x2b2310: 0x30aa00ff  andi        $t2, $a1, 0xFF
    ctx->pc = 0x2b2310u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b2314: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2318: 0x27868228  addiu       $a2, $gp, -0x7DD8
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935080));
    // 0x2b231c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b2320: 0x8c234ef0  lw          $v1, 0x4EF0($at)
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E4EF0u));
    // 0x2b2324: 0x83c018  mult        $t8, $a0, $v1
    ctx->pc = 0x2b2324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x2b2328: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b2328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b232c: 0x8c2d4f00  lw          $t5, 0x4F00($at)
    ctx->pc = 0x2b232cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x4E4F00u));
    // 0x2b2330: 0x30b001b  divu        $zero, $t8, $t3
    ctx->pc = 0x2b2330u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 24) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 24) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,24); } }
    // 0x2b2334: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b2334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b2338: 0xd1e02  srl         $v1, $t5, 24
    ctx->pc = 0x2b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 24));
    // 0x2b233c: 0x8c224ef4  lw          $v0, 0x4EF4($at)
    ctx->pc = 0x2b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20212)));
    // 0x2b2340: 0x71431818  mult1       $v1, $t2, $v1
    ctx->pc = 0x2b2340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b2344: 0x379c2  srl         $t7, $v1, 7
    ctx->pc = 0x2b2344u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x2b2348: 0xd723c  dsll32      $t6, $t5, 8
    ctx->pc = 0x2b2348u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << (32 + 8));
    // 0x2b234c: 0xe723e  dsrl32      $t6, $t6, 8
    ctx->pc = 0x2b234cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 8));
    // 0x2b2350: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x2b2354: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2b2354u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x2b2358: 0xafae0010  sw          $t6, 0x10($sp)
    ctx->pc = 0x2b2358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 14));
    // 0x2b235c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b2360: 0x8c294f04  lw          $t1, 0x4F04($at)
    ctx->pc = 0x2b2360u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4E4F04u));
    // 0x2b2364: 0x96e02  srl         $t5, $t1, 24
    ctx->pc = 0x2b2364u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x2b2368: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b236c: 0x8c2c4ef8  lw          $t4, 0x4EF8($at)
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x4E4EF8u));
    // 0x2b2370: 0x714d6818  mult1       $t5, $t2, $t5
    ctx->pc = 0x2b2370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2b2374: 0xd69c2  srl         $t5, $t5, 7
    ctx->pc = 0x2b2374u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 7));
    // 0x2b2378: 0x94a3c  dsll32      $t1, $t1, 8
    ctx->pc = 0x2b2378u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 8));
    // 0x2b237c: 0xd6e00  sll         $t5, $t5, 24
    ctx->pc = 0x2b237cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x2b2380: 0x94a3e  dsrl32      $t1, $t1, 8
    ctx->pc = 0x2b2380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 8));
    // 0x2b2384: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x2b2384u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x2b2388: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x2b2388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x2b238c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b2390: 0x8c284f08  lw          $t0, 0x4F08($at)
    ctx->pc = 0x2b2390u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4E4F08u));
    // 0x2b2394: 0x84e02  srl         $t1, $t0, 24
    ctx->pc = 0x2b2394u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x2b2398: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2b239c: 0x71494818  mult1       $t1, $t2, $t1
    ctx->pc = 0x2b239cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2b23a0: 0x8423c  dsll32      $t0, $t0, 8
    ctx->pc = 0x2b23a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 8));
    // 0x2b23a4: 0x949c2  srl         $t1, $t1, 7
    ctx->pc = 0x2b23a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x2b23a8: 0x8c274f0c  lw          $a3, 0x4F0C($at)
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20236)));
    // 0x2b23ac: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b23acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b23b0: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x2b23b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x2b23b4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2b23b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2b23b8: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x2b23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x2b23bc: 0x1812  mflo        $v1
    ctx->pc = 0x2b23bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2b23c0: 0x74602  srl         $t0, $a3, 24
    ctx->pc = 0x2b23c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2b23c4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2b23c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b23c8: 0x71484018  mult1       $t0, $t2, $t0
    ctx->pc = 0x2b23c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2b23cc: 0x841c2  srl         $t0, $t0, 7
    ctx->pc = 0x2b23ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
    // 0x2b23d0: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x2b23d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2b23d4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2b23d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b23d8: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2b23d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2b23dc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2b23dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2b23e0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2b23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2b23e4: 0x4b001b  divu        $zero, $v0, $t3
    ctx->pc = 0x2b23e4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b23e8: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x2b23e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x2b23ec: 0x0  nop
    ctx->pc = 0x2b23ecu;
    // NOP
    // 0x2b23f0: 0x1012  mflo        $v0
    ctx->pc = 0x2b23f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b23f4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2b23f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2b23f8: 0x8c1018  mult        $v0, $a0, $t4
    ctx->pc = 0x2b23f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b23fc: 0x4b001b  divu        $zero, $v0, $t3
    ctx->pc = 0x2b23fcu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b2400: 0x0  nop
    ctx->pc = 0x2b2400u;
    // NOP
    // 0x2b2404: 0x0  nop
    ctx->pc = 0x2b2404u;
    // NOP
    // 0x2b2408: 0x1012  mflo        $v0
    ctx->pc = 0x2b2408u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b240c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2b240cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2b2410: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x2b2410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b2414: 0x4b001b  divu        $zero, $v0, $t3
    ctx->pc = 0x2b2414u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b2418: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b241c: 0x0  nop
    ctx->pc = 0x2b241cu;
    // NOP
    // 0x2b2420: 0x1012  mflo        $v0
    ctx->pc = 0x2b2420u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b2424: 0xc0ac880  jal         func_2B2200
    ctx->pc = 0x2B2424u;
    SET_GPR_U32(ctx, 31, 0x2B242Cu);
    ctx->pc = 0x2B2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2424u;
    // 0x2b2428: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2200u, 0x2B2424u, 0x2B242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B242Cu;
label_2b242c:
    // 0x2b242c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2430: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2430u;
        // 0x2b2434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2438u;
}
