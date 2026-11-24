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

// Function: sub_0010A638
// Address: 0x10a638 - 0x10a804
void sub_0010A638_0x10a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A638_0x10a638");
#endif

    switch (ctx->pc) {
        case 0x10a638u: goto label_10a638;
        case 0x10a63cu: goto label_10a63c;
        case 0x10a640u: goto label_10a640;
        case 0x10a644u: goto label_10a644;
        case 0x10a648u: goto label_10a648;
        case 0x10a64cu: goto label_10a64c;
        case 0x10a650u: goto label_10a650;
        case 0x10a654u: goto label_10a654;
        case 0x10a658u: goto label_10a658;
        case 0x10a65cu: goto label_10a65c;
        case 0x10a660u: goto label_10a660;
        case 0x10a664u: goto label_10a664;
        case 0x10a668u: goto label_10a668;
        case 0x10a66cu: goto label_10a66c;
        case 0x10a670u: goto label_10a670;
        case 0x10a674u: goto label_10a674;
        case 0x10a678u: goto label_10a678;
        case 0x10a67cu: goto label_10a67c;
        case 0x10a680u: goto label_10a680;
        case 0x10a684u: goto label_10a684;
        case 0x10a688u: goto label_10a688;
        case 0x10a68cu: goto label_10a68c;
        case 0x10a690u: goto label_10a690;
        case 0x10a694u: goto label_10a694;
        case 0x10a698u: goto label_10a698;
        case 0x10a69cu: goto label_10a69c;
        case 0x10a6a0u: goto label_10a6a0;
        case 0x10a6a4u: goto label_10a6a4;
        case 0x10a6a8u: goto label_10a6a8;
        case 0x10a6acu: goto label_10a6ac;
        case 0x10a6b0u: goto label_10a6b0;
        case 0x10a6b4u: goto label_10a6b4;
        case 0x10a6b8u: goto label_10a6b8;
        case 0x10a6bcu: goto label_10a6bc;
        case 0x10a6c0u: goto label_10a6c0;
        case 0x10a6c4u: goto label_10a6c4;
        case 0x10a6c8u: goto label_10a6c8;
        case 0x10a6ccu: goto label_10a6cc;
        case 0x10a6d0u: goto label_10a6d0;
        case 0x10a6d4u: goto label_10a6d4;
        case 0x10a6d8u: goto label_10a6d8;
        case 0x10a6dcu: goto label_10a6dc;
        case 0x10a6e0u: goto label_10a6e0;
        case 0x10a6e4u: goto label_10a6e4;
        case 0x10a6e8u: goto label_10a6e8;
        case 0x10a6ecu: goto label_10a6ec;
        case 0x10a6f0u: goto label_10a6f0;
        case 0x10a6f4u: goto label_10a6f4;
        case 0x10a6f8u: goto label_10a6f8;
        case 0x10a6fcu: goto label_10a6fc;
        case 0x10a700u: goto label_10a700;
        case 0x10a704u: goto label_10a704;
        case 0x10a708u: goto label_10a708;
        case 0x10a70cu: goto label_10a70c;
        case 0x10a710u: goto label_10a710;
        case 0x10a714u: goto label_10a714;
        case 0x10a718u: goto label_10a718;
        case 0x10a71cu: goto label_10a71c;
        case 0x10a720u: goto label_10a720;
        case 0x10a724u: goto label_10a724;
        case 0x10a728u: goto label_10a728;
        case 0x10a72cu: goto label_10a72c;
        case 0x10a730u: goto label_10a730;
        case 0x10a734u: goto label_10a734;
        case 0x10a738u: goto label_10a738;
        case 0x10a73cu: goto label_10a73c;
        case 0x10a740u: goto label_10a740;
        case 0x10a744u: goto label_10a744;
        case 0x10a748u: goto label_10a748;
        case 0x10a74cu: goto label_10a74c;
        case 0x10a750u: goto label_10a750;
        case 0x10a754u: goto label_10a754;
        case 0x10a758u: goto label_10a758;
        case 0x10a75cu: goto label_10a75c;
        case 0x10a760u: goto label_10a760;
        case 0x10a764u: goto label_10a764;
        case 0x10a768u: goto label_10a768;
        case 0x10a76cu: goto label_10a76c;
        case 0x10a770u: goto label_10a770;
        case 0x10a774u: goto label_10a774;
        case 0x10a778u: goto label_10a778;
        case 0x10a77cu: goto label_10a77c;
        case 0x10a780u: goto label_10a780;
        case 0x10a784u: goto label_10a784;
        case 0x10a788u: goto label_10a788;
        case 0x10a78cu: goto label_10a78c;
        case 0x10a790u: goto label_10a790;
        case 0x10a794u: goto label_10a794;
        case 0x10a798u: goto label_10a798;
        case 0x10a79cu: goto label_10a79c;
        case 0x10a7a0u: goto label_10a7a0;
        case 0x10a7a4u: goto label_10a7a4;
        case 0x10a7a8u: goto label_10a7a8;
        case 0x10a7acu: goto label_10a7ac;
        case 0x10a7b0u: goto label_10a7b0;
        case 0x10a7b4u: goto label_10a7b4;
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7bcu: goto label_10a7bc;
        case 0x10a7c0u: goto label_10a7c0;
        case 0x10a7c4u: goto label_10a7c4;
        case 0x10a7c8u: goto label_10a7c8;
        case 0x10a7ccu: goto label_10a7cc;
        case 0x10a7d0u: goto label_10a7d0;
        case 0x10a7d4u: goto label_10a7d4;
        case 0x10a7d8u: goto label_10a7d8;
        case 0x10a7dcu: goto label_10a7dc;
        case 0x10a7e0u: goto label_10a7e0;
        case 0x10a7e4u: goto label_10a7e4;
        case 0x10a7e8u: goto label_10a7e8;
        case 0x10a7ecu: goto label_10a7ec;
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a7f4u: goto label_10a7f4;
        case 0x10a7f8u: goto label_10a7f8;
        case 0x10a7fcu: goto label_10a7fc;
        case 0x10a800u: goto label_10a800;
        default: break;
    }

    ctx->pc = 0x10a638u;

