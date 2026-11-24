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

// Function: sub_0021D410
// Address: 0x21d410 - 0x21d640
void sub_0021D410_0x21d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D410_0x21d410");
#endif

    switch (ctx->pc) {
        case 0x21d480u: goto label_21d480;
        case 0x21d4b8u: goto label_21d4b8;
        case 0x21d51cu: goto label_21d51c;
        case 0x21d584u: goto label_21d584;
        case 0x21d58cu: goto label_21d58c;
        case 0x21d594u: goto label_21d594;
        case 0x21d59cu: goto label_21d59c;
        case 0x21d5a4u: goto label_21d5a4;
        case 0x21d5b4u: goto label_21d5b4;
        case 0x21d5c4u: goto label_21d5c4;
        case 0x21d5d0u: goto label_21d5d0;
        case 0x21d5e0u: goto label_21d5e0;
        case 0x21d5fcu: goto label_21d5fc;
        case 0x21d604u: goto label_21d604;
        case 0x21d60cu: goto label_21d60c;
        default: break;
    }

    ctx->pc = 0x21d410u;

    // 0x21d410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d418: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d41c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21d41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d420: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d424: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21d424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d434: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d438: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x21d438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21d43c: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x21d43cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x21d440: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x21D440u;
    {
        const bool branch_taken_0x21d440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D440u;
        // 0x21d444: 0x73082  srl         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d440) {
            ctx->pc = 0x21D620u;
            goto label_21d620;
        }
    }
    ctx->pc = 0x21D448u;
    // 0x21d448: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x21d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x21d44c: 0x2c636fa0  sltiu       $v1, $v1, 0x6FA0
    ctx->pc = 0x21d44cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28576) ? 1 : 0);
    // 0x21d450: 0x50600074  beql        $v1, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x21D450u;
    {
        const bool branch_taken_0x21d450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d450) {
            ctx->pc = 0x21D454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D450u;
            // 0x21d454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D624u;
            goto label_21d624;
        }
    }
    ctx->pc = 0x21D458u;
    // 0x21d458: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x21d458u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x21d45c: 0x8d03a210  lw          $v1, -0x5DF0($t0)
    ctx->pc = 0x21d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA210u));
    // 0x21d460: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D460u;
    {
        const bool branch_taken_0x21d460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D460u;
        // 0x21d464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d460) {
            ctx->pc = 0x21D474u;
            goto label_21d474;
        }
    }
    ctx->pc = 0x21D468u;
    // 0x21d468: 0x5467006e  bnel        $v1, $a3, . + 4 + (0x6E << 2)
    ctx->pc = 0x21D468u;
    {
        const bool branch_taken_0x21d468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x21d468) {
            ctx->pc = 0x21D46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D468u;
            // 0x21d46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D624u;
            goto label_21d624;
        }
    }
    ctx->pc = 0x21D470u;
    // 0x21d470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d474:
    // 0x21d474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d478: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x21D478u;
    SET_GPR_U32(ctx, 31, 0x21D480u);
    ctx->pc = 0x21D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D478u;
    // 0x21d47c: 0xad07a210  sw          $a3, -0x5DF0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943248), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x21D478u, 0x21D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D480u;
