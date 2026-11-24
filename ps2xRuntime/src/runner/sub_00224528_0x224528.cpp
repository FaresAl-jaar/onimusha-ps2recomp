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

// Function: sub_00224528
// Address: 0x224528 - 0x22459c
void sub_00224528_0x224528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224528_0x224528");
#endif

    switch (ctx->pc) {
        case 0x224548u: goto label_224548;
        case 0x224564u: goto label_224564;
        default: break;
    }

    ctx->pc = 0x224528u;

    // 0x224528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22452c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22452cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224534: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x224534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22453c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224540: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224540u;
    SET_GPR_U32(ctx, 31, 0x224548u);
    ctx->pc = 0x224544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224540u;
    // 0x224544: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224540u, 0x224548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224548u;
label_224548:
    // 0x224548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22454c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22454cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224554: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x224554u;
    {
        const bool branch_taken_0x224554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224554u;
        // 0x224558: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224554) {
            ctx->pc = 0x224588u;
            goto label_224588;
        }
    }
    ctx->pc = 0x22455Cu;
    // 0x22455c: 0xc049590  jal         func_125640
    ctx->pc = 0x22455Cu;
    SET_GPR_U32(ctx, 31, 0x224564u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22455Cu, 0x224564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224564u;
label_224564:
    // 0x224564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224568: 0x6a230013  ldl         $v1, 0x13($s1)
    ctx->pc = 0x224568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22456c: 0x6e23000c  ldr         $v1, 0xC($s1)
    ctx->pc = 0x22456cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x224570: 0x8a240017  lwl         $a0, 0x17($s1)
    ctx->pc = 0x224570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x224574: 0x9a240014  lwr         $a0, 0x14($s1)
    ctx->pc = 0x224574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x224578: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x224578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22457c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x22457cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224580: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x224580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x224584: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x224584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_224588:
    // 0x224588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22458c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22458cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224594: 0x3e00008  jr          $ra
    ctx->pc = 0x224594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224594u;
        // 0x224598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22459Cu;
}