label_10a638:
    // 0x10a638: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10a63c:
    // 0x10a63c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x10a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_10a640:
    // 0x10a640: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_10a644:
    // 0x10a644: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_10a648:
    // 0x10a648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a64c:
    // 0x10a64c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_10a650:
    // 0x10a650: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x10a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_10a654:
    // 0x10a654: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x10a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_10a658:
    // 0x10a658: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_10a65c:
    // 0x10a65c: 0x24472140  addiu       $a3, $v0, 0x2140
    ctx->pc = 0x10a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8512));
label_10a660:
    // 0x10a660: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x10a660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a664:
    // 0x10a664: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x10a664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a668:
    // 0x10a668: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x10a668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10a66c:
    // 0x10a66c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x10a66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10a670:
    // 0x10a670: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x10a670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_10a674:
    // 0x10a674: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x10a674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_10a678:
    // 0x10a678: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x10a678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a67c:
    // 0x10a67c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10a67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a680:
    // 0x10a680: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x10a680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a684:
    // 0x10a684: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x10a684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a688:
    // 0x10a688: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x10a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a68c:
    // 0x10a68c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x10a68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a690:
    // 0x10a690: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x10a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a694:
    // 0x10a694: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x10a694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a698:
    // 0x10a698: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x10a698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10a69c:
    // 0x10a69c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x10a69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10a6a0:
    // 0x10a6a0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x10a6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_10a6a4:
    // 0x10a6a4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x10a6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a6a8:
    // 0x10a6a8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x10a6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a6ac:
    // 0x10a6ac: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x10a6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a6b0:
    // 0x10a6b0: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x10a6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a6b4:
    // 0x10a6b4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_10a6b8:
    // 0x10a6b8: 0xc042a6a  jal         func_10A9A8