label_21d480:
    // 0x21d480: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21d484: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x21d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x21d488: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x21d48c: 0x32450007  andi        $a1, $s2, 0x7
    ctx->pc = 0x21d48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x21d490: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x21d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x21d494: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x21d494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21d498: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21d49c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x21d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x21d4a0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x21d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x21d4a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21d4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x21d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x21d4ac: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x21D4ACu;
    {
        const bool branch_taken_0x21d4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4ACu;
        // 0x21d4b0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4ac) {
            ctx->pc = 0x21D518u;
            goto label_21d518;
        }
    }
    ctx->pc = 0x21D4B4u;
    // 0x21d4b4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x21d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_21d4b8:
    // 0x21d4b8: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x21d4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21d4bc: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x21d4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21d4c0: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x21d4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21d4c4: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x21d4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21d4c8: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x21d4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21d4cc: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x21d4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21d4d0: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x21d4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x21d4d4: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x21d4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x21d4d8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x21d4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4dc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x21d4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4e0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x21d4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4e4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x21d4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4e8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x21d4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4ec: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x21d4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4f0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x21d4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4f4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x21d4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21d4f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x21d4fc: 0x0  nop
    ctx->pc = 0x21d4fcu;
    // NOP
    // 0x21d500: 0x0  nop
    ctx->pc = 0x21d500u;
    // NOP
    // 0x21d504: 0x1444ffec  bne         $v0, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21D504u;
    {
        const bool branch_taken_0x21d504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D504u;
        // 0x21d508: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d504) {
            ctx->pc = 0x21D4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d4b8;
        }
    }
    ctx->pc = 0x21D50Cu;
    // 0x21d50c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21D50Cu;
    {
        const bool branch_taken_0x21d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d50c) {
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D514u;
    // 0x21d514: 0x0  nop
    ctx->pc = 0x21d514u;
    // NOP
label_21d518:
    // 0x21d518: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_21d51c:
    // 0x21d51c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x21d51cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d520: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21d524: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x21d524u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21d528: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x21d528u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d52c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x21d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x21d530: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x21d530u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x21d534: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x21d534u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x21d538: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x21d538u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x21d53c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x21d540: 0x0  nop
    ctx->pc = 0x21d540u;
    // NOP
    // 0x21d544: 0x0  nop
    ctx->pc = 0x21d544u;
    // NOP
    // 0x21d548: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21D548u;
    {
        const bool branch_taken_0x21d548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D548u;
        // 0x21d54c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d548) {
            ctx->pc = 0x21D51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d51c;
        }
    }
    ctx->pc = 0x21D550u;
label_21d550:
    // 0x21d550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d554: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21d554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d558: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x21d558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x21d55c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x21d560: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x21d564: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x21d564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x21d568: 0x26109fc8  addiu       $s0, $s0, -0x6038
    ctx->pc = 0x21d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942664));
    // 0x21d56c: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x21d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
    // 0x21d570: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x21d570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x21d574: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x21d574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x21d578: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x21d578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x21d57c: 0xc0845a0  jal         func_211680
    ctx->pc = 0x21D57Cu;
    SET_GPR_U32(ctx, 31, 0x21D584u);
    ctx->pc = 0x21D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D57Cu;
    // 0x21d580: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211680u, 0x21D57Cu, 0x21D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D584u;
label_21d584:
    // 0x21d584: 0xc087590  jal         func_21D640
    ctx->pc = 0x21D584u;
    SET_GPR_U32(ctx, 31, 0x21D58Cu);
    ctx->pc = 0x21D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D584u;
    // 0x21d588: 0x2624090c  addiu       $a0, $s1, 0x90C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D640u, 0x21D584u, 0x21D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D58Cu;
label_21d58c:
    // 0x21d58c: 0xc0875aa  jal         func_21D6A8
    ctx->pc = 0x21D58Cu;
    SET_GPR_U32(ctx, 31, 0x21D594u);
    ctx->pc = 0x21D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D58Cu;
    // 0x21d590: 0x26240950  addiu       $a0, $s1, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D6A8u, 0x21D58Cu, 0x21D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D594u;
label_21d594:
    // 0x21d594: 0xc0875cc  jal         func_21D730
    ctx->pc = 0x21D594u;
    SET_GPR_U32(ctx, 31, 0x21D59Cu);
    ctx->pc = 0x21D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D594u;
    // 0x21d598: 0x262436c0  addiu       $a0, $s1, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D730u, 0x21D594u, 0x21D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D59Cu;
label_21d59c:
    // 0x21d59c: 0xc0848da  jal         func_212368
    ctx->pc = 0x21D59Cu;
    SET_GPR_U32(ctx, 31, 0x21D5A4u);
    ctx->pc = 0x21D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D59Cu;
    // 0x21d5a0: 0x262409f8  addiu       $a0, $s1, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212368u, 0x21D59Cu, 0x21D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5A4u;