label_10a6bc:
    if (ctx->pc == 0x10A6BCu) {
        ctx->pc = 0x10A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6B8u;
        // 0x10a6bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6C0u;
        goto label_10a6c0;
    }
    ctx->pc = 0x10A6B8u;
    SET_GPR_U32(ctx, 31, 0x10A6C0u);
    ctx->pc = 0x10A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B8u;
    // 0x10a6bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A8u, 0x10A6B8u, 0x10A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6C0u;
label_10a6c0:
    // 0x10a6c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_10a6c4:
    if (ctx->pc == 0x10A6C4u) {
        ctx->pc = 0x10A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C0u;
        // 0x10a6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6C8u;
        goto label_10a6c8;
    }
    ctx->pc = 0x10A6C0u;
    {
        const bool branch_taken_0x10a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C0u;
        // 0x10a6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c0) {
            ctx->pc = 0x10A6D4u;
            goto label_10a6d4;
        }
    }
    ctx->pc = 0x10A6C8u;
label_10a6c8:
    // 0x10a6c8: 0xc042a10  jal         func_10A840
label_10a6cc:
    if (ctx->pc == 0x10A6CCu) {
        ctx->pc = 0x10A6D0u;
        goto label_10a6d0;
    }
    ctx->pc = 0x10A6C8u;
    SET_GPR_U32(ctx, 31, 0x10A6D0u);
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A6C8u, 0x10A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6D0u;
label_10a6d0:
    // 0x10a6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a6d4:
    // 0x10a6d4: 0xc04216c  jal         func_1085B0
label_10a6d8:
    if (ctx->pc == 0x10A6D8u) {
        ctx->pc = 0x10A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D4u;
        // 0x10a6d8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6DCu;
        goto label_10a6dc;
    }
    ctx->pc = 0x10A6D4u;
    SET_GPR_U32(ctx, 31, 0x10A6DCu);
    ctx->pc = 0x10A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6D4u;
    // 0x10a6d8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10A6D4u, 0x10A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6DCu;
label_10a6dc:
    // 0x10a6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a6e0:
    // 0x10a6e0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_10a6e4:
    if (ctx->pc == 0x10A6E4u) {
        ctx->pc = 0x10A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E0u;
        // 0x10a6e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6E8u;
        goto label_10a6e8;
    }
    ctx->pc = 0x10A6E0u;
    {
        const bool branch_taken_0x10a6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E0u;
        // 0x10a6e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e0) {
            ctx->pc = 0x10A6F4u;
            goto label_10a6f4;
        }
    }
    ctx->pc = 0x10A6E8u;
label_10a6e8:
    // 0x10a6e8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a6ec:
    // 0x10a6ec: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a6f0:
    if (ctx->pc == 0x10A6F0u) {
        ctx->pc = 0x10A6F4u;
        goto label_10a6f4;
    }
    ctx->pc = 0x10A6ECu;
    {
        const bool branch_taken_0x10a6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6ec) {
            ctx->pc = 0x10A6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a6c8;
        }
    }
    ctx->pc = 0x10A6F4u;
label_10a6f4:
    // 0x10a6f4: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x10a6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_10a6f8:
    // 0x10a6f8: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_10a6fc:
    // 0x10a6fc: 0x10000033  b           . + 4 + (0x33 << 2)
label_10a700:
    if (ctx->pc == 0x10A700u) {
        ctx->pc = 0x10A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6FCu;
        // 0x10a700: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A704u;
        goto label_10a704;
    }
    ctx->pc = 0x10A6FCu;
    {
        const bool branch_taken_0x10a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6FCu;
        // 0x10a700: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6fc) {
            ctx->pc = 0x10A7CCu;
            goto label_10a7cc;
        }
    }
    ctx->pc = 0x10A704u;
label_10a704:
    // 0x10a704: 0x0  nop
    ctx->pc = 0x10a704u;
    // NOP
label_10a708:
    // 0x10a708: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_10a70c:
    if (ctx->pc == 0x10A70Cu) {
        ctx->pc = 0x10A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A708u;
        // 0x10a70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A710u;
        goto label_10a710;
    }
    ctx->pc = 0x10A708u;
    {
        const bool branch_taken_0x10a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A708u;
        // 0x10a70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a708) {
            ctx->pc = 0x10A784u;
            goto label_10a784;
        }
    }
    ctx->pc = 0x10A710u;
label_10a710:
    // 0x10a710: 0xc042a68  jal         func_10A9A0
label_10a714:
    if (ctx->pc == 0x10A714u) {
        ctx->pc = 0x10A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A710u;
        // 0x10a714: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A718u;
        goto label_10a718;
    }
    ctx->pc = 0x10A710u;
    SET_GPR_U32(ctx, 31, 0x10A718u);
    ctx->pc = 0x10A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A710u;
    // 0x10a714: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A0u, 0x10A710u, 0x10A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A718u;
label_10a718:
    // 0x10a718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a71c:
    // 0x10a71c: 0xc042132  jal         func_1084C8
label_10a720:
    if (ctx->pc == 0x10A720u) {
        ctx->pc = 0x10A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A71Cu;
        // 0x10a720: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A724u;
        goto label_10a724;
    }
    ctx->pc = 0x10A71Cu;
    SET_GPR_U32(ctx, 31, 0x10A724u);
    ctx->pc = 0x10A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A71Cu;
    // 0x10a720: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A71Cu, 0x10A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A724u;
label_10a724:
    // 0x10a724: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x10a724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10a728:
    // 0x10a728: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10a728u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_10a72c:
    // 0x10a72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a730:
    // 0x10a730: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_10a734:
    // 0x10a734: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a738:
    // 0x10a738: 0x40f809  jalr        $v0
label_10a73c:
    if (ctx->pc == 0x10A73Cu) {
        ctx->pc = 0x10A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A738u;
        // 0x10a73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A740u;
        goto label_10a740;
    }
    ctx->pc = 0x10A738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A740u);
        ctx->pc = 0x10A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A738u;
        // 0x10a73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A738u, 0x10A740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A740u;
label_10a740:
    // 0x10a740: 0xc042a6a  jal         func_10A9A8
label_10a744:
    if (ctx->pc == 0x10A744u) {
        ctx->pc = 0x10A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A740u;
        // 0x10a744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A748u;
        goto label_10a748;
    }
    ctx->pc = 0x10A740u;
    SET_GPR_U32(ctx, 31, 0x10A748u);
    ctx->pc = 0x10A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A740u;
    // 0x10a744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A8u, 0x10A740u, 0x10A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A748u;
label_10a748:
    // 0x10a748: 0x10000004  b           . + 4 + (0x4 << 2)
label_10a74c:
    if (ctx->pc == 0x10A74Cu) {
        ctx->pc = 0x10A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A748u;
        // 0x10a74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A750u;
        goto label_10a750;
    }
    ctx->pc = 0x10A748u;
    {
        const bool branch_taken_0x10a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A748u;
        // 0x10a74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a748) {
            ctx->pc = 0x10A75Cu;
            goto label_10a75c;
        }
    }
    ctx->pc = 0x10A750u;
label_10a750:
    // 0x10a750: 0xc042a10  jal         func_10A840
label_10a754:
    if (ctx->pc == 0x10A754u) {
        ctx->pc = 0x10A758u;
        goto label_10a758;
    }
    ctx->pc = 0x10A750u;
    SET_GPR_U32(ctx, 31, 0x10A758u);
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A750u, 0x10A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A758u;
label_10a758:
    // 0x10a758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a75c:
    // 0x10a75c: 0xc04216c  jal         func_1085B0