label_21d5a4:
    // 0x21d5a4: 0x26240a0c  addiu       $a0, $s1, 0xA0C
    ctx->pc = 0x21d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x21d5a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5ac: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x21D5ACu;
    SET_GPR_U32(ctx, 31, 0x21D5B4u);
    ctx->pc = 0x21D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5ACu;
    // 0x21d5b0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21D5ACu, 0x21D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5B4u;
label_21d5b4:
    // 0x21d5b4: 0x26240b9c  addiu       $a0, $s1, 0xB9C
    ctx->pc = 0x21d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2972));
    // 0x21d5b8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x21d5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x21d5bc: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x21D5BCu;
    SET_GPR_U32(ctx, 31, 0x21D5C4u);
    ctx->pc = 0x21D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5BCu;
    // 0x21d5c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21D5BCu, 0x21D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5C4u;
label_21d5c4:
    // 0x21d5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5c8: 0xc087fd2  jal         func_21FF48
    ctx->pc = 0x21D5C8u;
    SET_GPR_U32(ctx, 31, 0x21D5D0u);
    ctx->pc = 0x21D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5C8u;
    // 0x21d5cc: 0x26250d30  addiu       $a1, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF48u, 0x21D5C8u, 0x21D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5D0u;
label_21d5d0:
    // 0x21d5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5d4: 0x26251310  addiu       $a1, $s1, 0x1310
    ctx->pc = 0x21d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4880));
    // 0x21d5d8: 0xc083b0c  jal         func_20EC30
    ctx->pc = 0x21D5D8u;
    SET_GPR_U32(ctx, 31, 0x21D5E0u);
    ctx->pc = 0x21D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5D8u;
    // 0x21d5dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EC30u, 0x21D5D8u, 0x21D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5E0u;
label_21d5e0:
    // 0x21d5e0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21D5E0u;
    {
        const bool branch_taken_0x21d5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d5e0) {
            ctx->pc = 0x21D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D5E0u;
            // 0x21d5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D620u;
            goto label_21d620;
        }
    }
    ctx->pc = 0x21D5E8u;
    // 0x21d5e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21d5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21d5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5f4: 0xc088756  jal         func_221D58
    ctx->pc = 0x21D5F4u;
    SET_GPR_U32(ctx, 31, 0x21D5FCu);
    ctx->pc = 0x21D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5F4u;
    // 0x21d5f8: 0x26251f30  addiu       $a1, $s1, 0x1F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221D58u, 0x21D5F4u, 0x21D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5FCu;
label_21d5fc:
    // 0x21d5fc: 0xc087a86  jal         func_21EA18
    ctx->pc = 0x21D5FCu;
    SET_GPR_U32(ctx, 31, 0x21D604u);
    ctx->pc = 0x21D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5FCu;
    // 0x21d600: 0x262436b0  addiu       $a0, $s1, 0x36B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EA18u, 0x21D5FCu, 0x21D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D604u;
label_21d604:
    // 0x21d604: 0xc08761e  jal         func_21D878
    ctx->pc = 0x21D604u;
    SET_GPR_U32(ctx, 31, 0x21D60Cu);
    ctx->pc = 0x21D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D604u;
    // 0x21d608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D878u, 0x21D604u, 0x21D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D60Cu;
label_21d60c:
    // 0x21d60c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D60Cu;
    {
        const bool branch_taken_0x21d60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D60Cu;
        // 0x21d610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d60c) {
            ctx->pc = 0x21D620u;
            goto label_21d620;
        }
    }
    ctx->pc = 0x21D614u;
    // 0x21d614: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x21d614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x21d618: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21d618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d61c: 0xae33004c  sw          $s3, 0x4C($s1)
    ctx->pc = 0x21d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
label_21d620:
    // 0x21d620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d624:
    // 0x21d624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d62c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d630: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d634: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d638: 0x3e00008  jr          $ra
    ctx->pc = 0x21D638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D638u;
        // 0x21d63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D640u;
}