label_10a760:
    if (ctx->pc == 0x10A760u) {
        ctx->pc = 0x10A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A75Cu;
        // 0x10a760: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A764u;
        goto label_10a764;
    }
    ctx->pc = 0x10A75Cu;
    SET_GPR_U32(ctx, 31, 0x10A764u);
    ctx->pc = 0x10A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A75Cu;
    // 0x10a760: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10A75Cu, 0x10A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A764u;
label_10a764:
    // 0x10a764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a768:
    // 0x10a768: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_10a76c:
    if (ctx->pc == 0x10A76Cu) {
        ctx->pc = 0x10A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A768u;
        // 0x10a76c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A770u;
        goto label_10a770;
    }
    ctx->pc = 0x10A768u;
    {
        const bool branch_taken_0x10a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A768u;
        // 0x10a76c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a768) {
            ctx->pc = 0x10A7D0u;
            goto label_10a7d0;
        }
    }
    ctx->pc = 0x10A770u;
label_10a770:
    // 0x10a770: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a774:
    // 0x10a774: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a778:
    if (ctx->pc == 0x10A778u) {
        ctx->pc = 0x10A77Cu;
        goto label_10a77c;
    }
    ctx->pc = 0x10A774u;
    {
        const bool branch_taken_0x10a774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a774) {
            ctx->pc = 0x10A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a750;
        }
    }
    ctx->pc = 0x10A77Cu;
label_10a77c:
    // 0x10a77c: 0x10000013  b           . + 4 + (0x13 << 2)
label_10a780:
    if (ctx->pc == 0x10A780u) {
        ctx->pc = 0x10A784u;
        goto label_10a784;
    }
    ctx->pc = 0x10A77Cu;
    {
        const bool branch_taken_0x10a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a77c) {
            ctx->pc = 0x10A7CCu;
            goto label_10a7cc;
        }
    }
    ctx->pc = 0x10A784u;
label_10a784:
    // 0x10a784: 0xc042a68  jal         func_10A9A0
label_10a788:
    if (ctx->pc == 0x10A788u) {
        ctx->pc = 0x10A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A784u;
        // 0x10a788: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A78Cu;
        goto label_10a78c;
    }
    ctx->pc = 0x10A784u;
    SET_GPR_U32(ctx, 31, 0x10A78Cu);
    ctx->pc = 0x10A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A784u;
    // 0x10a788: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A0u, 0x10A784u, 0x10A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A78Cu;
label_10a78c:
    // 0x10a78c: 0xc042a6a  jal         func_10A9A8
label_10a790:
    if (ctx->pc == 0x10A790u) {
        ctx->pc = 0x10A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A78Cu;
        // 0x10a790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A794u;
        goto label_10a794;
    }
    ctx->pc = 0x10A78Cu;
    SET_GPR_U32(ctx, 31, 0x10A794u);
    ctx->pc = 0x10A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A78Cu;
    // 0x10a790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A8u, 0x10A78Cu, 0x10A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A794u;
label_10a794:
    // 0x10a794: 0x10000005  b           . + 4 + (0x5 << 2)
label_10a798:
    if (ctx->pc == 0x10A798u) {
        ctx->pc = 0x10A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A794u;
        // 0x10a798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A79Cu;
        goto label_10a79c;
    }
    ctx->pc = 0x10A794u;
    {
        const bool branch_taken_0x10a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A794u;
        // 0x10a798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a794) {
            ctx->pc = 0x10A7ACu;
            goto label_10a7ac;
        }
    }
    ctx->pc = 0x10A79Cu;
label_10a79c:
    // 0x10a79c: 0x0  nop
    ctx->pc = 0x10a79cu;
    // NOP
label_10a7a0:
    // 0x10a7a0: 0xc042a10  jal         func_10A840
label_10a7a4:
    if (ctx->pc == 0x10A7A4u) {
        ctx->pc = 0x10A7A8u;
        goto label_10a7a8;
    }
    ctx->pc = 0x10A7A0u;
    SET_GPR_U32(ctx, 31, 0x10A7A8u);
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A7A0u, 0x10A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7A8u;
label_10a7a8:
    // 0x10a7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a7ac:
    // 0x10a7ac: 0xc04216c  jal         func_1085B0
label_10a7b0:
    if (ctx->pc == 0x10A7B0u) {
        ctx->pc = 0x10A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7ACu;
        // 0x10a7b0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7B4u;
        goto label_10a7b4;
    }
    ctx->pc = 0x10A7ACu;
    SET_GPR_U32(ctx, 31, 0x10A7B4u);
    ctx->pc = 0x10A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7ACu;
    // 0x10a7b0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10A7ACu, 0x10A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B4u;
label_10a7b4:
    // 0x10a7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a7b8:
    // 0x10a7b8: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_10a7bc:
    if (ctx->pc == 0x10A7BCu) {
        ctx->pc = 0x10A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7B8u;
        // 0x10a7bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7C0u;
        goto label_10a7c0;
    }
    ctx->pc = 0x10A7B8u;
    {
        const bool branch_taken_0x10a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7B8u;
        // 0x10a7bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7b8) {
            ctx->pc = 0x10A7D0u;
            goto label_10a7d0;
        }
    }
    ctx->pc = 0x10A7C0u;
label_10a7c0:
    // 0x10a7c0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a7c4:
    // 0x10a7c4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a7c8:
    if (ctx->pc == 0x10A7C8u) {
        ctx->pc = 0x10A7CCu;
        goto label_10a7cc;
    }
    ctx->pc = 0x10A7C4u;
    {
        const bool branch_taken_0x10a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a7c4) {
            ctx->pc = 0x10A7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a7a0;
        }
    }
    ctx->pc = 0x10A7CCu;
label_10a7cc:
    // 0x10a7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a7d0:
    // 0x10a7d0: 0xc04216c  jal         func_1085B0
label_10a7d4:
    if (ctx->pc == 0x10A7D4u) {
        ctx->pc = 0x10A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D0u;
        // 0x10a7d4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7D8u;
        goto label_10a7d8;
    }
    ctx->pc = 0x10A7D0u;
    SET_GPR_U32(ctx, 31, 0x10A7D8u);
    ctx->pc = 0x10A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7D0u;
    // 0x10a7d4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10A7D0u, 0x10A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7D8u;
label_10a7d8:
    // 0x10a7d8: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_10a7dc:
    if (ctx->pc == 0x10A7DCu) {
        ctx->pc = 0x10A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D8u;
        // 0x10a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7E0u;
        goto label_10a7e0;
    }
    ctx->pc = 0x10A7D8u;
    {
        const bool branch_taken_0x10a7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x10A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D8u;
        // 0x10a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7d8) {
            ctx->pc = 0x10A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a710;
        }
    }
    ctx->pc = 0x10A7E0u;
label_10a7e0:
    // 0x10a7e0: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_10a7e4:
    if (ctx->pc == 0x10A7E4u) {
        ctx->pc = 0x10A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7E0u;
        // 0x10a7e4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7E8u;
        goto label_10a7e8;
    }
    ctx->pc = 0x10A7E0u;
    {
        const bool branch_taken_0x10a7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x10A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7E0u;
        // 0x10a7e4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7e0) {
            ctx->pc = 0x10A708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a708;
        }
    }
    ctx->pc = 0x10A7E8u;
label_10a7e8:
    // 0x10a7e8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10a7e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10a7ec:
    // 0x10a7ec: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10a7ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a7f0:
    // 0x10a7f0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10a7f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10a7f4:
    // 0x10a7f4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10a7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a7f8:
    // 0x10a7f8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10a7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10a7fc:
    // 0x10a7fc: 0x3e00008  jr          $ra
label_10a800:
    if (ctx->pc == 0x10A800u) {
        ctx->pc = 0x10A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7FCu;
        // 0x10a800: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A804u;
        goto label_fallthrough_0x10a7fc;
    }
    ctx->pc = 0x10A7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7FCu;
        // 0x10a800: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a7fc:
    ctx->pc = 0x10A804u;
}
